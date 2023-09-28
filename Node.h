//
// Created by hloi on 9/26/2023.
//

#ifndef CH08LLFA23_NODE_H
#define CH08LLFA23_NODE_H



class IntNode {
public:

    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void InsertAfter(IntNode* nodeLoc);
    IntNode* GetNext();
    void SetNext(IntNode* nodeLoc);
    void PrintNodeData();

    ~IntNode();
private:
    int dataVal;
    IntNode* nextNodePtr;
};

#endif //CH08LLFA23_NODE_H
