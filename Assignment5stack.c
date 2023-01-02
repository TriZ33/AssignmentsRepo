//
// Created by tri-z on 1/1/23.
//
#include "stdio.h"
#include "stdlib.h"
#define MAXOFSTACK 10

struct stack{
    int data[MAXOFSTACK];
    int top;
};
typedef struct stack ss;

int IsStackFull(ss *myStack){
    if (myStack->top == MAXOFSTACK - 1) {
        return 1;
    } else {
        return 0;
    }
}
int IsStackEmpty(ss *myStack){
    if(myStack->top == -1){
        return -1;
    } else{
        return 0;
    }

}

void creat_emptystack(ss *myStack){
    myStack->top=-1;
}

void pushtoStack(ss *myStack,int value){
    if(IsStackFull(myStack)){
        printf("Stack is full!");
    }else {
        myStack->top++;
        myStack->data[myStack->top] = value;
    }
}
void popFromStack(ss *myStack){
    if(IsStackEmpty(myStack)){
        printf("Stack is empty!");
    }else{
        printf("Pop From Stack is %d\n",myStack->data[myStack->top]);
        myStack->top--;
        printf("Data remaining in the stack are:\n");
        for(int i=0;i<= myStack->top;i++){
            printf("%d\n",myStack->data[i]);
        }
    }

}

int main(){
    ss *myStack = (ss*)malloc(sizeof(ss) );
    creat_emptystack(myStack);
    pushtoStack(myStack,1);
    pushtoStack(myStack,2);
    pushtoStack(myStack,3);
    pushtoStack(myStack,4);
    pushtoStack(myStack,5);
    pushtoStack(myStack,6);

    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);



    return 0;
}