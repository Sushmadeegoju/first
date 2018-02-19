#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* head;

class ll{
public:
    void createList(int n){
        int k;
        cin>>k;
        head=new node();
        head->data=k;
        head->next=head;
        node* temp=head;
        for(int i=1; i<n; i++){
            cin>>k;
            node* newnode=new node();
            newnode->data=k;
            newnode->next=NULL;
            temp->next=newnode;
            temp=temp->next;
        }
    }
    void insertBegin(int k){
        node* temp=new node();
        temp->data=k;
        temp->next=head;
        head=temp;
    }

    void insertEnd(int k){
        node* temp=head;
        node* temp1=new node();
        temp1->data=k;
        temp1->next=NULL;
        if(temp!=NULL){
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=temp1;
        }
        else
            insertBegin(k);
    }

    void print(){
        node* temp=head;
        cout<<"the list is:";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    head=NULL;
    ll obj;
    int i,k,n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the elts in the ll:"<<endl;
    for(i=0; i<n; i++){
        cin>>k;
        obj.insertEnd(k);
    }
    obj.print();
    return 0;
}
