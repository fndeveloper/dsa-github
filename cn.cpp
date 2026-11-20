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


cout << "Nodes 1 is => " << n->num;
cout << "Nodes 2 is => " << n1->num;
cout << "Nodes 3 is => " << n2->num;


}
