#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList ll;
    IntNode* n1 = new IntNode(1);
    IntNode* n2 = new IntNode(2);
    IntNode* n3 = new IntNode(3);
    IntNode* n4 = new IntNode(4);
    IntNode* n5 = new IntNode(5);
//    ll.push_front(n1);
//    ll.push_front(n2);
//    ll.push_front(n3);
//    ll.push_front(n4);
//    ll.push_front(n5);

//    ll.printList();


//    LinkedList ll2;
//    ll2.push_back(n1);
//    ll2.push_back(n2);
//    ll2.push_back(n3);
//    ll2.push_back(n4);
//    ll2.push_back(n5);
//
//    ll2.printList();

    ll.insert(0, n1);
    ll.insert(1, n2);
    ll.push_back(n3);
    ll.insert(1,n4);
    ll.insert(2, n5);

    ll.printList();
    return 0;
}
