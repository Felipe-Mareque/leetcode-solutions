#include <stdio.h>
#include <string.h>

// Sua função exatamente como você escreveu
int lengthOfLastWord(char* s) {
    int lenght = strlen(s) - 1;
    int c = 0;

    while (lenght >= 0 && s[lenght] == ' ') {
        lenght--;
    }

    while (lenght >= 0 && s[lenght] != ' ') {
        c++;
        lenght--;
    }
    return c;
}

int main() {
    // Casos de teste
    char teste1[] = "Hello World";
    char teste2[] = "   fly me   to   the moon  ";
    char teste3[] = "luffy is still joyboy";
    char teste4[] = "a";

    printf("Exemplo 1: '%s' -> Resultado: %d\n", teste1, lengthOfLastWord(teste1));
    printf("Exemplo 2: '%s' -> Resultado: %d\n", teste2, lengthOfLastWord(teste2));
    printf("Exemplo 3: '%s' -> Resultado: %d\n", teste3, lengthOfLastWord(teste3));
    printf("Exemplo 4: '%s' -> Resultado: %d\n", teste4, lengthOfLastWord(teste4));

    return 0;
}