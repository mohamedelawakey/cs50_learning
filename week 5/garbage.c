#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
int main(void){
    int scores[1024];
    for (int i = 0; i < 1024; i++){
        printf("%i\n",scores[i]);
    }

    int *x;
    int *y;
    x = malloc(sizeof(int));
    *x = 42;
    *y = 13;
    y = x;
    *y = 13;

}
