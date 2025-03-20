#include <stdio.h>
#include <cs50.h>
int main(void){
    char c = get_char("do you agree? ");
    if (c == 'y' || c == 'Y'){
        printf("you agreed\n");
    }
    else if(c == 'n' || c == 'N'){
        printf("you dissagreed!\n");
    }
    else{
        printf("error! please enter (y or n)\n");
    }
}
