
#include<iostream>
#include<cstdio>
using namespace std;


int main(){
int num,mid;
int A[10]={1,2,5,11,15,19,23,35,50,77};
cout<<"enter the number to find"<<endl;
cin>>num;
int start=0;
int endd=9;
while(start<=endd){
    mid=(start+endd)/2;
    if(A[mid]==num){
        cout<<mid;
        break;
    }
    else if(num<A[mid]){
        endd=mid-1;
    }
    else{
        start=mid+1;
    }
}
cout<<"element is not in array";

}










