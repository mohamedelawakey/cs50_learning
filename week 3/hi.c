#include <stdio.h>
#include <cs50.h>

int main(void){

    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c %c %c\n",c1,c2,c3); // chars
    printf("%i %i %i\n",c1,c2,c3); // numbers

    // strings dosen't found by default in c lang
    // without cs50.h you cant use string

    string s = "HI!";
    string t = "BYE!";

    printf("%s\n",s);
    printf("%c%c%c\n",s[0],s[1],s[2]);
    printf("%s\n",t);

    // using array
    // more useful and good where dealing with memory
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n",words[0]);
    printf("%s\n",words[1]);

    printf("%c%c%c\n",words[0][0],words[0][1],words[0][2]);
    printf("%c%c%c%c\n",words[1][0],words[1][1],words[1][2],words[1][3]);

}
