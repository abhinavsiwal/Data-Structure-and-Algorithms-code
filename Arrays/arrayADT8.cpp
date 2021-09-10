#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct myArray{
    int total_size;
    int used_size;
    int *ptr; //point first element of array
    
};
void createArray(struct myArray* a, int tsize, int usize){
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr= (int *) new(tsize*sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a-> ptr= (int *)malloc(tsize*sizeof(int));
}
// * = value at
// & = adress of
void setval(struct myArray *a) //take struct myArrray as an arguement 
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout<<"Enter Element "<<i<<" ";
        cin>>n;
        (a->ptr)[i] = n;
    }
    
}
void show(struct myArray *a){
        for (int i = 0; i < a->used_size; i++)
        {
            cout<<(a->ptr)[i]<<endl;
        }
        
}


int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    setval(&marks);
    show(&marks);
    return 0;
}
