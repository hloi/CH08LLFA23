//
// Created by hloi on 9/26/2023.
//

#ifndef CH08LLFA23_LINKEDLIST_H
#define CH08LLFA23_LINKEDLIST_H
#include <algorithm>
#include <string>

#include "Node.h"

using std::string;

class LinkedList {
public:
    LinkedList();

    ~LinkedList();

    LinkedList(const LinkedList& origList);  // copy constructor

    LinkedList& operator=(const LinkedList& origList);  // assignment operator

    void printList();

    RestNode *getHead() const;

    void setHead(RestNode *head);

    RestNode *getTail() const;

    void setTail(RestNode *tail);

    void insert(int pos, RestNode* nodeLoc); // insert at position

    void push_front(RestNode* nodeLoc);  // add in the front of the list

    void push_back(RestNode* nodeLoc);  // add at the rear of the list

    void readFile(string filename);

private:
    RestNode* head;
    RestNode* tail;

};


#endif //CH08LLFA23_LINKEDLIST_H
