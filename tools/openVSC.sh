#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo -e "\n\e[1;31;40mSyntax\e[1;0;40m: \e[1;95;40mcompCS\e[1;91;40m <\e[1;95;40mfile_name\e[1;91;40m>\e[1;0;40m.\e[0m\n"
    echo -e "\e[1;31;40mAfter compiling\e[1;0;40m, \e[1;31;40muse \e[1;95;40m./\e[1;91;40m<\e[1;95;40mfile_name\e[1;91;40m>\e[1;0;40m.\e[0m\n"
    exit 1
fi

arquivo="$1"
output="${arquivo%.c}"
line_number_norminette=1
line_number_output=1

echo -e "\n\e[1;31;40mExecuting \e[1;95;40mnorminette \e[1;31;40mto check for norm noncompliance...\e[0m\n\n"
echo -e "\e[1;31mNORMINETTE DISPLAY:\e[0m\n"
echo -e "\e[1;31m---|-------------------------------------------------------------------| NORMINETTE NORM CHECK |------------------------------------------------------------------|\e[0m"

# Executando o norminette e exibindo as linhas com o número da linha
norminette -R CheckForbiddenSourceHeader "$arquivo" | while read -r line; do
    echo -e " $line_number_norminette | $line"
    ((line_number_norminette++))
done

echo -e "\e[1;31m---|-------------------------------------------------------------------| NORMINETTE NORM CHECK |------------------------------------------------------------------|\e[0m"

# Compilando o arquivo
cc -Wall -Wextra -Werror "$arquivo" -o "$output"

if [ $? -eq 0 ]; then
    echo -e "\n\e[1;0;40mCompilation Successful! \e[1;31;40mExecutable file\e[1;0;40m: \e[1;95;40m$output\e[0m\n"
    
    echo -e "\e[1;31;40mApplying \e[1;95;40mchmod \e[1;31;40mpermissions...\e[0m\n\n"
    chmod 711 "$output"
    echo -e "\e[1;31mINFO TABLE:\e[0m"
    echo -e "\n\e[1;31m---| PERMISSIONS -----| LINKS -----| USER -----| GROUP -----| SIZE -----| FULL TIMESTAMP -----------------------| FILE NAME --------------------------------------|\e[0m"

    # Formatar a saída do ls para garantir alinhamento com os títulos
    ls --full-time -l "$output" | awk '{
        printf "   | %-12s     | %-6s     | %-5s     | %-6s     | %-5s     | %-15s   | %-62s", $1, $2, $3, $4, $5, $6" "$7" "$8, $9
    }'

    echo -e "\n\e[1;31m---|------------------|------------|-----------|------------|-----------|---------------------------------------|-------------------------------------------------|\e[0m"

    echo -e "\n\e[1;31;40mExecuting \e[1;95;40m$output \e[1;31;40mfor display...\e[0m"
    echo -e "\n\n\e[1;31mOUTPUT DISPLAY:\e[0m"
    echo -e "\n\e[1;31m---|----------------------------------------------------------| COMPILED FILE: \e[1;95m$output \e[1;31m|--------------------------------------------------------|\e[0m"

    # Executando o arquivo compilado e exibindo as linhas com o número da linha
    ./"$output"
    echo -e "\n\e[1;31m---|----------------------------------------------------------| COMPILED FILE: \e[1;95m$output \e[1;31m|--------------------------------------------------------|\e[0m"

else
    echo -e "\n\e[1;31;40mCompilation Error\e[1;0;40m: \e[1;31;40mPlease check the debug log\e[1;0;40m.\e[0m\n"
fi
(norminette-env) jbdmc@jbdmc-VirtualBox:~/Documents/42repo/c00-repo/ex02$  cat /usr/local/bin/openVSC
#!/bin/bash

if [ "$#" -lt 1 ] || [ "$#" -gt 2 ]; then
    echo -e "\n\e[1;31;40mSyntax\e[1;0;40m: \e[1;95;40mopenVSC \e[1;91;40m<\e[1;95;40mfile_name.\e[1;95;40mc\e[1;91;40m>\e[0m\n"
    echo -e "\e[1;31;40mUse \e[1;95;40m--with-header \e[1;31;40mto open the file and automatically generate the header\e[1;0;40m.\e[0m\n"
    exit 1
fi

arquivo="$1"

# Verifica se o arquivo existe
if [ ! -f "$arquivo" ]; then
    echo -e "\e[1;31;40mError\e[1;0;40m: \e[1;95;40m$arquivo\e[1;31;40m doesn't exist in the current context\e[1;0;40m.\e[0m"
    exit 1
fi

# Abre o arquivo no VS Code
echo -e "\e[1;31;40mOpening \e[1;95;40m$arquivo \e[1;31;40m...\e[0m"
code "$arquivo"

# Se for chamado com a flag --with-header, gera o header
if [ "$2" == "--with-header" ]; then
    echo -e "\e[1;31;40mWaiting for \e[1;95;40mVSCode \e[1;31;40mto open before generating \e[1;95;40mheader \e[1;31;40m...\e[0m"
    sleep 2

    # Simula o atalho de teclado para gerar o header (Linux com X11 necessário)
    if command -v xdotool &> /dev/null; then
        xdotool search --onlyvisible --class code windowactivate --sync key ctrl+alt+h
    else
        echo -e "\n\e[1;95;40mxdotool \e[1;31;40mnot found\e[1;0;40m. \e[1;31;40mInstall it using\e[1;0;40m: \e[1;95;40msudo apt install xdotool\e[0m"
        exit 1
    fi
fi
