/* ���u���d���{�� */
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
      cout<<"1) ���d 2)�d�� 0)���} :"; 
      cin>>ch;
      if(ch == '1') {
        cout<<"�п�J�z�b���q��id�G";
        cin>>s[now].id;
        cout<<"�z���Ѩ�Z�ɶ��O�G";
        cin>>s[now].arrive;
        cout<<"      ���}�ɶ����G";
        cin>>s[now].leave;
        cout<<"���¡A�U�@��"<<endl;
        now++;
      } else if(ch == '2') {
        int i;
        if(now != 0) {     
          cout<<"�Q�d�߽֪����?";
          cin>>id;
          for(i=0;i<now;i++)
            if(id == s[i].id) {
               cout<<"�W����F�ɶ���: "<<s[i].arrive<<endl;
               cout<<"�W�����}�ɶ���: "<<s[i].leave<<endl;
               break;   
            }
          if(i>=now)  
            cout<<"�L�� id"<<endl;    
        } else {
          cout<<"�|�L���"<<endl;     
        }  
      } else if(ch == '0')
        break;
    }
    return 0; 
}

