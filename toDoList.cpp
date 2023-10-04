#include<iostream>
using namespace std;

class Node
{
    public:
    string task;
    Node* next;
    bool complete=false;
    Node(string task)
    {
        this->task=task;
        next=NULL;
    }
};
class List
{
    Node* head;
    int length;
    public:
    List()
    {
        head=NULL;
        length=0;
    }
    void insert(string task,int pos)
    {
        if(pos<1 || pos>length+1)
        {
            cout<<"\n invalid position :";
        }
        else
        {
            Node* newNode = new Node(task);
            Node* curr=head;
            if(pos==1)
            {
                newNode->next= head;
                head=newNode;
            }
            else
            {
                for(int i=1;i<pos-1;i++)
                {
                    curr=curr->next;
                }
                newNode->next = curr->next;
                curr->next=newNode;
            }
            length++;
        }
    }
    void remove(int pos)
    {
        if(pos<1 || pos>length)
        {
            cout<<"\ninvalid position :";
        }
        else if(length==0)
        {
            cout<<"\n List is Empty : ";
        }
        else
        {
            Node* temp = NULL;
            Node* curr = head;
            if(pos==1)
            {
                temp=head;
                head=head->next;
                delete temp;
            }
            else
            {
                for(int i=1;i<pos-1;i++)
                {
                    curr=curr->next;
                }
                temp = curr->next;
                curr->next=temp->next;
                delete temp;
            }
            length--;
        }
    }
    void print()
    {
        int i=1;
         Node* curr=head;
         while(curr !=NULL)
         {
             cout<<endl<<i<<") "<<curr->task;
             if(curr->complete==true)
             {
                cout<<" : Completed ";
             }
             else
             {
                cout<<" : Not Completed ";
             }
             curr=curr->next;
             i++;
         }
     }
     void complete(int pos)
     {
        if(pos<1 || pos>length)
        {
            cout<<"\nInvalid optiion";
        }
        else
        {
            Node* curr=head;
            for(int i=1;i<pos-1;i++)
            {
                curr=curr->next;
            }
            curr->complete=true;
        }
     }
};

int main()
{
    List obj;
    while(true)
    {
        int check=0;
        cout<<"\n1) Add task ";
        cout<<"\n2) View task ";
        cout<<"\n3) Mark complete task ";
        cout<<"\n4) Remove task ";
        cout<<"\n5) Exit";

        cout<<"\nEnter the option : ";
        cin>>check;
        if(check==1)
        {
            string task;
            cout<<"\nEnter the task Name you want to add: ";
            cin.ignore();
            getline(cin,task);   
            obj.insert(task,1);
            cout<<endl<<endl;
        }
        else if(check==2)
        {
            cout<<"\nList is following ";
            obj.print();
            cout<<endl<<endl;
        }
        else if(check==3)
        {
            int pos;
            cout<<"\nEnter the position of task you want to complete :";
            cin>>pos;
            obj.complete(pos);
            cout<<endl<<endl;
        }
        else if(check==4)
        {
            int pos;
            cout<<"\nEnter the position of task you want to remove :";
            cin>>pos;
            obj.remove(pos);
            cout<<endl<<endl;
        }
        else if(check==5)
        {
            break;
        }
        else
        {
            cout<<"\nInvalid option ";
        }
    }
    return 0;
}