#include<stdio.h>
int DAT[1000]={0};
int fib(int N){
    if(N<2){
        return N;
    }
    else{
            if(DAT[N]==0){
                DAT[N]=(fib(N-1)+fib(N-2));
                return DAT[N];
            }
    }

}
void main(){
    int i,x,a;
    printf("enter terms:");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        x=fib(i);
        printf("%d  ", x);
    }
}


