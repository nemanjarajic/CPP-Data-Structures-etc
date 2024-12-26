#include "linkedlist.hpp"

template <typename T>
node<T>::node(T data){
    this->data = data;
    this->next = NULL;
}

template <typename T>
linkedlist<T>::linkedlist(){
    this->head = NULL;
    this->tail = NULL;
};

template <typename T>
linkedlist<T>::linkedlist(node<T>* item){
    if(this->head != NULL){
        this->insert_end(item);
    }else{
        this->head = item;
        this->tail = item;
    }
}
template <typename T>
void linkedlist<T>::insert_start(node<T>* item){
    if(this->head == NULL){
        this->head = item;
        this->tail = item;
    }else{
        item->next = this->head;
        this->head = item;
    }
}

template <typename T>
void linkedlist<T>::insert_start(T data){
    node<T>* new_data = new node<T>(data);
    if(this->head == NULL){
        this->head = new_data;
        this->tail = new_data;
    }else{
        new_data->next = this->head;
        this->head = new_data;
    }
}

template <typename T>
void linkedlist<T>::insert_end(node<T>* item){
    if(this->tail == NULL){
        this->head = item;
        this->tail = item;
    }else{
        this->tail->next = item;
        this->tail = item;
    }
}

template <typename T>
void linkedlist<T>::insert_end(T data){
    node<T>* new_data = new node<T>(data);
    if(this->tail == NULL){
        this->head = new_data;
        this->tail = new_data;
    }else{
        this->tail->next = new_data;
        this->tail = new_data;
    }
}

template <typename T>
bool linkedlist<T>::search(T data){
    node<T>* curr = this->head;

    while(curr){
        if(curr->data == data){
            return true;
        }
        curr = curr->next;
    }

    return false;
}

template <typename T>
void linkedlist<T>::print(){
    node<T>* temp = this->head;

    if(temp == NULL){
        cout << "List is empty!";
    }else{
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    delete temp;
}

template <typename T>
linkedlist<T>::~linkedlist(){
    node<T>* current = this->head;
    while(current){
        node<T>* next = current->next;
        delete current;
        current = next;
    }
}