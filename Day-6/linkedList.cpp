#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
    node (int data){
        this->data = data;
        next = NULL;
    }
};
struct LinkedList {
    node *head;
    LinkedList() {
        head = NULL;
    }
    void reverse () {
        node *current = head;
        node *prev = NULL, *next = NULL;
        
        while (current!= NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        
    }
};