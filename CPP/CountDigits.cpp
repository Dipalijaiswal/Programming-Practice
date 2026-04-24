#include<iostream>
#include<cmath>
using namespace std;
int countDigits(int n){
int count=0;
while(n!=0){
    n=n/10;
    count++;
}
return count;
}
int main(){
    int n=6;
    cout<<countDigits(n);
    return 0;
}
