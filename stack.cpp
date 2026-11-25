
#include <iostream>
using namespace std;

int main() {

    int stack[5];
    int top = -1;

    // PUSH: Insert values
    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    cout << "Stack Elements: ";

    // Display Stack
    int i = top;
    while (i >= 0) {
        cout << stack[i] << " ";
        i--;
    }

    cout << "\nTop Element: " << stack[top] << endl;

    // POP: Remove element
    top--;

    cout << "After POP: ";

    i = top;
    while (i >= 0) {
        cout << stack[i] << " ";
        i--;
    }

    cout << "\nNew Top Element: " << stack[top] << endl;

    return 0;
}
