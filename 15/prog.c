#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[25000];
    int sum = 0;
    scanf("%s\n", str);
    char*p=strtok(str, ",");
    while(p!=NULL) {
        int c = 0;
        for(int i = 0; i < strlen(p); i++) {
            c = (c+p[i])*17 % 256;
        }
        sum+=c;
        p=strtok(NULL, ",");
    }
    printf("%d\n", sum);

    return 0;
}