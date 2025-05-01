#include <stdio.h>
#include <cs50.h>

void print_colum(int height);
int main(void)
{
    int height = get_int("height: ");
    print_colum(height);
}

void print_colum(int height){
    for (int i = 0; i < height; i++){
        printf("#\n");
    }
}
