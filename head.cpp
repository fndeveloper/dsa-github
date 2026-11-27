#include <iostream>

using namespace std;

struct Node
{
string name;
Node* next;
};

int main(){

    Node* p=nullptr;
   
     Node* first=new Node();
     first->name="first";
     first->next=nullptr;
     p=first;
cout << "First Address : " << first << endl;


       Node* second=new Node();
     second->name="Secomd";
     second->next=nullptr;

     first->next=second;
cout << "Second Address : " << second << endl;

       Node* third=new Node();
     third->name="Fasih 2";
     third->next=nullptr;
     second->next=third;
cout << "Third Address : " << third << endl;

   
Node* i=p;

cout << "Before Loop " << i << endl;

while (i != nullptr)
{
   cout << i->name << endl;
   i=i->next;

   cout << i << endl;
}
cout << "After Loop " << i << endl;


}