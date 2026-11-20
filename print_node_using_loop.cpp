#include <iostream>

using namespace std;

struct nodes{
    int num;
    nodes* address;
};

int main(){

int sizes=0;    

nodes* n=new nodes();
nodes* n1=new nodes();
nodes* n2=new nodes();


n->num=10; sizes++;
n1->num=20; sizes++;
n2->num=30; sizes++;

n->address=n1;
n1->address=n2;
n2->address=nullptr;


nodes* temp = n;

cout << "n => " <<  n << endl;
cout << "temp => " <<  temp  << endl;

while(temp != nullptr){

    cout << temp->num << " ";

    temp = temp->address;
}
}
