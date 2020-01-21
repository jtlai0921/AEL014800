//5-5-1.cpp
#include <iostream>
using namespace std;
int main()
{
   int answer=27;               //設定數字解答
   int guess=-1;                 //猜數字的初始值-1使其不會與answer相等
   while( guess!=answer ){                 
       cout<<"請在1~100之間猜一個數字:";
       cin>>guess;
       if( guess==answer ){       //猜中了
            cout<<"恭喜你猜對了!"<<endl;   
            break;
       } 
       else if ( guess<answer ){                             //小於解答 
           cout<<"猜的數字太小了"<<endl;
           if(answer-guess<=5)cout<<"不過很接近了!"<<endl;  //和解答很接近 
       }
       else  {
           cout<<"猜的數字太大了"<<endl;                 //大於解答  
           if(guess-answer<=5)cout<<"不過很接近了!"<<endl; //和解答很接近  
       } 
   }             

   return 0;
}
