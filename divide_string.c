#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stringToWords(char *ogString, char words[][20], int *wordCount) {
    int i = 0, j = 0;
    
    while (*ogString) {
        // Se não for um separador, adicionamos ao buffer da palavra atual
        if (!strchr(" ,.!?;:-", *ogString)) {
            words[i][j] = *ogString;
            j++;
        } else if (j > 0) { 
            // Se encontramos um separador e temos uma palavra em construção, finalizamos ela
            words[i][j] = '\0'; // Adiciona o terminador de string
            i++; // Passamos para a próxima palavra
            j = 0; // Resetamos o índice da palavra
        }
        ogString++; // Avançamos na string original
    }

    // Caso a última palavra não tenha sido terminada por um separador, terminamos aqui
    if (j > 0) {
        words[i][j] = '\0';
        i++;
    }

    *wordCount = i; // Define o número total de palavras
}

int main(void) {
    char ogString[] = "Hello World! I am a coder.";
    char words[20][20]; // Array para armazenar até 20 palavras, com no máximo 19 caracteres cada
    int wordCount = 0;

    stringToWords(ogString, words, &wordCount);

    // Exibir as palavras separadas
    for (int a = 0; a < wordCount; a++) {
        printf("Palavra[%d]: %s\n", a, words[a]);
    }

    return 0;
}
