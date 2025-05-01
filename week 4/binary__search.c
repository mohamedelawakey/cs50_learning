#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void){
    // binary search
    // o(n)
    string strings [] = {"medo", "ali", "medo", "yousef"};
    string search_num = get_string("enter the name: ");

    for (int i = 0; i < 4; i++){
        if(strcmp(strings[i],search_num) == 0){
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
