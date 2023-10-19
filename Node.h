//
// Created by hloi on 9/26/2023.
//

#ifndef CH08LLFA23_NODE_H
#define CH08LLFA23_NODE_H

#include "Restaurant.h"

class RestNode {
public:

    RestNode(Restaurant& dataInit, RestNode* nextLoc = nullptr);  // constructor


    // RestNode(const RestNode* origObject);  // copy constructor
    void InsertAfter(RestNode* nodeLoc);
    RestNode* GetNext();
    void SetNext(RestNode* nodeLoc);
    void PrintNodeData();

    ~RestNode();
    Restaurant& getDataVal();

    bool operator>(RestNode& other);

private:
    Restaurant dataVal;
    RestNode* nextNodePtr;
};

#endif //CH08LLFA23_NODE_H
