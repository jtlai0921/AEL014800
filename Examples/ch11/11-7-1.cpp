/* 員工打卡機程式 */
#include <iostream>
#include<string>
using namespace std;
typedef struct staff {
  int id;
  string arrive;
  string leave;
} STAFF;
int main(void)
{
    int id,now=0;
    char ch;
    STAFF s[3];
    while(1) {
      cout<<"1) 打卡 2)查詢 0)離開 :"; 
      cin>>ch;
      if(ch == '1') {
        cout<<"請輸入您在公司的id：";
        cin>>s[now].id;
        cout<<"您今天到班時間是：";
        cin>>s[now].arrive;
        cout<<"      離開時間為：";
        cin>>s[now].leave;
        cout<<"謝謝，下一位"<<endl;
        now++;
      } else if(ch == '2') {
        int i;
        if(now != 0) {     
          cout<<"想查詢誰的資料?";
          cin>>id;
          for(i=0;i<now;i++)
            if(id == s[i].id) {
               cout<<"上次到達時間為: "<<s[i].arrive<<endl;
               cout<<"上次離開時間為: "<<s[i].leave<<endl;
               break;   
            }
          if(i>=now)  
            cout<<"無此 id"<<endl;    
        } else {
          cout<<"尚無資料"<<endl;     
        }  
      } else if(ch == '0')
        break;
    }
    return 0; 
}

