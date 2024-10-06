#include<stdio.h>
int SumArray(int A[], int i, int j){
    if(i<j){
        return 0;
    }
    else if(i==j){
        return A[i];
    }
    else{
        return A[i]+A[j]+SumArray(A,i+1,j-1);
    }
}
int main(){
    int N, A[1000];
    printf("Enter No. of digits:");
    scanf("%d",&N);
    printf("Enter elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int x;
    x=SumArray(A,0,N-1);
    printf("Total = %d",x);
}

