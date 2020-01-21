/*檔案選擇性輸出程式*/
#include <iostream>
#include <string.h>
#include <fstream> 
using namespace std;
int search(FILE*,char *);
int main(void)
{
//This will not print !
  ifstream myfile("12-3-4.cpp");
  int num=0;  
  string line; 
  if(myfile.is_open())
  {
      while(myfile.good()){
          num++;
          getline(myfile, line);
          if(strncmp(line.c_str(), "//", 2) != 0){
              cout << line << "\n";
          }
      }
  }
  myfile.close();
  return 0;
}
