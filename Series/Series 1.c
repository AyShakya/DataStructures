#include<stdio.h>
void main(){
    int i,k;
    printf("Enter terms:");
    scanf("%d",&k);
    int Sum=0;
    for(i=1;i<=k;i++){
        Sum=Sum+(i*i);
    }
    printf("Sum is %d", Sum);
}
