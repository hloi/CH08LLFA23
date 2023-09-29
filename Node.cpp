//
// Created by hloi on 9/26/2023.
//

#include "Node.h"
#include <iostream>

using namespace std;

// Constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void IntNode::InsertAfter(IntNode* nodeLoc) {
    IntNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}
// Print dataVal
void IntNode::PrintNodeData() {
    cout << this->dataVal << endl;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

void IntNode::SetNext(IntNode *nodeLoc) {
    this->nextNodePtr = nodeLoc;
}

IntNode::~IntNode() {
    cout << "delete Node ";
    PrintNodeData();
    delete nextNodePtr;
}

int IntNode::getDataVal() {
    return dataVal;
}

