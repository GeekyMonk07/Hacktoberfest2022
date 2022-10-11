#include<iostream>
using namespace std;

int main(){
    int no,i,fact=1;
    cout<<"Enter No. : ";
    cin>>no;
    for(i=no;i>=1;i--){
        fact = fact*i;
    }
    cout<<"Factorial is : "<<fact;
}