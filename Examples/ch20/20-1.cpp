/* ============================================== */
/* 計帳系統專題製作                           */  
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
        cout << "檔案開啟失敗" << endl;
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
        cout << "檔案開啟失敗" << endl;
        return; 
    }
    while (myfile>>readYear>>readMonth>>readType>>readAmount)
    {
        if(readYear==year && (readMonth==month || month==0)){
            record[0]+=readAmount;
            record[readType]+=readAmount;
        }
    }
    cout<<"年份: "<<year<<"     月份: "<<month<<endl;
    if(record[0]==0)cout<<"無此月份資料"<<endl;
    else{ 
        cout<<"種類\t金額\t比例"<<endl; 
        cout<<"=============================================="<<endl;
        cout<<"總額\t"<< record[0]<<endl;
        cout<<"食\t"<< record[1]<<"\t"<<record[1]*100/record[0]<<"%"<<endl;
        cout<<"衣\t"<< record[2]<<"\t"<<record[2]*100/record[0]<<"%"<<endl;
        cout<<"住\t"<< record[3]<<"\t"<<record[3]*100/record[0]<<"%"<<endl;
        cout<<"行\t"<< record[4]<<"\t"<<record[4]*100/record[0]<<"%"<<endl;
        cout<<"育\t"<< record[5]<<"\t"<<record[5]*100/record[0]<<"%"<<endl;
        cout<<"樂\t"<< record[6]<<"\t"<<record[6]*100/record[0]<<"%"<<endl;
        cout<<"其他\t"<< record[7]<<"\t"<<record[7]*100/record[0]<<"%"<<endl;
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
      cout<<"要執行下面哪項動作?\n1)計帳 2)觀看紀錄 3)離開 ";
      cin>>temp;
      switch(temp){
          case 1:
              int type;
              int amount;
              cout<<"紀錄 1)今日帳款 2)選擇日期";
              cin>>temp;
              switch(temp){
                  case 1:
                      t=time(NULL);
                      dt = ctime(&t);
                      local=localtime(&t);
                      cout<<1900 + local->tm_year<<"年 "<<1+local->tm_mon<<"月 "<<local->tm_mday<<"日"<<endl;
                      cout<<"分類: 1)食 2)衣 3)住 4)行 5)育 6)樂 7)其他"; 
                      cin>>type;
                      cout<<"金額: "; 
                      cin>>amount;
                      writeToFile(1900+local->tm_year,1+local->tm_mon,type,amount); 
                      break;
                  case 2:
                      int getYear, getMonth;
                      cout<<"年份:";
                      cin>>getYear;
                      cout<<"月份:";
                      cin>>getMonth;
                      cout<<"分類: 1)食 2)衣 3)住 4)行 5)育 6)樂 7)其他"; 
                      cin>>type;
                      cout<<"金額: "; 
                      cin>>amount;
                      writeToFile(getYear,getMonth,type,amount);
                      break;
              }
              break;
          case 2:
              int year;
              int month;
              cout<<"欲觀看年份:";
              cin>>year;
              cout<<"欲觀看月份(輸入 0 觀看整年紀錄):";
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
