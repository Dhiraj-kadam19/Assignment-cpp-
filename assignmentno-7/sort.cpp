#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> v={5,3,5,67,1,0};
v.push_back(10); //add data in  last of arry

for(int x:v){

   cout<<" "<<x<< "    ";
}

}//output is 5,3,5,67,1,0,10
