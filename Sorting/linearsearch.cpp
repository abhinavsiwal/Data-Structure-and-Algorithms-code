#include<iostream>
#include<conio.h>
using namespace std;

void linearsearch(int arr[],int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"Element found at index = "<<i<<endl;
            break;
        }
        else{
            cout<<"Element not found";
        }
    }
}

int main(){
    int arr[10],size,element;
    cout<<"Enter the size of Array"<<endl;
    cin>>size;
    cout<<"Enter the Elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element to be searched"<<endl;
    cin>>element;
    linearsearch(arr,size,element);
    getch();
    return 0;

}