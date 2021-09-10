#include<iostream>
#include<conio.h>
using namespace std;

int insertion(int ar[],int size,int element,int capacity,int index){
    if(size>=capacity){
    return -1;
 }
    for(int i=size-1;i>=index;i--){
        ar[i+1]=ar[i];
    }
    ar[index] = element;
    return 1;
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}

int main(){
    int size,index,element,arr[100];
    cout<<"Enter the size of array"<<endl;;
    cin>>size;
    cout<<"Enter the Elements of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Index where elememt is to be Inserted "<<endl;
    cin>>index;
    cout<<"Enter the no to be Inserted"<<endl;
    cin>>element;

    insertion(arr,size,element,100,index);
    size=size+1;
    show(arr,size);
    getch();
    return 0;    
}
