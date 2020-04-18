#include<iostream>
#include<cstdio>
using namespace std;

int frontt=-1;
int rear=-1;
int a[10];
int num;
int isFull();
int isEmpty();
int Enqueue(int num);
void Dequeue();

int main(){
int n;

cout<<"enter the number to push"<<endl;

for(int i=0;i<10;i++){
    cin>>num;
    Enqueue(num);
}

cout<<"the queue is"<<endl;

for(int j=frontt;j<rear;j++){
    cout<<a[j]<<" ";
}
cout<<endl;
cout<<"enter how many elements you want to dequeue"<<endl;

cin>>n;

for(int k=0;k<=n;k++){
    Dequeue();
}

cout<<"the queue is"<<endl;

for(int l=frontt-1;l<rear;l++){
    cout<<a[l]<<" ";
}

}


int isFull(){
     if(rear==9){
        return true;
     }
     else{
        return false;
     }
}



int isEmpty(){
    if(rear==-1 && frontt==-1){
        return true;
    }
    else{
        return false;
    }
}

int Enqueue(int num){
    if(isFull()){
        cout<<"Queue overflow baby"<<endl;
    }
    else if(isEmpty()){
        rear=0;
        frontt=0;

    }
    else{
        rear=rear+1;
    }
    a[rear]=num;

}
void Dequeue(){
    if(isEmpty()){
        cout<<"queue is underflow"<<endl;
    }
    else if(frontt==rear){
        rear=frontt=-1;
    }
    else{
        frontt=frontt+1;
    }

}










