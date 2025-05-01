#include <stdio.h>
#include <cs50.h>

int main(void){

    int scores[3];
    int n = 3;

    // deful we but it
    /*
    scores[0] = 73;
    scores[1] = 72;
    scores[2] = 33;
    */

    // it's not wrong bu it's not good for memory
    /*
    scores[0] = get_int("enter the score 1: ");
    scores[1] = get_int("enter the score 2: ");
    scores[2] = get_int("enter the score 3: ");
    */
    // best way, cause code more readable and clean and dosen't waste memory
    for (int i = 0; i < 3; i++){
        scores[i] = get_int("enter the score: ");
    }

    printf("the avrage is: %f\n",(scores[0] + scores[1] + scores[2]) / 3.0);

}
