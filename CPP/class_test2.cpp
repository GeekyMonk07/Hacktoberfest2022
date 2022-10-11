#include<iostream>
using namespace std;

int main(){
    int yr;
    cout<<"Enter Year to Check : ";
    cin>>yr;
    if(yr%4==0){
        cout<<"Leap Year!";
    }
    else{
        cout<<"Non Leap Year!";
    }
}
