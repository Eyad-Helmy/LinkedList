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
    LinkedList() : head(nullptr), tail(nullptr), size(0) {};            //constructor
    void addToList(T data) {
        Node<T> *newNode = new Node<T>;
        newNode->info = data;
        if(size == 0) {
            head = newNode;
            tail = newNode;
            size++;
            tail->next = nullptr;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = nullptr;
        }
    }
    void addToStart(T data) {           //this adds an element at the beginning of the list instead of its end
        Node<T> *newNode = new Node<T>;
        newNode->info = data;
        newNode->next = head;       //now the new pointer points to the first node
        head = newNode;             //now the head points to the new node
    };
    void printlist() {
        Node<T> *temp = head;
        int index = 1;
        while(temp != nullptr) {
            std::cout << "Node "<< index << ": " << temp->info << "\n";
            temp = temp->next;
            index++;
        }
    }
};