/*¦r¦ê·j´Mµ{¦¡*/
#include <iostream>
#include <string.h>
#include <fstream> 
using namespace std;
int search(FILE*,char *);
int main(void)
{
  ifstream myfile("12-3-3.txt");
  int num=0;  
  string word, line;  
  cin>>word;
  if(myfile.is_open())
  {
      while(myfile.good()){
          num++;
          getline(myfile, line);
          for(int i=0;i<line.length()-word.length();i++){
              if(strncmp(line.c_str()+i, word.c_str(), word.length()) == 0){
                  cout << word << " find in line " << num << ".\n";
                  continue;
              }
          }
      }
  }
  myfile.close();
  return 0;
}
