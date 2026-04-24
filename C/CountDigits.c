#include<stdio.h>
int countDigits( int x){
  int temp=0;
  while(x!=0){
    x=x/10;
    temp++;
  }
  return temp;
}
int main(){
    int x=1234;
    printf("%d",countDigits(x));
    return 0;
}