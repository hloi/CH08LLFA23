//
// Created by hloi on 9/26/2023.
//

#ifndef CH08LLFA23_NODE_H
#define CH08LLFA23_NODE_H



class IntNode {
public:

    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);  // constructor


    // IntNode(const IntNode* origObject);  // copy constructor
    void InsertAfter(IntNode* nodeLoc);
    IntNode* GetNext();
    void SetNext(IntNode* nodeLoc);
    void PrintNodeData();

    ~IntNode();
    int getDataVal();

private:
    int dataVal;
    IntNode* nextNodePtr;
};

#endif //CH08LLFA23_NODE_H
