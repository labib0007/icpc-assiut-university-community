#include<iostream>
using namespace std;

int main(){

    int A;
    cin>> A;

    char S;
    cin>>S;

    int B;
    cin>>B;

    if(S=='+')
    cout<< A+B<<'\n';
    else if(S=='-')
    cout<<A-B<<'\n';
    else if(S=='*')
    cout<<A*B<<'\n';
    else if(S=='/')
    cout<<A/B<<'\n';


    return 0;
}