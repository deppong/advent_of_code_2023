#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char str[1024];
    char sack1[1024]={0}, sack2[1024]={0}, sack3[1024]={0};

    int sum = 0;

    while(scanf("%s\n%s\n%s\n", sack1, sack2, sack3) > 0) {
        // unsigned long len = strlen(str);
        int continue_loop = 1;

        //I LOVE C !!!!
        /*
        strncpy(sack1, str, len/2);
        sack1[(len/2)-1] = 0;

        strncpy(sack2, str+len/2, len/2);
        sack2[len] = 0;
        */

        printf("%s, %s, %s\n", sack1, sack2, sack3);

        for (int i = 0; i < strlen(sack1); i++) {
            if (!continue_loop) { break; }
            for (int j = 0; j < strlen(sack2); j++) {
                if(!continue_loop) {break;}
                for (int k = 0; k < strlen(sack3); k++) {
                    if (sack1[i]==sack2[j] && sack1[i]==sack3[k]) {
                        sum+=sack1[i]&31;
                        sum+=sack1[i]&32?0:26;
                        continue_loop=0;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}