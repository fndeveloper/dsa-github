#include <iostream>
using namespace std;

struct Song
{
    string name;
    Song* next;
    Song* prev;

};

int main(){

    Song* s=new Song();
    s->name="Fasih";

    cout << s->name;
}