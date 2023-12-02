#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int x1,x2,y1,y2;
    int count = 0;

    while(scanf("%d-%d,%d-%d\n", &x1, &x2, &y1, &y2) > 0) {
        if ((x1 <= y2 && y1 <= x2) ) {
            count++;
        }
    }
    printf("count: %d\n", count);

    return 0;
}