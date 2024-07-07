#include<bits/stdc++.h>
using namespace std;
int main()
{
  int *arr = new int[5];
  int *newArray = new int[7];
  for(int i =0 ;i<5;i++){
    cin>>arr[i];
  }
//   copy to new array
for(int i = 0;i<5;i++){
    newArray[i]= arr[i];
}
newArray[5]=100;
newArray[6]=70;

for(int i = 0;i<7;i++){
    cout<<newArray[i]<<" ";
}
// delete an array
delete[] arr;
for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}