/*�p���ɮצr�Ƶ{��*/
#include <iostream>
#include <fstream> 
using namespace std;
int main(void)
{
	ifstream myfile("12-2-4.txt");  
  
    if(!myfile.is_open()) { 
        cout << "�ɮ׶}�ҥ���" << endl;
        return 1; 
    } 
 	long begin, end;
 	char ch;
 	begin = myfile.tellg();
  	myfile.seekg (0, ios::end);
  	end = myfile.tellg();
  	cout<<"�ɮפj�p: "<<end-begin<<" bytes"<<endl; 
  	cout<<"�ɮפ��e:"<<endl; 
  	myfile.seekg (0, ios::beg);
  	while(!myfile.eof()){
  		myfile.get(ch);
        if(!myfile.eof())    
            cout << ch;
  	}
    myfile.close();
    return 0;
}

