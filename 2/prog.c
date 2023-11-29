#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    A X -> ROCK     1
    B Y -> PAPER    2
    C Z -> SCISSORS 3

    p1 A B C
  p2X  3 0 6
    Y  6 3 0
    Z  0 6 3
    
*/

int main(void) {
    char ai, me;
    int sum = 0;
    int key[] = {3,0,6,6,3,0,0,6,3};
    while(scanf("%c %c\n", &ai, &me) > 0) {
        ai-=65;me-=88;
        printf("%d %d -> %d\n", ai, me, key[ai+me*3]);
        sum+=me+1+key[ai+me*3];
    } 
    printf("%d\n", sum);

    return 0;
}