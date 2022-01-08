#include <iostream>
#include <conio.h>
using namespace std;

void swap(int *i,int *j){
    int temp = *i;
    *i=*j;
    *j=temp; 
}

void insertionsort(int arr[],int size){
    int key,j;
    for (int i = 1; i <size; i++)
    {
        key = arr[i];
        j=i-1;
        while (j>=0&&arr[j]>key)
        {
            arr[j=1]=arr[j];
            j--;
        }
       arr[j+1]=key;
    }
    
        
    
}
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}

int main(){
    int arr[10],size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the Elements of array"<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    insertionsort(arr,size);
    display(arr,size);

    getch();
    return 0;


}