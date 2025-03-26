#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> // you can use this lib instead that

int main(void){
    string s = get_string("before: ");
    printf("after: ");

    for(int i = 0, n = strlen(s); i < n; i++){
        printf("%c",toupper(s[i]));

        // You can give up writing this because it does all of this.
        /*

        if(s[i] >='a' && s[i] <='z'){
            // printf("%c",s[i] -32);
            printf("%c",toupper(s[i]));
        }
        else{
            printf("%c",s[i]);
        }

        */

    }
    printf("\n");
}
