//
// Created by Snofa on 01.07.2021.
//

#ifndef KATA_MYLINKEDLIST_H
#define KATA_MYLINKEDLIST_H

#include "vector"


struct node {
    int value;
    node* next;
};


class MyLinkedList {
public:
    /** Initialize your data structure here. */
    node *head;
    int m_lenght;


    MyLinkedList() {
        head = nullptr;
        m_lenght = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        int f_index = 0;
        int f_result = -1;
        if (index < 0 || index > getLenght()-1){
            return  f_result;
        }

        node *temp = head;
        while (temp != nullptr) {
            if ( index == f_index){
                f_result = temp->value;

            }
            f_index++;
            temp = temp->next;

        }
        return  f_result;

    }

    std::vector<int> getList(){
        std::vector<int> list {};
        if (head){
            node *temp = head;
            while (temp != nullptr){
                list.push_back(temp->value);
                temp = temp->next;
            }
            return list;
        }
        return list;

    }


    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        node *temp = new node;
        temp->value = val;
        if (head == nullptr){
            head = temp;
            temp->next = nullptr;
        } else {
            temp->next = head;
            head = temp;
        }
        m_lenght ++;

    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        node *temp = new node;
        temp = head;
        if (head  == nullptr){
            addAtHead(val);
        } else{
            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = new node;
            temp->next->value = val;
            temp->next->next = nullptr;
            m_lenght ++;
        }


    }
    int getLenght(){
        return m_lenght;
    }
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {

        if (index > getLenght()-1 || index < 0){
            std::cerr << "Add at index: Out of range. Index: " << index << " Value: "<< val <<std::endl;
            return;
        }

        if(index == getLenght()){
            addAtTail(val);
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        int f_index = 0;
        node *pred = head;
        node *temp = head;

        while (temp != nullptr) {
            if ( f_index == index - 1){
                pred = temp;
            }
            if (index == f_index){
                node *newNode = new node;
                newNode->value = val;
                newNode->next = temp;
                pred->next = newNode;
                break;
            }
            f_index++;
            temp = temp->next;
        }

        m_lenght++;
        return;
    }



    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtHead(){
        head = head->next;
    }

    void deleteAtIndex(int index) {
        node *temp = new node;
        node *pred = new node;
        int f_index = 0;

        if (index > getLenght()-1 || index < 0){
            std::cerr << "Delete at index: Out of range" << std::endl;
        } else {
            if (index == 0){
                deleteAtHead();
            }
            pred = head;
            temp = head;
            f_index = 0;
            while (temp != nullptr){
                if (f_index == index - 1){
                    pred = temp;
                }
                if (index == f_index){
                    pred->next = temp->next;
                    break;
                }
                temp = temp->next;
                f_index++;

            }

            m_lenght--;
        }

    }
};
#endif //KATA_MYLINKEDLIST_H
