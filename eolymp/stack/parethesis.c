#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    struct n *prev;
    char data;
} node;

node *head = NULL;

void push(char x);
void pop();
char top();
int size = 0;

void push(char x){
    node *nxt = (node*)malloc(sizeof(node));
    nxt->data = x;
    nxt->prev = head;
    node *tmp = head;
    head = nxt;
    nxt = tmp;
    size ++;
}

void pop(){
    if(head != NULL){
        head = head->prev;
        size --;
    }
}

char top(){
    if(head != NULL){
        return head->data;
    }
    else{
        return '\0';
    }
}

int main(){
    char input;
    while(input != '\n'){
        scanf("%c", &input);
        if(input == ')' || input == '('){
            if(top() == '(' && input == ')' && head != NULL){
                pop();
            }
            else{
                push(input);
            }
        }
    }
    printf("%d", size);
};