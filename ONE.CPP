#include<iostream.h>
#include<conio.h>
class node
{
public:
void insertndisplay(int);
node();
private:
int value;
node *next;
node *head;
};
void node::node()
{ head=NULL; }
void node::insertndisplay(int x){
int rev=0;
while(x>0)
{
int rem=x%10;
rev=rev*10+rem;
x=x/10;
}
  while(rev>0)
  {
  int i=rev%10;

  node* temp=new node;
  temp->value=i;
  temp->next=NULL;
     if(head==NULL)
     {
       head=temp;
       cout<<head->value;
      }
    else
     {
      node *h=head;
     while(h->next!=NULL)
     {
      h=h->next;
      }
      h->next=temp;
      cout<<"->"<<temp->value;
     }
  rev=rev/10;

  }

}

int main()
{
clrscr();
node o;
int s;
cout<<"enter value\n";
cin>>s;
o.insertndisplay(s);
getch();
}