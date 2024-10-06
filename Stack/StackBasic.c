#include <stdio.h>
#include <stdlib.h>
struct Stack{
    char item[10];
    int top;
};
struct Stack S;

void initialise(){
    S.top=-1;
}
int isEmpty(){
    if(S.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(char x){
    if(S.top==9){
        printf("Stack overflow");
        return;
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }
}
int pop(){
    if(S.top==-1){
        printf("Stack underflow");
        return -1;
    }
    else{
        char x = S.item[S.top];
        S.top--;
        return x;
    }
}
int peek(){
    if(S.top==-1){
        printf("Stack is empty");
        return -1;
    }
    else {
        return S.item[S.top];
    }
}
int main() {
    initialise();
    push('A');
    push('B');
    push('C');
    push('D');
    char c = peek();
    printf("%c\n",c);
    int ans=pop();
    printf("%c\n", ans);
    ans=pop();
    printf("%c\n", ans);

    return 0;
}
