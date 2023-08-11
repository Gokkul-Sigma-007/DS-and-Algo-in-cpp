#include<iostream>
#include<string>

using namespace std;

class stack{
    private: 
    int top;
    int arr[5];

    public: 
    stack()
    {
        top = -1;
        for(int i=0; i<5; i++)
        {
            arr[i]=0;
        }
    }

    bool isEmpty()    
    {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }

    bool isFull(){

        if(top==4){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int val)
    {
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]= val;
        }
    }

    int pop()
    {

        if(isEmpty()){

            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            int popvalue =arr[top];
            arr[top]=0;
            top--;
            return popvalue;             
        }

    }

    int count()
    {

        return(top+1);

    }

    int peek(int pos)
    {

        if(isEmpty())
        {
            cout<<"stack underflow condition"<<endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    int change(int pos, int val)
    {

        arr[pos]=val;
        cout<<"value has been succesfully changed at position"<<pos<<endl;
    }

    void display()
    {
        cout<<"The values available in the stack are "<<endl;
        for(int i=4; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }    
};

int main()
{
    stack s1;

    int option , position , value;

    do
    {
        cout<<"choose an operation you wnat to perform on the stack"<<endl;

        cout<<"1.push()"<<endl;

        cout<<"2.pop()"<<endl;

        cout<<"3.isEmpty()"<<endl;

        cout<<"4.isFull()"<<endl;

        cout<<"5.peek()"<<endl;

        cout<<"6.count()"<<endl;

        cout<<"7.change()"<<endl;

        cout<<"8.display()"<<endl;

        cout<<"9.clear screen"<<endl;

        cin>>option;

        switch(option)
        {

            case 1:

            cout<<"Enter the value you want to enter intoo the stack"<<endl;

            cin>>value;

            s1.push(value);

            break;

            case 2:

            cout<<"pop function has been called to pop out the top element"<<s1.pop()<<endl;

            break;

            case 3:

            if(s1.isEmpty())
            {

                cout<<"stack is empty"<<endl;
            }
            else {

                cout<<"stack is not empty"<<endl;
            }
            break;

            case 4:

            if(s1.isFull()){

                cout<<"stack is full"<<endl;
            }
            else{

                cout<<"stack isnt full"<<endl;
            }

            break;

            case 5:

            cout<<"enter the position in which you want to see the value "<<endl;

            cin>>position;

            cout<<"peek function has been called for position "<< position <<"and the value is "<< s1.peek(position)<<endl;

            break;

            case 6:

            cout<<"count operation has been called ! hence the number of elements in stack are "<<s1.count()<<endl;

            break;

            case 7:

            cout<<"change operation has been called "<<endl;

            cout<<"Enter the value you want to change :"<<endl;
            
            cin>>value;

            s1.change(position , value);

            break;

            case 8:

            cout<<"display operation has been called"<<endl;

            s1.display();

            break;

            default :

            cout<<"Enter the proper option number"<<endl;

        }
        
    } while (option!=0);

    return 0;
    
}





