/* ============================================== */
/* �p�b�t�αM�D�s�@                           */  
/* ============================================== */
#include <iostream>
#include <fstream> 
#include <string>
#include <ctime>
#include <stdlib.h>
#define MaxNum 256         
using namespace std;

void writeToFile(int year, int month, int type, int amount){
    ofstream myfile;
    myfile.open("data.txt",ios::out | ios::app);
    if(!myfile.is_open()) { 
        cout << "�ɮ׶}�ҥ���" << endl;
        return; 
    }
    myfile<<year<<" "<<month<<" "<<type<<" "<<amount<<endl;
    myfile.close();
}

void readFile(int year, int month){
    int readYear, readMonth, readType, readAmount;
    int record[8]={0};
    ifstream myfile;
    myfile.open("data.txt");
    if(!myfile.is_open()) { 
        cout << "�ɮ׶}�ҥ���" << endl;
        return; 
    }
    while (myfile>>readYear>>readMonth>>readType>>readAmount)
    {
        if(readYear==year && (readMonth==month || month==0)){
            record[0]+=readAmount;
            record[readType]+=readAmount;
        }
    }
    cout<<"�~��: "<<year<<"     ���: "<<month<<endl;
    if(record[0]==0)cout<<"�L��������"<<endl;
    else{ 
        cout<<"����\t���B\t���"<<endl; 
        cout<<"=============================================="<<endl;
        cout<<"�`�B\t"<< record[0]<<endl;
        cout<<"��\t"<< record[1]<<"\t"<<record[1]*100/record[0]<<"%"<<endl;
        cout<<"��\t"<< record[2]<<"\t"<<record[2]*100/record[0]<<"%"<<endl;
        cout<<"��\t"<< record[3]<<"\t"<<record[3]*100/record[0]<<"%"<<endl;
        cout<<"��\t"<< record[4]<<"\t"<<record[4]*100/record[0]<<"%"<<endl;
        cout<<"�|\t"<< record[5]<<"\t"<<record[5]*100/record[0]<<"%"<<endl;
        cout<<"��\t"<< record[6]<<"\t"<<record[6]*100/record[0]<<"%"<<endl;
        cout<<"��L\t"<< record[7]<<"\t"<<record[7]*100/record[0]<<"%"<<endl;
        cout<<endl;
    }
    myfile.close();
}

int main()
{
    int temp;
    struct tm *local;
    time_t t;
    char* dt;

    while(true){
      cout<<"�n����U�������ʧ@?\n1)�p�b 2)�[�ݬ��� 3)���} ";
      cin>>temp;
      switch(temp){
          case 1:
              int type;
              int amount;
              cout<<"���� 1)����b�� 2)��ܤ��";
              cin>>temp;
              switch(temp){
                  case 1:
                      t=time(NULL);
                      dt = ctime(&t);
                      local=localtime(&t);
                      cout<<1900 + local->tm_year<<"�~ "<<1+local->tm_mon<<"�� "<<local->tm_mday<<"��"<<endl;
                      cout<<"����: 1)�� 2)�� 3)�� 4)�� 5)�| 6)�� 7)��L"; 
                      cin>>type;
                      cout<<"���B: "; 
                      cin>>amount;
                      writeToFile(1900+local->tm_year,1+local->tm_mon,type,amount); 
                      break;
                  case 2:
                      int getYear, getMonth;
                      cout<<"�~��:";
                      cin>>getYear;
                      cout<<"���:";
                      cin>>getMonth;
                      cout<<"����: 1)�� 2)�� 3)�� 4)�� 5)�| 6)�� 7)��L"; 
                      cin>>type;
                      cout<<"���B: "; 
                      cin>>amount;
                      writeToFile(getYear,getMonth,type,amount);
                      break;
              }
              break;
          case 2:
              int year;
              int month;
              cout<<"���[�ݦ~��:";
              cin>>year;
              cout<<"���[�ݤ��(��J 0 �[�ݾ�~����):";
              cin>>month;
              readFile(year,month);
              break;
          case 3:
              exit(0);
              break;
      } 
  }
  return 0;
}
