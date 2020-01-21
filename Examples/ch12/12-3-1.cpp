/*圈圈叉叉程式*/
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
    cout<<"User "<<ch<<" 位置:";
    cin>>num;
    if(table[num/3][num%3-1] == ' '){
      if(ch =='A')table[num/3][num%3-1] = 'O';
      else table[num/3][num%3-1] = 'X';
    }
    else {
      cout<<"已經下過了!";
      i--;
      continue;
    }
    if(i>=4) //超過5子後開始判斷有無連成一線 
      for(j=0;j<3;j++) {
        if((compare(table[j][0],table[j][1],table[j][2]) ||   
           compare(table[0][j],table[1][j],table[2][j]) ||   
           compare(table[0][0],table[1][1],table[2][2]) ||   
           compare(table[2][0],table[1][1],table[0][2])) ) { 
           cout<<"User "<<ch<<" 獲勝!"<<endl;
           j = -1;
           break;
        }
      }
    if(j == -1)
      break;
    if(i==8) {
      cout<<"平手!"<<endl;
      break; 
    }           
  }
  
  return 0;
}
int compare(char a,char b,char c)
{
  if(a == b && a == c && a != ' ') //a不是空且a等於b等於則連成一線
    return 1;
  return 0;  
}

