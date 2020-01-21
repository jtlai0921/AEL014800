/* 玩牌程式 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
typedef struct card {
  int flower;     /* 0123分別為梅花、磚塊、紅心、黑桃 */
  int num;        /* 0~12 表示 2,3,4…12,13,A 之間的數字 */
} CARD;
int main(void)
{
    string fl[ ] = {"梅花","磚塊","紅心","黑桃"};
    int choice; 
    CARD player,banker;
    srand(time(NULL));
    cout<<"請問您想比 １）大 還是比 ２）小 ？";
    cin>>choice;
    do {
      cout<<"發牌中…\n";
      player.flower = rand( ) % 4;
      player.num = rand( )% 13;
      banker.flower = rand( )% 4;
      banker.num = rand( ) % 13;
      if(player.num == 12)
        cout<<"您拿到的牌是 "<<fl[player.flower]<<" A"<<endl;
      else
        cout<<"您拿到的牌是 "<<fl[player.flower]<<" "<<player.num+2<<endl;
      if(banker.num == 12)
        cout<<"電腦拿到的牌是 "<<fl[banker.flower]<<" A"<<endl;
      else
        cout<<"電腦拿到的牌是 "<<fl[banker.flower]<<" "<<banker.num+2<<endl;
      if(choice == 1) {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          cout<<"您贏了！"<<endl;
        else
          cout<<"您輸了！"<<endl;
      } else {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          cout<<"您輸了！"<<endl;
        else
          cout<<"您贏了！"<<endl;
      }
      cout<<"再玩一次嗎？  １）大 ２）小 ０）不玩了";
      cin>>choice;
    } while(choice != 0);
    return 0;
}
