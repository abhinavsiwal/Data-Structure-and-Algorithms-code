#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Values of a & b before swapping "<<endl<<a<<endl<<b<<endl;
    swap(&a,&b);
    cout<<"Values of a & b after swapping "<<endl<<a<<endl<<b<<endl;

}