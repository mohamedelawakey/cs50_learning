#include <stdio.h>
#include <cs50.h>
int add(int first_num, int secound_num);
int main(void){
    int first_num = get_int("what is first number? ");
    int secound_num = get_int("what is secound number? ");
    printf("%i\n",add(first_num,secound_num));
}

int add(int first_num, int secound_num){
    return first_num + secound_num;
}
