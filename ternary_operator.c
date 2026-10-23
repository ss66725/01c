#include <stdio.h>
#include <stdlib.h>
int main(){
    int age;
    printf("Please scanf your age\n");
    scanf("%d",&age);
    (age >= 18)?(printf("your have died\n")):((age <= 10)?(printf("Be happy!\n")):(printf("Beware!\n")));
    return 0;
}