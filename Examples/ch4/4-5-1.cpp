//4-5-1.cpp
#include <iostream>
using namespace std;
int main()
{
   int year;
   cin>>year;
   if(!(year%4)) {                      //�i�Q4�㰣
       if(!(year%100) && year%400)      //�Q4�M100���㰣�A�����Q400�㰣
           cout<<year<<" �~�����|�~"<<endl;   
       else 
           cout<<year<<" �~���|�~"<<endl;  //�Q4�M400���㰣�A�����Q100�㰣
   } 
   else 
       cout<<year<<" �~�����|�~"<<endl;   //�L�k�Q4�㰣

    return 0;
} 
