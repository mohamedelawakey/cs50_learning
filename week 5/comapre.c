#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void){
    // numbers
    // int num1 = get_int("num1: ");
    // int num2 = get_int("num2: ");

    // strings
    char *var1 = get_string("var1: ");
    char *var2 = get_string("var2: ");

    printf("%p\n",var1);
    printf("%p\n",var2);

    // strings
    if(strcmp(var1 , var2) == 0){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }

    /*
    // numbers
    if(num1 == num2){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }

    */

}
