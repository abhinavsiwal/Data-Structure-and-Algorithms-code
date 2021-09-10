#include<iostream>
#include<conio.h>
using namespace std;

int deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    return 1;
}
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
   int arr[20],size,index;
    cout<<"Enter the size of Array"<<endl;
    cin>>size;
    cout<<"Enter the Elements of Array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index of Element to be deleted"<<endl;
    cin>>index;
    deletion(arr,size,index);
    size=size-1;
    display(arr,size);
    getch();
    return 0;

}