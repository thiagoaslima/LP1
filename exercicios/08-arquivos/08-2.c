#include <stdio.h>
#include <string.h>

void readFile(char str[25]) {
    FILE* arq = fopen("./write.txt", "r");
    int i = 0;
    char c;

    while(i < 25) {
        c = fgetc(arq);

        if (c != EOF) {
            str[i] = c;
        } else {
            break;
        }

        i++;
    }

    fclose(arq);
}

int main() {    
    char str[25];
    readFile(str);

    printf("%s\n", str);

    return 0;
}