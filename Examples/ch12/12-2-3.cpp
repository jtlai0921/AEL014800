/*���ɪ��ƻs*/
#include <iostream>
#include <fstream> 
using namespace std;
int main() {    
     
    ifstream origin_file("sample.jpg", ios::binary);   //�ӷ��ɮ� 
    ofstream copied_file("sample_copy.jpg",ios::binary | ios::trunc);  //�ت��ɮ� 
    
    if(!origin_file.is_open() || !copied_file.is_open()) { 
        cout << "�ɮ׶}�ҥ���" << endl;
        return 1; 
    } 
    
    char ch;
    while(!origin_file.eof()){
        origin_file.get(ch); 
        copied_file.put(ch);
    }
    
    origin_file.close();
    copied_file.close();
    cout<<"�ɮ׽ƻs�n�F��I";  //�����ƻs���ܤ�r                  
    return 0; 
}

