#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void){
    int n = 50;
    printf("%i\n",n);

    // with pointers
    // %p --> for pointer
    // & --> to know the address in memory
    printf("%p\n",&n);

    // * define a pointer
    // * = &.. --> have the address of ..
    int *p = &n;
    printf("%p\n",p);   // --> print the address
    printf("%i\n",*p); // --> print the value

    // strings
    string s = "HI!";
    printf("\nstrings:\n\n%p\n",s);
    printf("%s\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n\n",&s[3]);

    // chars & strings
    // --> string is not a data type in c lang, it's in cs50.h lib
    // --> in c the strings == char *name_of_variable

    char *z = "HI!";
    printf("%c",*z);
    printf("%c",z[1]);
    printf("%c\n",z[2]);
}
