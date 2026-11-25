#include <iostream>
using namespace std;

struct nodes {
    int num;
    nodes* address;
};

int main() {

    nodes* n = new nodes();
    nodes* n1 = new nodes();
    nodes* n2 = new nodes();

    n->num = 10;
    n1->num = 20;
    n2->num = 30;

    n->address = n1;
    n1->address = n2;
    n2->address = nullptr;

    // Edit second node
    n1->num = 50;

    nodes* temp = n;

    while (temp != nullptr) {
        cout << temp->num << " ";
        temp = temp->address;
    }

    return 0;
}