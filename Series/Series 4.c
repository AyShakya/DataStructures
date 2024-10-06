#include<stdio.h>
void main(){
    int i,k;
    printf("Enter terms:");
    scanf("%d",&k);
    int Sum=0;
    int Sign=1;
    int f=1;
    for(i=1;i<=k;i++){
        f=f*i;
        Sum=Sum+(f)*Sign;
        Sign=Sign*(-1);
    }
    printf("Sum is %d", Sum);
}



