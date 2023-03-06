#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    struct n *prev;
    int data;
    struct n *next;
} node;

node *front;
node *back;

void push_front(int a){
    node *tmp = (node*)(malloc(sizeof(node)));
    tmp->data = a;
    tmp->next = NULL;
    tmp->prev = front;
    front = tmp;
}

void push_back(int a){
    node *tmp = (node*)(malloc(sizeof(node)));
    tmp->data = a;
    tmp->next = back;
    tmp->prev = NULL;
    back = tmp;
}

void pop_back(){
    if(back == NULL) return;
    back = back->next;
}

void pop_front(){
    if(front == NULL) return;
    front = front->prev;
}

int main(){
    // front->prev = back;
    // front->next = 0;
    // back->next = front;
    // back->prev = 0;
    push_front(1);
    push_front(2);
    push_front(3);
    push_front(4);
    pop_back();
    pop_back();
    pop_back();
    printf("%d", back->data);
    return 0;
}