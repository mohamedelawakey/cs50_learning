#include <cs50.h>
#include <stdio.h>
int main(void){

    int num;
    do{
        num = get_int("Height: ");
    }while(num < 1 || num > 8);

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num - i; j++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}
// mkdir
