#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
int main(void){
    // copy the address

    /*
    string s = get_string("s: ");
    string t = s;
    t[0] = toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
    */

    // it's too copy the address
    /*
    char *s = get_string("s: ");
    char *t = s;
    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }
    printf("%s\n",s);
    printf("%s\n",t);
    */

    char *s = get_string("s: ");

    if (s == NULL){
        return 1;
    }
    char *t = malloc(strlen(s) + 1);

    if (t == NULL){
        return 1;
    }

    strcopy(t,s);
    /*
    for(int i = 0, n = strlen(s) ; i <= n; i++){
        t[i] = s[i];
    }
    */
    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    free(t);
    printf("%s\n",s);
    printf("%s\n",t);

}
