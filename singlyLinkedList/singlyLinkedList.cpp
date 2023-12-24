//LinkedList
//singly_linked_list

#include<iostream>
using namespace std;

class Node{
    public:



    int value;
    int key;
    Node* next;
    Node()
    {
        key=0;
        value=0;
        next=NULL;
    }
    Node(int k, int v)
    {
        key=k;
        value=v;
    }
};



class SinglyLinkedList{
    public:

    Node* head;

    SinglyLinkedList()
    {
        head=NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head=n;
    }
    Node* nodeExists(int k)
    {
        Node* temp =  NULL;

        Node* ptr = head;
        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }

        return temp;
    }

 //APPENDING OPERATION

 void appendNode(Node *n)
 {
    if(nodeExists(n->key)!=NULL)
    {
        cout<<"Node Already exists with the key value : "<<n->key<<".Append another node with different key value"<<endl;
    }
    else{
        if(head==NULL)
        {
            head = n;
            cout<<"Node  has been appended"<<endl;

        }
        else
        {
            Node* ptr = head;
            while(ptr->next!=NULL)
            {
                ptr = ptr->next;
            }

            ptr->next=n;

            cout<<"Node has been appended"<<endl;
        
        }
    }
 }

 //PREPENDING A NODE

 void prependNode(Node* n)
 {
    if(nodeExists(n->key)!=NULL)
    {
        cout<<"Node Already exists with the key value : "<<n->key<<".Append another node with different key value"<<endl;
    }
    else
    {
        n-> next=head;
        head=n;
        cout<<"Node has been prepended"<<endl;

    }

 }

 //INSERTION OF NODE INBETWEEN 

 void insertNodeAfter(int k, Node* n)
 {

    Node* ptr = nodeExists(k);
    if(ptr == NULL)
    {
        cout<<"N node Exists with key value: "<<k<<endl;
    }
    else
    {
        if(nodeExists(n->key)!=NULL)
    {
        cout<<"Node Already exists with the key value : "<<n->key<<".Append another node with different key value"<<endl;
    }
    else
    {
        n->next=ptr->next;
        ptr->next=n;
        cout<<"Node has been inserted"<<endl;
    }
    }
 }

 //DELETION OF A NODE BY KEY VALUE
 void deleteNodeBykey(int k)
 {
    if(head == NULL)
    {
        cout<<"singly linked list already empty.so cannot be deleted"<<endl;
    }

    else if(head!=NULL)
    {
        if(head->key==k)
        {
            head= head->next;
            cout<<"Node unlicked with key value: "<<k<<endl;
        }
        else
        {
            Node* temp= NULL;
            Node* prevptr =  head->next;
            Node* currentptr = head->next;
            while(currentptr!=NULL)
            {
                if(currentptr->key==k)
                {
                    temp = currentptr;
                    currentptr =NULL;
                }
                else{
                    prevptr = prevptr->next;
                    currentptr = currentptr->next;
                }

            }

            if(temp!=NULL)
            {
                prevptr->next=temp->next;
                cout<<"node unlinked with key values"<<k<<endl;
            }
            else
            {
                cout<<"Node doesnt exist with the key value: "<<k<<endl;
            }
        }
    }
 }

 //UPDATION OF NODE USING KEY
 void updateNode(int k, int v)
 {
    Node* ptr = nodeExists(k);
    if(ptr!=NULL)
    {
        ptr->value=v;
        cout<<"Node has been updated succesfully"<<endl;
    }
    else
    {
        cout<<"Node doesnt exists with any key value: "<<k<<endl;
    }
 }

 //PRINTING OPERATION 

 void printList(){
    if(head == NULL)
    {
        cout<<"No Nodes in singly linked list : ";
    }
    else
    {
        cout<<endl<<"singly linked list values: ";
        Node* temp =  head;

        while(temp!=NULL)
        {


            cout<<"("<<temp->key<<","<<temp->value<<") --> ";
            temp = temp->next;
        }
    }
 }
};

int main()
{

    SinglyLinkedList s;
    int option;
    int key1,k1,value1;
    do
    {
        cout<<"what operation you want to perform ? select an option or press 0 to exit."<<endl;
        cout<<"1.appending a node"<<endl;
        cout<<"2.prepending a node"<<endl;
        cout<<"3.insetion operation "<<endl;
        cout<<"4.deletion of node "<<endl;
        cout<<"5.updation of node  "<<endl;
        cout<<"6. print the list "<<endl;
        cout<<"7. clear screen "<<endl<< endl;

        cin>>option;
        Node* n1 = new Node();

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<"append node operation enter key and value of node to be appended"<<endl;
            cin>>key1;
            cin>>value1;
            n1->key=key1;
            n1->value=value1;
            s.appendNode(n1);
            break;

            case 2:
            cout<<"prepend node operation enter key and value of node to be prepended"<<endl;
            cin>>key1;
            cin>>value1;
            n1->key=key1;
            n1->value=value1;
            s.prependNode(n1);
            break;

            case 3:
            cout<<"insert node after operation enter key of existing node after which you want to insert new node"<<endl;
            cin>>key1;
            cout<<"Enter key and date of the new node"<<endl;
            cin>>value1;
            n1->key=key1;
            n1->value=value1;
            s.insertNodeAfter(k1,n1);
            break;

            case 4:
            cout<<"delete node by key opertion. enter key of the node to be deleted:"<<endl;
            cin>>k1;
            s.deleteNodeBykey(k1);
            break;

            case 5:
            cout<<"upadate the node using key . enter key and new value to be updated"<<endl;
            cin>>key1;
            cin>>value1;
            s.updateNode(key1,value1);

            break;

            case 6:

            s.printList();

            break;

            case 7:

            system("cls");
            break;

            default:
            cout<<"enter proper option number"<<endl;
        }
    }while(option!=0);
    return 0;
}
