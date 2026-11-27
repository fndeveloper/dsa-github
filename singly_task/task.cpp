#include <iostream>
using namespace std;

struct student{
 string name;
 student* next;

};

int main(){

    student* head=nullptr;

    // ========== FIRST NODE CODE START =============
    student* first=new student();
    first->name="Fasih";
    first->next=head;
    head=first;

    // ========== FIRST NODE CODE END =============

    // ========== second NODE CODE START =============
    student* second=new student();
    second->name="Fasih";
    second->next=nullptr;
    first->next=second;
    


    // ========== second NODE CODE END =============


      // ========== third NODE CODE START =============
    student* third=new student();
    third->name="Ammar";
    third->next=nullptr;
    second->next=third;


    // ========== third NODE CODE END =============


      // ========== fourth NODE CODE START =============
    student* fourth=new student();
    fourth->name="Mehdi";
    fourth->next=nullptr;

    third->next=fourth;
   

    // ========== fourth NODE CODE END =============


      // ========== fifth NODE CODE START =============
    student* fifth=new student();
    fifth->name="Abrar";
    fourth->next=nullptr;

    fourth->next=fifth;


    // ========== fifth NODE CODE END =============

    // ========= NOW LOOP ITTERATION VARIABLE =============
     
    student* temp=head;
    // cout << temp;

    // ========= NOW LOOP ==============

    while (temp != nullptr)
    {
        cout << temp->name << " ->";
       temp=temp->next;
    }
    
     

}