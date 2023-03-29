#include <iostream>
using namespace std;
//program that takes input of age and print if we are adult or not 
int main(){
    // int age;
    // cin>>age;
    // if (age>=18){
    //     cout<<"You are an adult";
    // }else{
    //     cout<<"You are not an adult";
    // }

    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
   else if( marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }



    return 0;
}

