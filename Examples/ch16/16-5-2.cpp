/* 多項式程式 */
#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 100
class queue  {
    public:
        queue ();
        void enqueue(int);
        int dequeue();
        bool empty();
	private:
        int array[NUM];
        int rear;
        int front;
};

queue::queue(){
    rear=-1;
    front=-1;
}
void queue::enqueue(int n)
{
  if(rear == NUM -1) {
      cout<<"Queue is full!";
      exit(1);
  }
  array[++rear] = n;
}
int queue::dequeue()
{
  if(front == rear) {
    cout<<"Queue is empty!!";
    exit(1);
  }
  return array[++front];
}
bool queue::empty()
{
  if(front == rear) 
    return true;
  else
    return false;
}
int S(int x,int n)
{
    int i,tmp=x;
    if(n==0) return 1;
    for(i=1;i<n;i++)
      x = x*tmp;
    return x;  
}
int main(void)
{
  int i,t,n,ans=0;
  queue Q1;
  cout<<"請輸入多項式之常數項係數: ";
  while( true ) {
    cin>>n;
    if(n==-999)break;
    Q1.enqueue(n);
    cout<<"請輸入多項式之高一項係數（結束請輸入-999）: ";
  }
  cout<<"請輸入變數之值: ";
  cin>>n;
  for(i=0;;i++)
  {
    if(!Q1.empty()) {
      t=Q1.dequeue( );
      ans = ans + t*S(n,i);
    } else break;
  }
  cout<<"f("<<n<<") = "<<ans<<endl;
  return 0;
}
