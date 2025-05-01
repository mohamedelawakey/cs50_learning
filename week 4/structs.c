#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct{
    string name;
    string number;
}person;

int main(void){
    person people [4];

    people[0].name ="medo";
    people[0].number ="+201127247580";

    people[1].name ="ali";
    people[1].number ="+201127247581";

    people[2].name ="sayed";
    people[2].number ="+201127247582";

    people[3].name ="yousef";
    people[3].number = "+201127247583";

    string search_name = get_string("enter the name: ");
    for(int i = 0; i < 4; i++){
        if(strcmp(people[i].name,search_name) == 0){
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
