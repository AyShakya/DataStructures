#include<stdio.h>
void main(){
    int i,Sign,n;
    printf("Enter Term:");
    scanf("%d", &n);
    double f,x,Num,Sum;
    printf("Enter Angle:");
    scanf("%lf", &x);
    x=(x*22)/(180*7);
    Num=x;
    Sum=x;
    f=1;
    Sign=(-1);
    for(i=1;i<n;i++){
        Num=Num*x*x;
        f=f*(2*i)*(2*i+1);
        Sum=Sum+(Num/f)*Sign;
        Sign=Sign*(-1);
    }
    printf("Sum is %lf", Sum);
}

