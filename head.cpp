
#include <iostream>
using namespace std;

struct student {
    string name;
    student* next;
};

int main() {

    // Initially head is nullptr
    student* head = nullptr;

    // ========== FIRST NODE ==========
    student* first = new student();

    first->name = "Fasih";
    first->next = nullptr;

    head = first;  // Head points to first node


    // ========== SECOND NODE ==========
    student* second = new student();

    second->name = "Fasih";
    second->next = nullptr;

    first->next = second;  // Connect first to second


    // ========== THIRD NODE ==========
    student* third = new student();

    third->name = "Ammar";
    third->next = nullptr;

    second->next = third;  // Connect second to third


    // ========== FOURTH NODE ==========
    student* fourth = new student();

    fourth->name = "Mehdi";
    fourth->next = nullptr;

    third->next = fourth;  // Connect third to fourth


    // ========== FIFTH NODE ==========
    student* fifth = new student();

    fifth->name = "Abrar";
    fifth->next = nullptr;

    fourth->next = fifth;  // Connect fourth to fifth


    // ========== TRAVERSAL ==========

    student* temp = head;

    while (temp != nullptr) {

        cout << temp->name << " -> ";

        temp = temp->next;
    }

    cout << "nullptr";

    return 0;
}
