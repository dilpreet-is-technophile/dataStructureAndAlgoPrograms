#include <iostream>
#include <cstdio>
using namespace std;

main() {
int k,i;
int a[]={1,2,9,7,5};
int item=11;
int flag=0;
for(i=0;i<=4;i++){
    if(a[i]==item){
        cout<<i;
        flag=1;
    }

}
if(flag==0){
     cout<<"element is not in array"<<endl;
}


}
