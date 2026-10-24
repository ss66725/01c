#include<stdio.h>
int main(){
    int num;
    printf("Please input an integer with no more than three digits:");
    scanf("%d",&num);
    int i;
    int hundreds_place;
    int tens_place;
    int ones_place;
    for(i=100;i>0.1;i*=0.1){
        switch(i){
            case 100:
                hundreds_place=num/100;
                break;
            case 10:
                tens_place=num/10-hundreds_place;
                break;
            case 1:
                ones_place=num/1-tens_place;
                break;
        }
        
        if(hundreds_place == 0){
            if(tens_place == 0){
                if(ones_place == 0){
                    printf("It's ones digits");
                    printf("The number is 0");
                    printf("The reserved number is 0");
                }
                else{
                    printf("It's ones digits");
                    printf("The number is %d",ones_place);
                    printf("The reserved number is %d",ones_place);
                }
            printf("It's ones digits");
            printf("The number is %d",ones_place);
            printf("The reserved number is %d",ones_place);
            }
            else{
                printf("It's tens digits");
                printf("The number is %d",ones_place + tens_place*10);
                printf("The reserved number is %d",ones_place*10 + tens_place);
            }
        }
        else{
        printf("It's hundreds digits");
        printf("The number is %d",ones_place + tens_place*10 + hundreds_place*100);
        printf("The reserved number is %d",ones_place*100 + tens_place*10 + hundreds_place);    
        }
    }
    return 0;
}