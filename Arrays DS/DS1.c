#include<stdio.h>
/*****************/
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
/*****************/
void InsertArray(int A[], int N, int k, int x)
{
    int j;
    for(j=N-1;j>k-1;j--){
        A[j+1]=A[j];
    }
    A[k]=x;
}
/*****************/
int DeleteArray(int A[], int N, int k)
{
    int p;
    int x = A[k];
    for(p=k;p<N-1;p++){
        A[p]=A[p+1];
    }
    return x;
}
/*****************/
int main()
{
    int A[10] = {1,2,3,4,5};
    int N = 5;
    Traverse(A,N);
    InsertArray(A,N,2,10);
    N=N+1;
    Traverse(A,N);
    DeleteArray(A,N,0);
    N=N-1;
    Traverse(A,N);
    return 0;
}
