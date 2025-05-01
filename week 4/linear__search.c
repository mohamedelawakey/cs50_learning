#include <stdio.h>
#include <cs50.h>
int main(void){
    // linear search
    // o(n)
    int num [] = {20, 500, 10, 5, 100, 8, 50};
    int search_num = get_int("enter the number you want to search: ");

    for (int i = 0; i < 7; i++){
        if(num[i] == search_num){
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
