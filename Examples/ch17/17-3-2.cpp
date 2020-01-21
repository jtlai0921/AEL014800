/* ®œ•Œ¶Í¶Cße≤{∞Ô≈| */
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct node {
  int data;
  struct node *next;
} NODE;
class stack {
    public:
        stack();
        void push(int);
        int pop();
        void printStack();
	private:
        NODE* top;
};

stack::stack(){
    top=NULL;
}
void stack::push(int n)
{
  NODE *p;
  p = new NODE; 
  p->data = n;
  p->next = top;
  top = p; 
}
int stack::pop()
{
  int popNum;  
  NODE *tmp;
  if(top == NULL) {
    cout<<"stack is empty!";
    exit(1);
  } 
  tmp = top->next;
  popNum = top->data;
  delete top;
  top = tmp;
  return popNum;
}
void stack::printStack()
{
  NODE *tmp=top;   
  while(tmp) {
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }
  cout<<endl;
}
int main(void)
{
  int choice=0,n;
  stack S1;
  while(choice != -1)
  {
    cout<<"1) push 2) pop 3) print stack(from top to bottom)\n";
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice)
    {
      case 1: cout<<"what do you want to push? ";
              cin>>n;
              S1.push(n);
              break;
      case 2: cout<<S1.pop( )<<" was popped from stack\n";
              break;
      case 3: S1.printStack( );
              break;
    }
  }
  return 0;
}
