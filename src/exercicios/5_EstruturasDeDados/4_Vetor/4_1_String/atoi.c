/**      @file: vetor/strings/4-zip.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função zip. */

#include <stdio.h>

/* Recebe uma cadeia de caracteres e retorna o valor inteiro */
void zip(char *str) {

}

int main() {
    char* str1 = "AAABCCCCCBBBCCAAA";
    char* str2 = "abcdaabbccddaaabbc"
    char* str3 = "XXXXXXXXXXXXXXXXXXXX";

    zip(str1);
    zip(str2);
    zip(str3);

    return 0;
}

/* Resposta esperada:
3AB5C3B2C3A
abcd2a2b2c2d3a2bc
20X
*/