#include <stdio.h>

int strlen2(char str[]) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}

void strjoin(char destino[], char origem1[], char origem2[]) {
    int tam1 = strlen2(origem1);
    int tam2 = strlen2(origem2);
    int i, j;

    for (i = 0; i < tam1; i++) {
        destino[i] = *(origem1+i);
    }

    for (j = 0; j < tam2; j++) {
        destino[tam1 + j] = origem2[j];
    }
    
    destino[i+j] = '\0';
}

int main() {
    char str1[] = "abc";
    char str2[] = "def";
    char str3[99];

    strjoin(str3, str1, str2);

    printf("%s %d\n", str1, strlen2(str1));
    printf("%s %d\n", str2, strlen2(str2));
    printf("%s %d\n", str3, strlen2(str3));

    return 0;
}