#include<stdio.h>
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else
        if(b==0){
            return a;
        }
        else
            if(a>b){
                return gcd(a-b,b);
            }
            else{
                return gcd(a,b-a);
            }

}
void main(){
    int x,k,a;
    printf("enter number and power:");
    scanf("%d%d",&a,&k);
    x=gcd(a,k);
    printf("%d",x);
}


