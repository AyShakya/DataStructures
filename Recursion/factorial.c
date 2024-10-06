#include<stdio.h>
int factorial(int N){
    if(N==0){
        return 1;
    }
    else{
        return (N*factorial(N-1));
    }
}
void main(){
    int x,k;
    printf("enter number:");
    scanf("%d",&k);
    x=factorial(k);
    printf("%d",x);
}
