#include <stdio.h>
#include <cs50.h>
int main(void){ 
    float first_num = get_int("what is first number? ");
    float secound_num = get_int("what is secound number? ");
    float total = first_num / secound_num;
    printf("%.3f\n",total);
    double total1 = first_num / secound_num;
    printf("%.20f\n",total1);
}
