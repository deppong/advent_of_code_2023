#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[1024];
    char *map[] = {
        "zero","one","two","three","four","five","six", "seven","eight","nine"
    };
    char *s;
    int sum = 0;
    while(scanf("%s\n", str) > 0) {
        // Part 2:
        for(int i=0;i<10;i++) {
            while((s = strstr(str, map[i])) != NULL) {
                memset(s+1, i+48, 1);
            }
        }
        printf("%s\n", str);
        // --------
        char first, last;
        int is_first = 1;
        for (int i = 0; i < strlen(str); i++) {
            if (isdigit(str[i])) {
                if (is_first) {
                    first = str[i];
                    last = str[i];
                    is_first=0;
                } else {
                    last = str[i];
                }
            }
        }
        char outbuf[1024];
        sprintf(outbuf, "%c%c", first, last);
        printf("%s\n",outbuf);
        sum+=atoi(outbuf);
    } 
    printf("%d\n",sum);

    return 0;
}