#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void part1() {}

int main(void) {
    char str[1024];
    int sum = 0;
    int game = 1;
    while(fgets(str, sizeof str, stdin) != NULL) {
        int prev_digit = 0;
        char *p;
        int flag = 0;
        printf("str: %s\n", str);
        for(p = strtok(str, " :,;\n"); p!=NULL; p=strtok(NULL, " :,;\n")) {
            if (isdigit(p[0])) {
                prev_digit=atoi(p);
            } else {
                switch(p[0]) {
                    case 'r': if(prev_digit>12) {flag=1;}; break;
                    case 'g': if(prev_digit>13) {flag=1;}; break;
                    case 'b': if(prev_digit>14) {flag=1;}; break;
                }
            }
            if (flag) break;
        }

        if (!flag) { sum += game; printf("possible, id: %d\n", game); }
        game++;
    } 
    printf("%d\n", sum);

    return 0;
}