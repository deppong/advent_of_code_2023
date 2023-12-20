#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[1024];
    int sum = 0;
    while(fgets(str, sizeof(str), stdin) != NULL) {
        int map[4];
        char*p=strtok(str, "|\n");
        while(p!=NULL){
            sscanf(p, "%d %d %d %d", &map[0],&map[1],&map[2],&map[3]);
            
            p=strtok(NULL, "|\n");
        }
        printf("%d %d %d %d\n", map[0],map[1],map[2],map[3]);
        sum++;
    } 
    printf("%d\n", sum);

    return 0;
}