#include<iostream>
using namespace std;

int main(){
    char sh;
    float ar;
    cout<<"Enter S for Square, C for Circle, R for Rectangle : ";
    cin>>sh;
    switch (sh)
    {
    case 'S':
    int s;
    cout<<"Enter Sides : ";
    cin>>s;
    ar = s*s;
    break;

    case 'R':
    int l,b;
    cout<<"Enter length and breath : ";
    cin>>l>>b;
    ar = l*b;
    break;

    case 'C':
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    ar = 3.14*r*r;
    break;

    default:
    cout<<"Invalid Character Entered!";
    break;
    }
    cout<<"Area is : "<<ar;
}