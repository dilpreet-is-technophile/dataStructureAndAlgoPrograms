#include<iostream>
using namespace std;

struct node{
int data;
node *link;
};

node *head=NULL;


void insert(int);
void print1(void);

int main(){
    int i,n,x;
    cout<<"enter the length"<<endl;
    cin>>n;
    cout<<"enter the numbers"<<endl;
    for(i=0;i<n;i++)
        {
            cin>>x;

        insert(x);

    }

        print1();

}

void insert(int x){
    node *ptr=head;
     if(head==NULL)
        {
        node *temp=new node();
        temp->data=x;
        temp->link=NULL;
        head=temp;

     }
     else{
        node *temp=new node();
        temp->data=x;
        temp->link=NULL;
        while(ptr->link!=0){
            ptr=ptr->link;
        }
        ptr->link=temp;
     }
}
void print1(){

    node *ptr=head;
    while(ptr!=0){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }


}
