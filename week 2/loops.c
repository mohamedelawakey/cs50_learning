#include <stdio.h>
#include <cs50.h>
int main(void){
    // when use while, for, and do whil?
    /*
       while --> when you don't know the exact number of iterations (the counter is unknown beforehand).
       for --> when you know exactly how many times the loop should run.
       do-while --> Similar to while, but do at least one execution before checking the condition.
    */

    // while loop
    int counter = 0;
    while(counter < 10){
        counter++;
        printf("mohamed\n");
    }
    printf("\n");

    // for loop
    // %d or %i Format Specifier to add int number
    for(int i = 0; i < 10; i++){
        printf("%i. Ahmed\n",i);
    }
    printf("\n");

    // you can start from 1 and add 1 to the condition
    /*
       t's not preferred because, in programming, counting usually starts from 0,
       which aligns better with memory management and pointers.
       However, you can start from 1 if it makes more logical sense for your specific case.
    */
    for(int i = 1; i < 11; i++){
        printf("%i. Ahmed\n",i);
    }

    // do while
    int num = 0;
    do {
        printf("%s", "Mohamed\n");
        num++;
    } while (num < 10);
}
