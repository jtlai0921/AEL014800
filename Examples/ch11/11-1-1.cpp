/* ���P�{�� */
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
typedef struct card {
  int flower;     /* 0123���O������B�j���B���ߡB�®� */
  int num;        /* 0~12 ��� 2,3,4�K12,13,A �������Ʀr */
} CARD;
int main(void)
{
    string fl[ ] = {"����","�j��","����","�®�"};
    int choice; 
    CARD player,banker;
    srand(time(NULL));
    cout<<"�аݱz�Q�� ���^�j �٬O�� ���^�p �H";
    cin>>choice;
    do {
      cout<<"�o�P���K\n";
      player.flower = rand( ) % 4;
      player.num = rand( )% 13;
      banker.flower = rand( )% 4;
      banker.num = rand( ) % 13;
      if(player.num == 12)
        cout<<"�z���쪺�P�O "<<fl[player.flower]<<" A"<<endl;
      else
        cout<<"�z���쪺�P�O "<<fl[player.flower]<<" "<<player.num+2<<endl;
      if(banker.num == 12)
        cout<<"�q�����쪺�P�O "<<fl[banker.flower]<<" A"<<endl;
      else
        cout<<"�q�����쪺�P�O "<<fl[banker.flower]<<" "<<banker.num+2<<endl;
      if(choice == 1) {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          cout<<"�zĹ�F�I"<<endl;
        else
          cout<<"�z��F�I"<<endl;
      } else {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          cout<<"�z��F�I"<<endl;
        else
          cout<<"�zĹ�F�I"<<endl;
      }
      cout<<"�A���@���ܡH  ���^�j ���^�p ���^�����F";
      cin>>choice;
    } while(choice != 0);
    return 0;
}
