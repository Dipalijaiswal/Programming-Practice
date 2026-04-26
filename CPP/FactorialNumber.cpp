#include<iostream>
using namespace std;
unsigned int factorial(unsigned  int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int n=5;
    cout<<"Factorial number is"<<factorial(n);
    return 0;
}