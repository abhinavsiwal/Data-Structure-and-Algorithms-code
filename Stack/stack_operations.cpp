#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    int top,length;
    int *arr;

public:
    Stack(int size)
    {
        top = -1;
        length=size;
        arr=new int[length];
       for(int i=0;i<length;i++){
           arr[i]=0;
       }
    }
    // void enterSize(){
    //     cout<<"Enter the size of Stack<<endl";
    //     cin>>size;
    // }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == length-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "Value changed at location " << pos << endl;
    }
    void display()
    {
        cout << "All values of stack are" << endl;
        for (int i = length; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    // s1.enterSize();
    int option, position, value,size;
    cout<<"Enter a size for stack :";
    cin>>size;

    Stack s1(size);
    do
    {
        cout << "What operation do you want to perform? Select Option Number.Enter 0 to exit"<<endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in the stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout<<"Pop Function Called- Popped Value:" <<s1.pop()<<endl;
            break;
        case 3:
            if(s1.isEmpty()){
                cout<<"Stack is Empty"<<endl;
            }
            else{
                cout<<"Stack is not Empty"<<endl;
            }
            break;
        case 4:
            if(s1.isFull()){
                cout<<"Stack is Full"<<endl;
            }
            else{
                cout<<"Stack is not Full"<<endl;
            }
            break;
        case 5:
            cout<<"Enter the position of item you want to peek"<<endl;
            cin>>position;
            cout<<"Peek function called - Value at Position - " <<position<<" is = "<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"Count Function Called-Number of items in the stack are: "<<s1.count()<<endl;
            break;
        case 7:
            cout<<"Change Function Called";
            cout<<"Enter position of item you want to change : ";
            cin>>position;
            cout<<"Enter value of item you want to change : ";
            cin>>value;
            s1.change(position,value);
            break;
        case 8:
            cout<<"Display Function Called";
            s1.display();
            break;
        case 9:{
            system("cls");
            break;
        default:
            cout<<"Enter valid option";
            break;
        }
        }

    } while (option != 0);

    return 0;
}