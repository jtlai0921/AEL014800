//4-5-2.cpp
#include <iostream>
using namespace std;
int main()
{
   int answer=27;                                     //�]�w�Ʀr�ѵ�
   int guess;                       
   cout<<"�Цb1~100�����q�@�ӼƦr:";
   cin>>guess;
   if( guess==answer ) cout<<"���ߧA�q��F!"<<endl;   //�q���F 
   else if ( guess<answer ){                          //�q���Ʀr�p��ѵ� 
       cout<<"�q���Ʀr�Ӥp�F"<<endl;
       if(answer-guess<=5)cout<<"���L�ܱ���F!"<<endl;   //�M�ѵ��ܱ��� 
   }
   else  {
       cout<<"�q���Ʀr�Ӥj�F"<<endl;                //�q���Ʀr�j��ѵ�  
       if(guess-answer<=5)cout<<"���L�ܱ���F!"<<endl;  //�M�ѵ��ܱ���  
   } 
                
   return 0;
}
