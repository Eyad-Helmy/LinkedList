
// #ifndef NODE_H
// #define NODE_H
//
// #endif //NODE_H
#pragma once
template<class T>
struct Node {
    T info;
    Node<T> *next;
};