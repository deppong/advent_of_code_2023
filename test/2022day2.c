#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    A X -> ROCK     1
    B Y -> PAPER    2
    C Z -> SCISSORS 3

    p1 A B C
  p2X  3 1 2
    Y  4 5 6
    Z  8 9 7
    
*/

int main(void) {
    char ai, me;
    int sum = 0;
    int key[] = {3,1,2,4,5,6,8,9,7};
    while(scanf("%c %c\n", &ai, &me) > 0) {
        ai-=65;me-=88;
        printf("%d %d -> %d\n", ai, me, key[ai+me*3]);
        sum+=key[ai+me*3];
    } 
    printf("%d\n", sum);

    return 0;
}