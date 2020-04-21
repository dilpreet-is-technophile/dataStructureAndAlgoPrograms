#include <iostream>
#include <cstdio>
using namespace std;

int top=-1;
int maxi=10;
int A[10];
int peek();
int isFull();
int isEmpty();
int push(int x);
int pop();


main() {

push(3);
push(4);
push(11);
push(3);
pop();
peek();


for(int i=0;i<=top;i++){
    cout<<A[i]<<endl;
}
}


//peek function
int peek(){
    cout<<A[top]<<endl;
}

//isFull function
int isFull(){

if(top==maxi-1){
    return true;
}
else{
    return false;
}

}

//isEmpty function

int isEmpty(){
if(top==-1){
    return true;
}
else{
    return false;
}
}
//push function

int push(int x){
    if(!isFull()){
        top=top+1;
        A[top]=x;
    }
    else{
        cout<<"stack overflow"<<endl;
    }

}
//pop function

int pop(){
    if(!isEmpty()){
        top=top-1;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}





