#include <iostream>
using namespace std;

struct nodes {
    int num;
    nodes* address;
};

int main() {

    nodes* first = nullptr;
    nodes* last = nullptr;

    for (int i = 1; i <= 3; i++) {

        nodes* newNode = new nodes;

        cout << "Enter number: ";
        cin >> newNode->num;

        newNode->address = nullptr;

        if (first == nullptr) {
            first = newNode;
            last = newNode;
        }
        else {
            last->address = newNode;
            last = newNode;
        }
    }

    nodes* temp = first;

    while (temp != nullptr) {
        cout << temp->num << " ";
        temp = temp->address;
    }

    return 0;
}