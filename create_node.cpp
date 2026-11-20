#include <iostream>
using namespace std;

struct singly {
    int id;
    singly* next;
};

int main() {

    // STEP 1: Create 3 nodes
    singly* s = new singly();
    singly* s1 = new singly();
    singly* s2 = new singly();

    // STEP 2: Print memory addresses
    cout << "Node 1 Address: " << s << endl;
    cout << "Node 2 Address: " << s1 << endl;
    cout << "Node 3 Address: " << s2 << endl;

    // STEP 3: Assign values
    s->id = 10;
    s1->id = 20;
    s2->id = 30;

    // STEP 4: Connect nodes
    s->next = s1;
    s1->next = s2;
    s2->next = nullptr;

    // STEP 5: Print node values
    cout << "\nNode Values:\n";

    cout << s->id << endl;
    cout << s1->id << endl;
    cout << s2->id << endl;

    return 0;
}
