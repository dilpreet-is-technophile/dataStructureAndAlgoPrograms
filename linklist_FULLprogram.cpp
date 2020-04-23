#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *link;
};

node *head=NULL;

int insertAtBeginning(int item);
int insertAtPosition(int item, int n);
int insertAtEnd(int item);
int deleteAtBeginning();
int deleteAtPosition(int z);
int deleteAtEnd();
void printt();


int main(){

int option,x,item,n,z;
cout<<"how many times you want to select operations"<<endl;
cin>>x;
while(x!=0){

cout<<"1.Insert at beginning"<<endl;
cout<<"2.Insert at N position"<<endl;
cout<<"3.Insert at End"<<endl;
cout<<"4.Delete at beginning"<<endl;
cout<<"5.Delete at N position"<<endl;
cout<<"6.Delete at End"<<endl;
cout<<"----------------"<<endl;
cout<<"select your method"<<endl;
cin>>option;
if(option==1 || option==3){
    cout<<"element you want to enter"<<endl;
    cin>>item;
}
else if(option==2){
    cout<<"element you want to enter"<<endl;
    cin>>item;
    cout<<"enter the position"<<endl;
    cin>>n;
}
else if(option==5){
    cout<<"which position you want to delete"<<endl;
    cin>>z;
}

switch(option){
case 1:
    insertAtBeginning(item);
        break;
case 2:
    insertAtPosition(item,n);
        break;
case 3:
    insertAtEnd(item);
        break;
case 4:
    deleteAtBeginning();
        break;
case 5:
    deleteAtPosition(z);
        break;

case 6:
    deleteAtEnd();
        break;
default:
    cout<<"Invalid entry";
}
x=x-1;

}
printt();
}







int insertAtBeginning(int item){
        node *temp=new node();
        temp->data=item;
        temp->link=NULL;

    if(head==NULL){
        head=temp;
    }
    else{
            temp->link=head;
            head=temp;
    }
}


int insertAtPosition(int item, int n){
    node *ptr=head;
    node *temp=new node();
    temp->data=item;
    temp->link=NULL;

    if(head==NULL){
        head=temp;
    }
    else if(n==1){
        temp->link=head;
        head=temp;
    }
    else if(n!=1){
        for(int i=0;i<n-2;i++){
            ptr=ptr->link;
        }
        temp->link=ptr->link;
        ptr->link=temp;
    }

}


int insertAtEnd(int item){
  node *ptr=head;

    node *temp=new node();
        temp->data=item;
        temp->link=NULL;


    if(head==NULL){
        head=temp;
    }
    else{
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;

    }
}
int deleteAtBeginning(){
    node* temp=head;
    head=head->link;
    free(temp);
}
int deleteAtPosition(int z){
    node* ptr=head;
    if(z==1){
        head=ptr->link;
        free(ptr);
    }
    else{
        for(int i=0;i<z-2;i++){
            ptr=ptr->link;
        }
        node* temp=ptr->link;
        ptr->link=temp->link;
        free(temp);
    }h
}
int deleteAtEnd(){
    node* ptr=head;
    node* temp;
    while(ptr->link!=NULL){
        ptr=ptr->link;
        ptr->link=NULL;
        free(temp);
    }
}

void printt(){

   node *ptr=head;
   while(ptr!=0){
    cout<<ptr->data<<" ";
    ptr=ptr->link;
  }

}
