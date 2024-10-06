#include<stdio.h>
void InsertArray(int A[], int N, int k, int x)
{
    int j;
    for(j=N-1;j>k-1;j--){
        A[j+1]=A[j];
    }
    A[k]=x;
}
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
void rotate(int A[], int N, int k) {
    int i;
    for(i=1;i<=k;i++){
        InsertArray(A,N,0,A[N-1]);
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
