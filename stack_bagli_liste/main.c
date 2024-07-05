#include <stdio.h>
#include <stdlib.h>

struct node{
 int data;
 struct node *next;
};

struct stack{
    struct node *top;
    int count;
};

void push (struct stack *stk,int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node))
    temp->data=data;
    temp->next=stk->top;
    stk->top=temp;
      stk->count++;
}

int pop (struct stack *stk){
    if(stk->count==0){
        printf("Stack bos");
        return;
    }
    else{
        struct node *temp=stk->top;
        stk->top = stk->top->next;
        int x=temp->data;
        free(temp);
        stk->count--;
        return x;
    }
}

void reset (struct stack *stk){
    if(stk->count==0){
        printf("stack bos");
        return;
    }else{
        while(stk->count!=0){
            int x=pop(stk);
        }
    }
}
int main()
{
    int secim,data;
    struct stack stk;
    stk.top=NULL;
    stk.count=0;
    return 0;
}
