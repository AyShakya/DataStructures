#include<stdio.h>
int fib(int N){
    if(N<2){
        return N;
    }
    else{
        return (fib(N-1)+fib(N-2));
    }
}
void main(){
    int i,x,a;
    printf("enter terms:");
    scanf("%d",&a);
    x=fib(a);
    printf("%d", x);
}

