//
// Created by hloi on 9/26/2023.
//

#ifndef CH08LLFA23_LINKEDLIST_H
#define CH08LLFA23_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();

    ~LinkedList();

    void printList();

    IntNode *getHead() const;

    void setHead(IntNode *head);

    IntNode *getTail() const;

    void setTail(IntNode *tail);

    void insert(int pos, IntNode* nodeLoc); // insert at position

    void push_front(IntNode* nodeLoc);  // add in the front of the list

    void push_back(IntNode* nodeLoc);  // add at the rear of the list

private:
    IntNode* head;
    IntNode* tail;

};


#endif //CH08LLFA23_LINKEDLIST_H
