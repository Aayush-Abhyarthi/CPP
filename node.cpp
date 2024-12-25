#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
int main(){
    node *ptr,*head;
    head = new node();
    ptr=head;
    ptr->data=1;
    ptr->next=NULL;
    
    ptr=ptr->next;
    ptr=new node();
    ptr->data=2;
    ptr->next=NULL;
    
    
}