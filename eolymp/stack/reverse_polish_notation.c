#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    struct n *prev;
    char data;
} node;

node *head = NULL;

void push(int x);
void pop();
int top();
int size = 0;

void push(int x){
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

int top(){
    if(head != NULL){
        return head->data;
    }
}

int main(){
    char input;
    while(input != '\n'){
        scanf("%c", &input);
        if(input == ' ') continue;
        if(input == '\n') continue;
        if(input == '*'){
            int a = top();
            pop();
            int b = top();
            push(a*b);
        }
        else if(input == '+'){
            int a = top();
            pop();
            int b = top();
            push(a+b);
        }
        else if(input == '-'){
            int a = top();
            pop();
            int b = top();
            push(a-b);
        }
        else if(input == '/'){
            int a = top();
            pop();
            int b = top();
            push(a/b);
        }
        else{
            char num[16] = {input};
            int idx = 0;
            while(num[idx] != ' ' && num[idx] != '\n'){
                idx ++;
                scanf("%c", &num[idx]);
            }
            num[idx] = '\0';
            push(atoi(num));
        }
    }
    printf("output: %d", top());
};