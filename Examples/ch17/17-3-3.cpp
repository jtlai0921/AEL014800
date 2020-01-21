/* ¨Ï¥Î¦ê¦C§e²{¦î¦C */
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct node {
  int data;
  struct node *prev;
  struct node *next;
} NODE;
class queue {
    public:
        queue();
        void enqueue(int);
        int dequeue();
        void printQueue();
	private:
        NODE* front;
        NODE* rear;
};

queue::queue(){
    front=NULL;
    rear=NULL;
}
void queue::enqueue(int n)
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
int queue::dequeue()
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
void queue::printQueue()
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
  queue Q1;
  while(choice != -1)
  {
    cout<<"1) push 2) pop 3) print queue\n";
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice)
    {
      case 1: cout<<"what do you want to enqueue? ";
              cin>>n;
              Q1.enqueue(n);
              break;
      case 2: cout<<Q1.dequeue( )<<" was dequeued from queue\n";
              break;
      case 3: Q1.printQueue( );
              break;
    }
  }
  return 0;
}
