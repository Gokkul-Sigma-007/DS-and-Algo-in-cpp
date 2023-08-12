//QUEUE

#include<iostream>

using namespace std;

class queue{

    private:

    int front;
    int rear;
    int arr[5];

    public:

    queue()
    {

        front = -1;

        rear = -1;

        for(int i=0; i<5; i++ )
        {
            arr[i]=0;
        } 
    }
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
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

        if(rear==4)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(isEmpty())
        {
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else
        {
            rear++;            
            arr[rear]=val;  
            
        }
    }



    int dequeue()
    {
        int x;
        if(isEmpty())
        {
            cout<<"The Queue is empty"<<endl;
            return 0;
        }
        else if(front==rear)
        {
            x=arr[front];
            arr[front]=0;
            rear=-1;
            front=-1;
            return x;
        }
        else
        {

            x=arr[front];
            arr[front]=0;
            front++;
            return x;

        }
    }

    int count()
    {
        return(rear-front+1);
    }

    int display()
    {
        cout<<"the values inside Queue are as follows"<<endl;

        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<endl;

        }
    }
};

int main()
{

    queue q1;

    int option, value;

    do{

        cout<<"What are the operations do you want to perform on the queue"<<endl;

        cout<<"1.isFull()"<<endl;

        cout<<"2.isEmpty()"<<endl;

        cout<<"3.InsertAnElement()"<<endl;

        cout<<"4.RemoveAnElement()"<<endl;

        cout<<"5.Count()"<<endl;

        cout<<"6.DisplayAllElements()"<<endl;

        cin>>option;

        switch(option)
        {

            case 1:

            cout<<"isFull function has been called"<<q1.isFull()<<endl;

            break;

            case 2:

            cout<<"isEmpty has been called"<<q1.isEmpty()<<endl;

            break;

            case 3:

            cout<<"Enqueue function has been called . please type the element to insert into queue"<<endl;

            cin>>value;

            q1.enqueue(value);

            break;

            case 4:

            cout<<"Dequeue function has been called"<<q1.dequeue()<<endl;

            break;

            case 5:

            cout<<"count function has been called"<<q1.count()<<endl;

            break;

            case 6:

            cout<<"display function has been called"<<endl;

            q1.display();

            break;

            default:

            cout<<"enter the correction option number. thank you"<<endl;

        }
    }while(option!=0);

    return 0;

}
