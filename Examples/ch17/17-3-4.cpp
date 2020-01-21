/* ¨Ï¥Î¦ê¦C§e²{ÂùºÝ¦î¦C */
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct node {
  int data;
  struct node *prev;
  struct node *next;
} NODE;
class Dqueue {
    public:
        Dqueue();
        void push_front(int);
        int pop_front();
        void push_rear(int);
        int pop_rear();
        void printDqueue();
	private:
        NODE* front;
        NODE* rear;
};

Dqueue::Dqueue(){
    front=NULL;
    rear=NULL;
}
void Dqueue::push_front(int n)
{
  NODE *tmp;
  tmp=front;
  if(front==NULL || rear==NULL){
      front=new NODE;
      rear=front;
  }
  else{
      front=new NODE;
      tmp->next=front;
  }
  front->data=n;
  front->prev=tmp;
  front->next=NULL;
}
int Dqueue::pop_front()
{
  if(front==NULL){
      cout<<"Queue is empty!"<<endl;
      exit(1);
  }
  else{ 
      int tmpData=front->data;
      NODE *tmp=front->prev;
      front->prev->next=NULL;
      delete front;
      if(rear==front){
          rear=NULL;
          front==NULL;
      }
      else
          front=tmp;
      return tmpData;
  }
}
void Dqueue::push_rear(int n)
{
  NODE *tmp;
  tmp=rear;
  if(front==NULL || rear==NULL){
      rear=new NODE;
      front=rear;
  }
  else{
      rear=new NODE;
      tmp->prev=rear;
  }
  rear->data=n;
  rear->next=tmp;
  rear->prev=NULL;
}
int Dqueue::pop_rear()
{
  if(rear==NULL){
      cout<<"Queue is empty!"<<endl;
      exit(1);
  }
  else{ 
      int tmpData=rear->data;
      NODE *tmp=rear->next;
      rear->next->prev=NULL;
      delete rear;
      if(rear==front){
          rear=NULL;
          front==NULL;
      }
      else
          rear=tmp;
      return tmpData;
  }
}
void Dqueue::printDqueue()
{
  NODE *tmp=front;   
  while(tmp!=NULL) {
    cout<<tmp->data<<" ";
    tmp = tmp->prev;
  }
  cout<<endl;
}
int main(void)
{
  int choice=0,n;
  Dqueue D1;
  while(choice != -1)
  {
    cout<<"1)push_front 2)push_rear 3)pop_front 4)pop_rear\n";
    cout<<"5)print current deque\n";
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice)
    {
      case 1: cout<<"what do you want to push? ";
              cin>>n;
              D1.push_front(n);
              break;
      case 2: cout<<"what do you want to push? ";
              cin>>n;
              D1.push_rear(n);
              break;
      case 3: cout<<D1.pop_front( )<<" was popped from queue\n";
              break;
      case 4: cout<<D1.pop_rear( )<<" was popped from queue\n";
              break;
      case 5: D1.printDqueue( );
              break;
    }
  }
  return 0;
}
