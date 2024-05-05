// #ifndef LINKEDLIST_H
// #define LINKEDLIST_H
//
// #endif //LINKEDLIST_H
#pragma once
#include <iostream>
#include "node.h"

template<class T>
class LinkedList {
private:
    Node<T> *head , *tail;
    int size;
public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {};
    void addToList(T data) {
        Node<T> *newNode = new Node<T>;
        newNode->info = data;
        if(size == 0) {
            head = newNode;
            tail = newNode;
            size++;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printlist() {
        Node<T> *temp = head;
        int index = 1;
        while(temp->next != nullptr) {
            std::cout << "Node "<< index << ": " << temp->info;
            temp = temp->next;
        }
    }
};