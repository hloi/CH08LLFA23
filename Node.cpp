//
// Created by hloi on 9/26/2023.
//

#include "Node.h"
#include <iostream>

using namespace std;

// Constructor
RestNode::RestNode(Restaurant& dataInit, RestNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void RestNode::InsertAfter(RestNode* nodeLoc) {
    RestNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}
// Print dataVal
void RestNode::PrintNodeData() {
    cout << this->dataVal << endl;
}

// Grab location pointed by nextNodePtr
RestNode* RestNode::GetNext() {
    return this->nextNodePtr;
}

void RestNode::SetNext(RestNode *nodeLoc) {
    this->nextNodePtr = nodeLoc;
}

RestNode::~RestNode() {
//    cout << "delete Node ";
//    PrintNodeData();
//    delete nextNodePtr;
}

Restaurant& RestNode::getDataVal()  {
    return dataVal;
}

