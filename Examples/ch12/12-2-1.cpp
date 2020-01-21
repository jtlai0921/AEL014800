/*文字檔的IO */
#include <iostream>
#include <fstream> 
using namespace std;
int main() {
    char ch; 
                         
    ifstream fin;
    fin.open("12-2-1.txt");                       
                            
    if(!fin.is_open()) { 
        cout << "檔案開啟失敗" << endl;
        return 1; 
    } 
                                            
    while(!fin.eof()) { 
        fin.get(ch); 
        cout << ch; 
    } 
          
    fin.close();                                                        
    return 0; 
}
