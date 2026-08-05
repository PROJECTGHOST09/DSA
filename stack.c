#include <stdio.h>
#include <stdlib.h>
#define MAX 4
struct Stack{
    int arr[MAX];
    int top;

};
void intialize(struct Stack *s){
    s->top=-1;
}
int isEmpty(struct Stack *s){
    return s->top==-1;


}
int isFull(struct Stack *s){
    return s->top==MAX-1;
}
void push(struct Stack *s,int data){
    if (isFull(s)){
        printf("Stack Overflow");
    }
    s->top++;
    s->arr[s->top]= data;
    printf("Element added : %d \n",data);
}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow");
    }
    int data =s->arr[s->top];
    s->top--;
    return data;
}
int main(){
    struct Stack mystack;

    intialize(&mystack);
    push(&mystack,10);
    push(&mystack,30);
    push(&mystack,20);
    push(&mystack,50);

    if (isFull(&mystack)){
        printf("Stack is full.\n");
    }
    else{
        printf("Stack has room \n");
    }
    if (isEmpty(&mystack)){
        printf("Stack empty\n");
    }
    else {
        printf("Stack is not empty\n");
    }

    printf("Element popped : %d\n",pop(&mystack));
    printf("Element popped : %d\n",pop(&mystack));
    printf(mystack->arr)
    return 0;

}
