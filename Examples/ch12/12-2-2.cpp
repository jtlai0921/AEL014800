/*檔案的串流*/
#include <iostream>
#include <fstream> 
using namespace std;
int main() {    
          
    ofstream my_write_file("12-2-2.txt");
                            
    if(!my_write_file.is_open()) { 
        cout << "檔案開啟失敗" << endl;
        return 1; 
    } 
    
    my_write_file << "這是第一行" << endl; 
    my_write_file << "這是第二行" << endl; 
       
    ifstream my_read_file("12-3-2.txt");
    
    if(!my_read_file.is_open()) { 
        cout << "檔案開啟失敗" << endl;
        return 1; 
    } 
    
    string input_string;
    while(!my_read_file.eof()){
        input_string = "";
        my_read_file >> input_string;
        if(!my_read_file.eof())
            cout << input_string <<endl;
    }
    return 0; 
}
