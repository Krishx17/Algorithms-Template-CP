#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
    node *head, *tail;

class LinkedList{
    public:
    LinkedList();
    void create();
    void Display();
    void Insert_at_Begin();
    void Insert_at_Last();
    void Insert_at_Given_Position();
};

//constructor 
LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
}

void LinkedList::create(){
    int val;    
    node *temp;
    temp = new node();
    cout << "Enter the data : " << "\n";
    cin >> val;
    temp->data = val;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
}

void LinkedList::Insert_at_Begin(){
    int val;
    node *temp;
    temp = new node();
    cout << "Enter the data to be inserted at first: " << "\n";
    cin >> val;
    temp->data = val;
    temp->next = NULL;
    
    temp->next = head;
    head = temp;
}   

void LinkedList::Insert_at_Last(){
    int val;
    node *temp;
    temp = new node();
    cout << "Enter the data to be insert at last: " << "\n";
    cin >> val;
    temp->data = val;
    
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}

void LinkedList::Insert_at_Given_Position(){
    int val;
    node *temp;
    node *tempB;
    node *link;
    link = new node();
    
    cout << "Enter the data to be inserted at a particular position: " << "\n";
    cin >> val;
    link->data = val;
    //input the particular index from the user
    int TargetIndex;
    int index = 0;
    temp = new node();
    temp = head;
    cin >> TargetIndex;
    if(TargetIndex == 0){
        Insert_at_Begin();
    }
    
    if(index != TargetIndex - 1){
        temp = temp->next;
        index++;
    }

    tempB = new node();
    tempB = temp->next;
    temp->next = link;
    link->next = tempB;
}

void LinkedList::Display(){
    node *temp;
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    LinkedList list;
    int size;
    cout<<"Enter the size of list : ";
    cin >> size;
    for(int i=0;i<size;i++){
        list.create();
    }
    
    list.Display();

        // list.Insert_at_Begin();
        // list.Display();
        // list.Insert_at_Last();
        // list.Display();
        // list.Insert_at_Given_Position();
        // list.Display();
        // list.Delete_at_Begin();
        // list.Display();
        // list.Delete_at_Last();
        // list.Display();
        // list.Delete_at_given_position();
        // list.Display();
        
    // cout<<endl;
    // list.Traversal_reverse(first);
    // cout<<"NULL";
    return 0;
}
