#include <iostream>
#include <cstdio>
using namespace std;

main() {
int pos,i,j,k;
pos=2;
int a[]={1,4,2,6,3};
k=pos;
j=4;
for(i=pos;i<=j;i++){
    a[i]=a[i+1];
}
j=j-1;
for(i=0;i<=j;i++){
    cout<<a[i]<<endl;
}
}
