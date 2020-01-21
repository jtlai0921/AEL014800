/*計算檔案字數程式*/
#include <iostream>
#include <fstream> 
using namespace std;
int main(void)
{
	ifstream myfile("12-2-4.txt");  
  
    if(!myfile.is_open()) { 
        cout << "檔案開啟失敗" << endl;
        return 1; 
    } 
 	long begin, end;
 	char ch;
 	begin = myfile.tellg();
  	myfile.seekg (0, ios::end);
  	end = myfile.tellg();
  	cout<<"檔案大小: "<<end-begin<<" bytes"<<endl; 
  	cout<<"檔案內容:"<<endl; 
  	myfile.seekg (0, ios::beg);
  	while(!myfile.eof()){
  		myfile.get(ch);
        if(!myfile.eof())    
            cout << ch;
  	}
    myfile.close();
    return 0;
}

