//3-2-2.cpp
#include <iostream>
using namespace std;
int main()
{
    int number;                   //宣告一整數變數number 
    cout<<"請輸入一整數:"; 
    cin>>number;                  //將使用者輸入存入變數number中 
    
    cout<<number<<" 除以 5 等於"<<number/5<<" 餘 "<<number%5<<endl; 
    //利用算數運算子『/』取得商，利用算數運算子『%』取得餘數 
      
    return 0;
}
