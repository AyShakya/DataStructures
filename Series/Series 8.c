#include<stdio.h>
void main(){
    int i,x;
    printf("Enter value of x:");
    scanf("%d",&x);
    double Sum=1;
    double f=1;
    int k=5;
    int Num=1;
    for(i=1;i<k;i++){
        Num=Num*x;
        f=f*i;
        Sum=Sum+(Num/f);
    }
    printf("Sum is %lf", Sum);
}

