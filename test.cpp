#include<iostream>
#include<string>
using namespace std;


class gnode
{
string name;
gnode *next;
friend class graph;
};

class graph
{
private:
gnode *head[20];
int n;
public:
graph();
void create();
void display();
};
 graph:: graph()
{
string str; 
gnode *head[20];
int i;
}


void graph ::create()
{
gnode *temp, *curr;
string str;
char userch;
int i;

cout<<"Enter number of Friends"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter Friend's Username"<<endl;
cin>>str;
head[i]= new gnode;
head[i]->name=str;
head[i]->next=NULL;
}
for (i=0;i<n;i++)
{
temp=head[i];
do
{
cout<<"Enter Friend"<<endl;
cin>>str;
if(str==head[i]->name)
{
cout<<"Self Not Allowed"<<endl;
}
else
{
curr= new gnode;
curr->name=str;
curr->next=NULL;
temp->next=curr;
temp=temp->next;
}

}while(userch=='y');
}
}
void graph :: display()
{
    int i;
gnode *temp;
for(i=0;i<n;i++)
{
temp=head[i];
while(temp!=NULL)
{
cout<<temp->next;
temp=temp->next;
}
}

};

int main()
{
gnode g;
graph gr;

gr.create();
gr.display();
cout<<"Do you want to continue?"<<endl;
}