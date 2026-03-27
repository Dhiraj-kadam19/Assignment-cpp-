// Q.1. Given an integer N, print numbers from 1 to N.
// But:
//  If a number is divisible by 3, print Fizz
//  If divisible by 5, print Buzz
//  If divisible by both 3 and 5, print FizzBuzz
//  Otherwise print the number.



#include <iostream>
using namespace std;
int main(){
int n;

cout<<"print the n number o ";
cin>>n;

for(int i=0;i<=n;i++){

    if(i%3==0){
        cout<<"print Fizz"<<endl;
    }else if(i%5==0){
        cout<<"print Buzz"<<endl;
    } else if(i%3==0 && i%5==0){
        cout<<"print fizzbuzz"<<endl;
    }else{
        cout<<i<<endl;
    }
}

    return 0;
}