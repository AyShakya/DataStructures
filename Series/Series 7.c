#include<stdio.h>
void main(){
    int i,k;
    printf("Enter terms:");
    scanf("%d",&k);
    double Sum=0;
    double f=1;
    for(i=1;i<=k;i++){
        f=f*i;
        Sum=Sum+(i/f);
    }
    printf("Sum is %lf", Sum);
}

