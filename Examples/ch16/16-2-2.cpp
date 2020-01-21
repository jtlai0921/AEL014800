/* ¦r¦ê±ÛÂàµ{¦¡ */
#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 100
class stack {
    public:
        stack();
        void push(char);
        char pop();
        bool is_empty();
	private:
        char array[NUM];
        int top;
};

stack::stack(){
    top=-1;
}
void stack::push(char n)
{
  if(top == NUM -1) {
      cout<<"stack is full!";
      exit(1);
}
  array[++top] = n;
}
char stack::pop()
{
  if(top == -1) {
    cout<<"stack is empty!!";
    exit(1);
  }
  return array[top--];
}
bool stack::is_empty()
{
  if (top>=0) return false;
  else return true;
}
int main(void)
{
  stack S1;
  char str[100];
  while(cin>>str) {
    char *p=str;
    while(*p) {
        S1.push(*p);
        p++;
    }
    while(!S1.is_empty())
        cout<<S1.pop( );
    cout<<endl;  
  }
  return 0;
}
