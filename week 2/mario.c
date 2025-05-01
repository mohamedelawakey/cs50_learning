#include<stdio.h>
#include<cs50.h>
int main(void){
    for(int i = 0; i < 4; i++){
        printf("?");
    }
    printf("\n");

    int num;
    do{
        num = get_int("enter the size: ");
    }
    while(num < 1);

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("#");
        }
        printf("\n");
    }
}
