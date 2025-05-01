#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
int main(void){
    FILE  *file = fopen("phone_bock.csv","a");

    if (file == NULL){
        return 1;
    }

    string name = get_string("name: ");
    string number = get_string("number: ");

    fprintf(file,"%s, %s\n",name,number);
    fclose(file);
}
