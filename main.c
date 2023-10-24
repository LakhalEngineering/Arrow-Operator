#include <string.h>
#include <stdio.h>


typedef struct {
    int age;
    char name[20];
} person;

int main(){
    person p1,p2;
    person *ptr = &p1;

    p1.age = 9;
    strcpy(p2.name, "sara");

    printf("%d her age old\n",ptr->age);
    printf("%s is %d years old.\n", p2.name, p1.age);
}