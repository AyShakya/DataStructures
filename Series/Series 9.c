#include<stdio.h>
void main(){
    int i,x;
    printf("Enter value of x:");
    scanf("%d",&x);
    double Sum=1;
    int Sign=(-1);
    double f=1;
    int k=10;
    int Num=1;
    for(i=1;i<k;i++){
        Num=Num*x;
        f=f*i;
        Sum=Sum+(Num/f)*Sign;
        Sign=Sign*(-1);
    }
    printf("Sum is %lf", Sum);
}


