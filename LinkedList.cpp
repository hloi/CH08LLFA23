//
// Created by hloi on 9/26/2023.
//

#include "LinkedList.h"
#include <iostream>
#include <fstream>



using namespace std;

RestNode *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(RestNode *head) {
    LinkedList::head = head;
}

RestNode *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(RestNode *tail) {
    LinkedList::tail = tail;
}

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::push_front(RestNode *nodeLoc) {
    if (head == nullptr) {
        // list is empty
        head = nodeLoc;
        tail = nodeLoc;
    } else {
        nodeLoc->SetNext(head);
        head = nodeLoc;
    }

}

void LinkedList::push_back(RestNode *nodeLoc) {
    if (head == nullptr) {
        push_front(nodeLoc);
    }
    else {
        tail->SetNext(nodeLoc);
        tail = nodeLoc;
    }

}

void LinkedList::printList() {
    RestNode* tmp = head;
    while (tmp != nullptr) {
        tmp->PrintNodeData();
        tmp = tmp->GetNext();
    }

}

void LinkedList::insert(int pos, RestNode *nodeLoc) {
    RestNode* tmp = head;
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
//    RestNode *tmp = head;
//    while (tmp != nullptr) {
//        RestNode* prev = tmp;
//        tmp = tmp->GetNext();
//        cout << "delete ";
//        prev->PrRestNodeData();
//        delete prev;
//    }
//
//}


LinkedList::~LinkedList() {  //destructor
    // delete head
//    cout << "delete head" << endl;
//    delete head;
//    head = nullptr;
//    tail = nullptr;
    RestNode* temp = head;
    while (temp != nullptr) {
        cout << "delete ";
        temp->PrintNodeData();
        head = head->GetNext();
        delete temp;
        temp = head;
    }
}

LinkedList::LinkedList(const LinkedList &origList) {
    head = nullptr;
    tail = nullptr;
    cout << "copy constructor" << endl;
    RestNode* temp = origList.head;
    while (temp != nullptr) {
        Restaurant data = temp->getDataVal();
        RestNode* node = new RestNode(data);
        push_back(node);
        temp = temp->GetNext();
    }
}


LinkedList &LinkedList::operator=(const LinkedList &origList) {
    cout << "Assignment operator." << endl;

    if (this != &origList) {
        head = nullptr;
        tail = nullptr;
        RestNode* temp = origList.head;
        while (temp != nullptr) {
            Restaurant data = temp->getDataVal();
            RestNode* node = new RestNode(data);
            push_back(node);
            temp = temp->GetNext();
        }
    }

    return *this;
}

void LinkedList::readFile(string filename) {
    ifstream f;
    f.open(filename);
    if (!f.is_open()) {
        cout << filename << " file not found." << endl;
    }
    string line;
    while (getline(f, line)) {
        string name;
        getline(f, name);
        string rating;
        getline(f, rating);
        double rate;
        istringstream in(rating);
        if (!(in >> rate)) {
            cout << endl << "conversion failed." << endl;
            throw runtime_error("conversion failed.");
        }
        string food;
        if (!getline(f, food)) {
            cout << endl << "food type failed." << endl;
            throw runtime_error("read food type failed.");
        }
        Restaurant a(name, food, rate);
        RestNode* node1 = new RestNode(a);
        push_back(node1);
    }

}

void LinkedList::pop_front() {
    if (head == nullptr) {
        throw runtime_error("try to remove from an empty list.");
    }
    RestNode* temp = head;
    head = head->GetNext();
    // one node
    if (head == nullptr) {
        tail = head;
    }
    delete temp;
}

void LinkedList::pop_back() {
    RestNode* temp = head;
    if (head == nullptr) {
        throw runtime_error("try to remove from an empty list.");
    }
    else if (head->GetNext() == nullptr) {
        pop_front();
    }
    else {
        while (temp->GetNext() != tail) {
            temp = temp->GetNext();
        }
        temp->SetNext(nullptr);
        delete tail;
        tail = temp;
    }

}

