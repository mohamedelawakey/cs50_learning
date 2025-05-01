#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    string str = get_string("input: ");
    printf("output is: %s\n",str);

    int check = strlen(str);
    for(int i =0; i < check; i++){
        printf("%c\n",str[i]);
    }

}
