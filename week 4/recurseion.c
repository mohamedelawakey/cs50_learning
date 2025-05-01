#include <stdio.h>
#include <string.h>
#include <cs50.h>
void draw(int n);

int main(void){
    int higth = get_int("higth: ");
    draw(higth); // 5
}

void draw(int n){ // 5
    if (n <= 0){ // base case
        return;
    }
    draw(n - 1); // recursive
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}
