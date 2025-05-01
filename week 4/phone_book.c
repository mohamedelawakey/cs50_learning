#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void){
    string names [] = {"medo", "ali", "sayed", "yousef"};
    string numbers[] = {"+201127247580","+201127247581","+201127247582","+201127247583"};

    string search_name = get_string("enter the name: ");
    for(int i = 0; i < 4; i++){
        if(strcmp(names[i],search_name) == 0){
            printf("found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
