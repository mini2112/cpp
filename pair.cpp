#include <iostream>
using namespace std;


void explainpair(){
    // pair<int ,int>p={1,3};

    // cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>>p={1,{3,4}};

    cout<<p.second.first<<" "<<p.second.second;
    
    



}
b
int main(){
    
  explainpair();

    return 0;
}