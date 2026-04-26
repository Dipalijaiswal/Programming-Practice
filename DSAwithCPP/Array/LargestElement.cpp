#include<iostream>
using namespace std;
int LargestElement(int arr[], int n){
int max=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int main(){
    int arr[]={10,20,5, 15,50};
    int n=5;
    cout<<"Largest element in the array is:"<<LargestElement(arr,n);
    return 0;

}