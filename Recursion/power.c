#include<stdio.h>
int power(int a,int N){
    if(N==0){
        return 1;
    }
    else{
        return (a*power(a,N-1));
    }
}
void main(){
    int x,k,a;
    printf("enter number and power:");
    scanf("%d%d",&a,&k);
    x=power(a,k);
    printf("%d",x);
}

