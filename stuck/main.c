#include <stdio.h>
#include <stdlib.h>
#define STACK_S�ZE 4

struct stack{
 int data[STACK_S�ZE];
 int top;
};
void push(struct stack*stk,int data){
    if(stk->top==STACK_S�ZE-1)
        printf("stack dolu");
    else{
        stk->top++;
        stk->data[stk->top]=data;
    }
}
int main()
{
int x;
stack n;

push(&n, 4);
push(&n, 2);
push(&n, 5);
push(&n, 7);
push(&n, 11);
x = top(&n);
printf("%d\n", x);
    return 0;
}
