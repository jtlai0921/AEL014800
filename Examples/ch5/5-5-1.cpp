//5-5-1.cpp
#include <iostream>
using namespace std;
int main()
{
   int answer=27;               //�]�w�Ʀr�ѵ�
   int guess=-1;                 //�q�Ʀr����l��-1�Ϩ䤣�|�Panswer�۵�
   while( guess!=answer ){                 
       cout<<"�Цb1~100�����q�@�ӼƦr:";
       cin>>guess;
       if( guess==answer ){       //�q���F
            cout<<"���ߧA�q��F!"<<endl;   
            break;
       } 
       else if ( guess<answer ){                             //�p��ѵ� 
           cout<<"�q���Ʀr�Ӥp�F"<<endl;
           if(answer-guess<=5)cout<<"���L�ܱ���F!"<<endl;  //�M�ѵ��ܱ��� 
       }
       else  {
           cout<<"�q���Ʀr�Ӥj�F"<<endl;                 //�j��ѵ�  
           if(guess-answer<=5)cout<<"���L�ܱ���F!"<<endl; //�M�ѵ��ܱ���  
       } 
   }             

   return 0;
}
