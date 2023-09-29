//
// Created by hloi on 9/26/2023.
//

#include "LinkedList.h"
#include <iostream>


using namespace std;

IntNode *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(IntNode *head) {
    LinkedList::head = head;
}

IntNode *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(IntNode *tail) {
    LinkedList::tail = tail;
}

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::push_front(IntNode *nodeLoc) {
    if (head == nullptr) {
        // list is empty
        head = nodeLoc;
        tail = nodeLoc;
    } else {
        nodeLoc->SetNext(head);
        head = nodeLoc;
    }

}

void LinkedList::push_back(IntNode *nodeLoc) {
    if (head == nullptr) {
        push_front(nodeLoc);
    }
    else {
        tail->SetNext(nodeLoc);
        tail = nodeLoc;
    }

}

void LinkedList::printList() {
    IntNode* tmp = head;
    while (tmp != nullptr) {
        tmp->PrintNodeData();
        tmp = tmp->GetNext();
    }

}

void LinkedList::insert(int pos, IntNode *nodeLoc) {
    IntNode* tmp = head;
    if (pos == 0) { // insert in front head
        push_front(nodeLoc);
    }
    else {  // insert middle to the end of list
        int count = 0;
        while (tmp != nullptr && count < pos) {  // step through the position
            tmp = tmp->GetNext();
            count++;
        }
        if (tmp == nullptr) {  // at the end of list
            push_back(nodeLoc);
        }
        else {
            nodeLoc->SetNext(tmp->GetNext());
            tmp->SetNext(nodeLoc);
        }

    }


}

//LinkedList::~LinkedList() {  //destructor
//    cout << "Call Destructor" << endl;
//    IntNode *tmp = head;
//    while (tmp != nullptr) {
//        IntNode* prev = tmp;
//        tmp = tmp->GetNext();
//        cout << "delete ";
//        prev->PrintNodeData();
//        delete prev;
//    }
//
//}


LinkedList::~LinkedList() {  //destructor
    // delete head
    cout << "delete head" << endl;
    delete head;
    head = nullptr;
    tail = nullptr;
}

LinkedList::LinkedList(const LinkedList &origList) {
    head = nullptr;
    tail = nullptr;
    cout << "copy constructor" << endl;
    IntNode* temp = origList.head;
    while (temp != nullptr) {
        int data = temp->getDataVal();
        IntNode* node = new IntNode(data);
        push_back(node);
        temp = temp->GetNext();
    }
}


LinkedList &LinkedList::operator=(const LinkedList &origList) {
    cout << "Assignment operator." << endl;

    if (this != &origList) {
        head = nullptr;
        tail = nullptr;
        IntNode* temp = origList.head;
        while (temp != nullptr) {
            int data = temp->getDataVal();
            IntNode* node = new IntNode(data);
            push_back(node);
            temp = temp->GetNext();
        }
    }

    return *this;
}

