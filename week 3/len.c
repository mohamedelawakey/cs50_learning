#include <stdio.h>
#include <cs50.h>

// You can do not do all of the above and use a library of string.h
#include <string.h>

// int str_len(string s);

int main(void){

    string name = get_string("what's your name? ");
    // int len = str_len(name);
    int len = strlen(name);
    printf("%i\n",len);

}

/*
int str_len(string s){

    int n = 0;
    while(s[n] != '\0'){
        n++;
    }
    return n;
}
*/
