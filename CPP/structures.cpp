#include<iostream>
#include<conio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int a,int b){
    r->length=a;
    r->breadth=b;
};

int area(struct Rectangle r){
    return r.length*r.breadth; 
}

void changeLength(struct Rectangle *r,int l){
    r->length=l;
}

int main(){
    struct Rectangle r;
    int a;
    initialize(&r,10,5);
    a = area(r);
    changeLength(&r,20);

    cout<<"length = "<<r.length<<endl;
    cout<<"breadth = "<<r.breadth<<endl;
    cout <<"area = "<<a<<endl;
}