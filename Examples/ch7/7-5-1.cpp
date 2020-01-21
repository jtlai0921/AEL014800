#include <iostream>
#include <cstdlib>
#include <ctime>
#define SIZE 20
using namespace std;
int search(int [ ],int,int,int);
int main(void)
{
    int i,a[SIZE],from=0,key;
    srand(time(NULL));  //亂數產生陣列元素值
    for(i=0;i<SIZE;i++) 
      a[i] = rand( ) % 10 + 1;   
    cout<<"請輸入欲搜尋的值(1~10)";  
    cin>>key;
    while(from < SIZE) {
      int ans;
      ans = search(a,from,SIZE,key);
      if(ans == -1) {
        if(!from)     
          cout<<key<<" not found\n";
        break;
      } else {  
            cout<<key<<" found at a["<<ans<<"] = "<<a[ans]<<endl;
            from = ans + 1;
      }  
    }
    return 0;
}
int search(int a[ ],int from,int size,int key)
{
   int i;
   for(i=from;i<size;i++)
     if(a[i] == key)
       return i;
   return -1;       
}
