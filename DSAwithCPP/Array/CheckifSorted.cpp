#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0 || n==1)
    return true;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }      
    }
    return true;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    if(isSorted(arr,n)){
  cout<<"Array is sorted";
    }
   else{
    cout<<"Array is not sorted";
   }
   return 0;
}