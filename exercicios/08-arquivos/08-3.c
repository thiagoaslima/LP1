#include <stdio.h>
#include <string.h>

void resetFile()
{
    FILE *arq = fopen("./strings.txt", "w");
    fclose(arq);
}

void writeOnFile(char str[], int size)
{
    FILE *arq = fopen("./strings.txt", "a");
    int i;
    for (i = 0; i < size; i++)
    {
        fputc(str[i], arq);
    }
    fputs("\n", arq);
    fclose(arq);
}

int main()
{
    char str[10][25];
    int len;
    int i;

    resetFile();

    for (i = 0; i < 10; i++)
    {
        printf("Escreva uma string de, no máximo, 25 caracteres: ");
        scanf("%s", str[i]);
    }

    for (i = 0; i < 10; i++)
    {
        len = strlen(str[i]) > 25 ? 25 : strlen(str[i]);
        writeOnFile(str[i], len);
    }

    return 0;
}