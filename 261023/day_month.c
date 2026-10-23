#include <stdio.h>

int main(){
    int day;
    int year;
    printf("Please enter the day of the week:");
    scanf("%d",&day);

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day!\n");
            break;
    }

    printf("Please enter the month of the year!");
    scanf("%d",&year);

switch(year){
    case 2:
    case 3:
    case 4:
        printf("It's spring!\n");
        break;
    case 5:
    case 6:
    case 7:
        printf("It's summer!\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("It's autumn!\n");
        break;
    case 11:
    case 12:
    case 41:
        printf("It's winter!\n");
        break;
    default:
        printf("Invalid month!\n");
        break;
}

    return 0;
}
