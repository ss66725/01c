#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int i;
    int j;
    int t;
    int a[10];
    int*p = a;

    printf("Please scanf 10 numbers!\n");
    for(t = 0;t < 10;t ++){
        scanf("%d",p+t);
    }
    
    for(i = 0;i < 10-1;i ++){
        for(j = 0;j < 10-1-i;j ++){
            if(a[j] < a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
    for(t = 0;t < 10;t ++){
        printf("%d ",*(p + t));
    }
    return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }

