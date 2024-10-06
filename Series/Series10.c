#include<stdio.h>
void main(){
    int i,k;
    printf("Enter terms:");
    scanf("%d",&k);
    double Sum=1;
    double f=1;
    int sign=(-1);
    for(i=1;i<=k;i++){
        f=f*(2*i)*(2*i+1);
        Sum=Sum+(i/f)*sign;
        sign=sign*(-1);
    }
    printf("Sum is %lf", Sum);
}


