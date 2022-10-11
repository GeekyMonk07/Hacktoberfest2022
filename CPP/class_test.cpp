#include<iostream>
using namespace std;

int main(){
    int marks;
    char gr;
    cout<<"Enter Your Marks : ";
    cin>>marks;
    if(marks >=90){
        gr = 'A';
    }
    else if(marks >=80 &&  marks<90){
        gr = 'B';
    }
    else if(marks >=70 && marks <80){
        gr = 'C';
    }
    else{
        gr = 'F';
        cout<<"You are Failed!";
    }
    cout<<"Your Grade is : "<<gr;
}
