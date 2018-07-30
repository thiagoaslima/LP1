#include <stdio.h>
#include <string.h>

void writeOnFile(char str[], int size) {
    FILE* arq = fopen("./write.txt", "w");
    int i;
    for (i = 0; i < size; i++) {
        fputc(str[i], arq);
    }
    fclose(arq);
}

int main() {

    char str[99];
    int len;
    printf("Escreva uma string de, no máximo, 25 caracteres: ");
    scanf("%s", str);

    len = strlen(str) <= 25 ? strlen(str) : 25;
    
    writeOnFile(str, len);

    return 0;
}