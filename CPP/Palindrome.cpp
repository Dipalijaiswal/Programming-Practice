#include<iostream>
#include<cmath>
using namespace std;
bool isPalindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int ld= n%10;
       rev=rev*10+ld;
       n=n/10;
    }
   return rev==temp;
}
int main(){
    int n=12321;
    if(isPalindrome(n)){
        cout<<"Palindrome number";
    }else{
        cout<<"Not a palindrome number";
    }
 return 0;
}