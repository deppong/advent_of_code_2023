#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void part1() {}

int main(void) {
    char str[1024];
    int sum = 0;
    while(scanf("%s\n", str) > 0) {
        printf("%s\n",str);
        sum++;
    } 
    printf("%d\n", sum);

    return 0;
}