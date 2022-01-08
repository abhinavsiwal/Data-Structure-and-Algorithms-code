#include<iostream>
#include<conio.h>
using namespace std;

// Pass by value
void passByValueSwap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
// Call by address
void callByAddress(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
// Call by reference
void callByReference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    a=10;
    b=20;
    // passByValueSwap(a,b);
    // callByAddress(&a,&b);
    callByReference(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}