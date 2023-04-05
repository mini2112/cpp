#include <iostream>
using namespace std;

//Take two numbers and print its sum

int SUm(int a,int b ){
   int  SUM=a+b;
   return SUM;
   
    
}
int main(){
    int a,b;
    cin>>a>>b;
   int res= SUm(a,b);
    cout<<"the sum of these number is "<<res<<endl;

    return 0;
}