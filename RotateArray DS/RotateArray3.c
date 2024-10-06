#include<stdio.h>
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
void rotate(int A[], int N, int k) {
    int temp[k],i,j,p;
    k=k%N;
    for(i=0;i<k;i++){
        temp[i]=A[N-k+i];
    }
    for(j=N-k-1;j>=0;j--){
        A[j+k]=A[j];
    }
    for(p=0;p<k;p++){
        A[p]=temp[p];
    }
}
int main(){
    int A[10]={1,2,3,4,5};
    int N=5;
    int k;
    printf("Enter:");
    scanf("%d",&k);
    rotate(A,N,k);
    Traverse(A,N);
}
