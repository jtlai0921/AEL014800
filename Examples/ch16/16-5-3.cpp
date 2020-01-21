/* 環形佇列程式 */
#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 6
class queue  {
    public:
        queue ();
        void enqueue(int);
        int dequeue();
        void printQueue();
	private:
        int array[NUM];
        int rear;
        int front;
};

queue::queue(){
    rear=0;
    front=0;
}
void queue::enqueue(int n)
{
  if((rear+1)%NUM == front){
      cout<<"Queue is full!";
      exit(1);
  }
  else{ 
      rear = (rear+1)%NUM;
      array[rear] = n;
  }
}
int queue::dequeue()
{
  if(front == rear) {
    cout<<"Queue is empty!!";
    exit(1);
  }
  front = (front+1)% NUM;
  return array[front];
}
void queue::printQueue()
{
  int i;
  if(front == rear) {
      cout<<"Queue is empty!!\n";
  } else {
      cout<<"Queue: ";
      for(i=rear;i!=front;i=(i+NUM-1)%NUM)
          cout<<array[i]<<" ";
      cout<<endl;
  }
}
int main(void)
{
  int choice=0,n;
  queue Q1;
  while(choice != -1)
  {
    cout<<"1) enqueue 2) dequeue 3) print queue\n";
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
