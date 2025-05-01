#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[]){
    node *list = NULL;

    for(int i = 0; i < argc; i++){
        int num = atoi (argv[i]);
        node *n = malloc(sizeof(node));
        if(n == NULL){
            // free()
            return 1;
        }
        n -> number = num;
        n -> next = list;
        list = n;
    }
    
    node *ptr = list;
        while(ptr != NULL){
            printf("%i\n",ptr->number);
            ptr = ptr ->next;
        }
    return 0;
}
