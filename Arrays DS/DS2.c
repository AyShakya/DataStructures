/*Insertion in Sorted Array*/

#include<stdio.h>
/*****************/
void InsertSortArray(int A[], int N, int k)
{
    int i=0;
    while(i<N && k>A[i]){
        i++;
    }
    InsertArray(A,N,i,k);
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
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
/*****************/
int main()
{
    int A[10] = {1,4,6,7,9};
    int N = 5;
    Traverse(A,N);
    InsertSortArray(A,N,5);
    N=N+1;
    Traverse(A,N);
    return 0;
}
