/*���e�e�{��*/
#include <iostream>
#include <fstream> 
using namespace std;
int compare(char,char,char);
int main(void)
{
  int i,j,num;
  char table[3][3],ch;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      table[i][j] = ' ';
  for(i=0;;i++) {
    for(j=0;j<3;j++) {
      cout<<"+-+-+-+"<<endl;
      cout<<"|"<<table[j][0]<<"|"<<table[j][1]<<"|"<<table[j][2]<<"|"<<endl;
    }
    cout<<"+-+-+-+"<<endl;
    if(i%2) ch ='B';
    else ch ='A';
    cout<<"User "<<ch<<" ��m:";
    cin>>num;
    if(table[num/3][num%3-1] == ' '){
      if(ch =='A')table[num/3][num%3-1] = 'O';
      else table[num/3][num%3-1] = 'X';
    }
    else {
      cout<<"�w�g�U�L�F!";
      i--;
      continue;
    }
    if(i>=4) //�W�L5�l��}�l�P�_���L�s���@�u 
      for(j=0;j<3;j++) {
        if((compare(table[j][0],table[j][1],table[j][2]) ||   
           compare(table[0][j],table[1][j],table[2][j]) ||   
           compare(table[0][0],table[1][1],table[2][2]) ||   
           compare(table[2][0],table[1][1],table[0][2])) ) { 
           cout<<"User "<<ch<<" ���!"<<endl;
           j = -1;
           break;
        }
      }
    if(j == -1)
      break;
    if(i==8) {
      cout<<"����!"<<endl;
      break; 
    }           
  }
  
  return 0;
}
int compare(char a,char b,char c)
{
  if(a == b && a == c && a != ' ') //a���O�ťBa����b����h�s���@�u
    return 1;
  return 0;  
}

