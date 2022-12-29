#ifndef LIST_H_
#define LIST_H_
#include<iostream>

typedef struct node
{
    int data;
    struct node * next;
    node(int Data):data(Data){}
    node(){}
    
}Node;

class LinkedList
{
    private:
    /* data */
    Node*head;
    Node* tail;
public:
    LinkedList(/* args */);
    ~LinkedList();
    void print();
    void insert_back(int value);
    void insert_front(int value);
    Node* get_nth(int n);
    int search (int val);
    void delete_with_key(int value);
    void reverse(void);

};

#endif