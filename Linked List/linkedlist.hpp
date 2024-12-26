#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

using namespace std;

template <typename T>
struct node{
    public:
        T data;
        node<T>* next;
        node<T>* prev;
    
    public:
        node(T data);
};

template <typename T>
class linkedlist{
    public:
        node<T>* head;
        node<T>* tail;

    public:
        linkedlist();
        linkedlist(node<T>* head);

        ~linkedlist();

        void insert_start(node<T>* item);
        void insert_start(T data);

        void insert_end(node<T>* item);
        void insert_end(T data);

        bool search(T data);

        void remove_single(T data);

        // void remove_all(int data);

        void print();

};

#endif