#include <iostream>
#include <vector>
#include  <algorithm>
using namespace std;
int main(){
vector<int > v={4,5,2,7,82  ,1,0};
sort(v.begin(),v.end());//sort the aarray

for (int x:v){
    cout <<"  "<<x<<endl;
}
}