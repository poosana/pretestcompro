#include<iostream>
using namespace std;

int main(){
    int A;
    cin>>A;
    while(A>=360){
        A -= 360;
    }
    cout<<A;
}