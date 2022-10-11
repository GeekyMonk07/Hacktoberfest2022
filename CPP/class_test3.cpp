#include<iostream>
using namespace std;

int main(){
    int no,i,k=0;
    cout<<"Enter No. : ";
    cin>>no;
    for(i=2;i<no;i++){
        if(no%i==0){
            k++;
            break;
        }
    }
        if(k>0){
            cout<<"Number is not Prime";
        }
        else{
            cout<<"Number is Prime";
        }
    }
