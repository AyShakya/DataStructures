#include<stido.h>
#include<stdlib.h>
struct stack{
    char item[10];
    int top;
};
struct stack S;
void Initialize(){
    S.Top=-1;
}
int IsEmpty(char S){
    if(S.Top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int  PUSH(char S, char a){
    if(S.Top==9){
        printf("Stack Overflow");
        exit(1);
    }
    else{
        S.Top(S,a);
        exit(0);
    }
}
int POP(char S){
    if(S.Bottom==-1){
        printf("Stack Underflow");
        exit(1);
    }
    else{
        return S;
        exit(0);
    }
}
Reverse(String STR[]){
    STACK S;
    Initialize(s);
    int i=o;
    while(STR[i]!='\0')
        int x=STR[i];
        Push(S,x);
        i++;
    i=o
    while(!IsEmpty(s)){
        if(StackTop(s)==STR[i]){
            Pop(s);
            i++
        }
        else{
            break;
        }
    }
}
int main(){
    Initialize();
    PUSH('A');
    PUSH('B');
    PUSH('C');
    PUSH('D');
    PUSH('E');
    int ans=POP();
    printf("%c\n", ans);
    ans=POP();
    printf("%c\n", ans);
}

