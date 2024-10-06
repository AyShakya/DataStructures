/*Reversing Array*/

#include<stdio.h>
/*****************/
void ReverseArray(int A[], int N)
{
    int i=0;
    int j=N-1;
    int a;
    while(i<j)
    {
        a = A[i];
        A[i] = A[j];
        A[j] = a;
        i++;
        j--;
    }
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
    int A[10] = {1,2,3,4,5};
    int N = 5;
    Traverse(A,N);
    ReverseArray(A,N);
    Traverse(A,N);
    return 0;
}
