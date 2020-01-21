/*圖檔的複製*/
#include <iostream>
#include <fstream> 
using namespace std;
int main() {    
     
    ifstream origin_file("sample.jpg", ios::binary);   //來源檔案 
    ofstream copied_file("sample_copy.jpg",ios::binary | ios::trunc);  //目的檔案 
    
    if(!origin_file.is_open() || !copied_file.is_open()) { 
        cout << "檔案開啟失敗" << endl;
        return 1; 
    } 
    
    char ch;
    while(!origin_file.eof()){
        origin_file.get(ch); 
        copied_file.put(ch);
    }
    
    origin_file.close();
    copied_file.close();
    cout<<"檔案複製好了喔！";  //完成複製提示文字                  
    return 0; 
}

