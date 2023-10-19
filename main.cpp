#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

//int main() {
//    LinkedList ll;
//    RestNode* n1 = new RestNode(1);
//    RestNode* n2 = new RestNode(2);
//    RestNode* n3 = new RestNode(3);
//    RestNode* n4 = new RestNode(4);
//    RestNode* n5 = new RestNode(5);
//    ll.push_front(n1);
//    ll.push_front(n2);
//    ll.push_front(n3);
//    ll.push_front(n4);
//    ll.push_front(n5);
//
////    ll.printList();
//
//
////    LinkedList ll2;
////    ll2.push_back(n1);
////    ll2.push_back(n2);
////    ll2.push_back(n3);
////    ll2.push_back(n4);
////    ll2.push_back(n5);
////
////    ll2.printList();
//
//    ll.insert(0, n1);
//    ll.insert(1, n2);
//    ll.push_back(n3);
//    ll.insert(1,n4);
//    ll.insert(2, n5);
//
//    ll.printList();
//    return 0;
//}


//int main() {
//
//    LinkedList ll;
//    RestNode* n1 = new RestNode(1);
//    RestNode* n2 = new RestNode(2);
//    RestNode* n3 = new RestNode(3);
//    RestNode* n4 = new RestNode(4);
//    RestNode* n5 = new RestNode(5);
//    ll.push_front(n1);
//    ll.push_front(n2);
//    ll.push_front(n3);
//    ll.push_front(n4);
//    ll.push_front(n5);
//
//    LinkedList ll2;
//    ll2 = ll; // override assignment operator
//    ll2.printList();
//}

//int main() {
//
//    LinkedList* ll = new LinkedList();
//    RestNode* n1 = new RestNode(1);
//    RestNode* n2 = new RestNode(2);
//    RestNode* n3 = new RestNode(3);
//    RestNode* n4 = new RestNode(4);
//    RestNode* n5 = new RestNode(5);
//    ll->push_front(n1);
//    ll->push_front(n2);
//    ll->push_front(n3);
//    ll->push_front(n4);
//    ll->push_front(n5);
//
//    LinkedList* ll2 = new LinkedList();
//    *ll2 = *ll; // override assignment operator
//    ll2->printList();
//    delete ll;
//    delete ll2;
//}

int main() {

//    Restaurant a("test1", "food1", 1);
//    Restaurant b("test2", "food1", 2);
//
//    RestNode* node1 = new RestNode(a);
//    RestNode* node2 = new RestNode(b);
//    LinkedList restList;
//    restList.push_back(node1);
//    restList.push_back(node2);
//    restList.printList();

    LinkedList restList;
    try {
        restList.readFile("restaurant.txt");
    }
    catch (runtime_error& e) {
        cout << "main conversion failed." << endl;
    }

    restList.printList();
//    cout << "+++++ pop front +++++" << endl;
//    restList.pop_front();
//    restList.printList();
//    cout << "+++++ pop back +++++" << endl;
//    restList.pop_back();
//    restList.printList();

//    LinkedList list2;
//    list2.pop_front();



}




