#include <iostream>
#include <cstdio>
using namespace std;

main() {
    int n;
   cout<<"enter no of elements"<<endl;
   cin>>n;
   int array[n];
  cout<<"enter the elements"<<endl;
   for(int i=0;i<n;i++){
        int num;
        cin>>num;
        array[i]= num;
   }
      for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
   }

}
