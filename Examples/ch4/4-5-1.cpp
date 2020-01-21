//4-5-1.cpp
#include <iostream>
using namespace std;
int main()
{
   int year;
   cin>>year;
   if(!(year%4)) {                      //可被4整除
       if(!(year%100) && year%400)      //被4和100都整除，但不被400整除
           cout<<year<<" 年不為閏年"<<endl;   
       else 
           cout<<year<<" 年為閏年"<<endl;  //被4和400都整除，但不被100整除
   } 
   else 
       cout<<year<<" 年不為閏年"<<endl;   //無法被4整除

    return 0;
} 
