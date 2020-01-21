/* ============================================== */
/* 書籍借還系統專題製作                           */  
/* ============================================== */
#include <iostream>
#include <fstream> 
#include <string>
#include <stdlib.h>
#define MaxNum 256         
using namespace std;
typedef struct node{
    int i;  //編號 
    string name;  //名稱 
    int rentBy;  //租借會員編號，-1代表無人外借
}NODE;
class MEMBER {
    public:
        MEMBER();
        bool exist(int);
        bool add(string);
        bool remove(int);
        void show();
        void readFile();
        void writeFile();
        friend class BOOK;
        friend class DVD;
	private:
        int index;  //紀錄陣列寫入位置 
        string DataBase[MaxNum];
};
MEMBER::MEMBER(){
    index=0; 
    for(int i=0;i<MaxNum;i++){
        DataBase[i]="";
    }
    readFile();
}
bool MEMBER::exist(int m){
    if(m>=index || DataBase[m]==""){
        cout<<"無此會員"<<endl;
        return false;
    }
    return true;
}
bool MEMBER::add(string s){
    if(index==MaxNum)return false;
    DataBase[index]=s;
    index++;
    cout<<"新增會員 "<<s<<endl<<"編號:"<<index-1<<endl;  
    return true;
}
bool MEMBER::remove(int m){
    if(!exist(m))return false;
    DataBase[m]="";
    return true;
}
void MEMBER::readFile(){
    ifstream my_read_file("MemberList.txt");  //開啟檔案 
    if(!my_read_file.is_open())return;
    string name;
    while(!my_read_file.eof()){
        my_read_file>>name;
        if(!my_read_file.eof())
        add(name);
    } 
    my_read_file.close();
    return;
}
void MEMBER::show(){
    if(index == 0)cout<<"EMPTY!"<<endl;
    else{
        cout<<"編號\t會員名稱"<<endl; 
        for(int i=0;i<index;i++){
            if(DataBase[i]=="")continue;
            cout<<i<<"\t"<<DataBase[i]<<endl;
        }
    }
    return;
}
void MEMBER::writeFile(){
    ofstream my_read_file("MemberList.txt");  //開啟檔案 
    int count=0;
    while(count<index){
        my_read_file<<DataBase[count];
        my_read_file<<endl;
        count++;
    } 
    my_read_file.close();
    return;
}
class BOOK {
    public:
        BOOK();
        bool exist(int);
        bool add(string,int);
        bool remove(int);
        bool rent(int,int);
        bool back(int,int);
        void show(MEMBER);
        void readFile();
        void writeFile();
	protected:
        int index;  //紀錄陣列寫入位置 
        NODE DataBase[MaxNum];
};
class DVD: public BOOK {
    public:
        DVD();
        bool addDVD(string,int,int);
        void showDVD(MEMBER);
        void readFile();
        void writeFile();
    private:
        int level[MaxNum];
};
BOOK::BOOK(){
    index=0; 
    for(int i=0;i<MaxNum;i++){
        DataBase[i].i=-1; 
        DataBase[i].rentBy=-1;
    }
    readFile();
}
bool BOOK::exist(int book){
    if(book>=index || DataBase[book].i==-1){
        cout<<"查無此書"<<endl;
        return false;
    }
    return true;
}
bool BOOK::add(string s, int r){
    if(index==MaxNum)return false;
    DataBase[index].i=index;
    DataBase[index].name=s;
    DataBase[index].rentBy=r;
    index++;
    cout<<"新增 "<<s<<endl<<"編號:"<<index-1<<endl; 
    return true;
}
bool BOOK::remove(int book){
    if(!exist(book))return false;
    DataBase[book].i=-1;
    return true;
}
bool BOOK::rent(int man, int book){
    if(!exist(book))return false;
    if(DataBase[book].rentBy!=-1){
        cout<<"此書已外借!"<<endl;
        return false;
    }
    else{
        DataBase[book].rentBy=man;
        return true;
    }
}
bool BOOK::back(int man, int book){
    if(!exist(book))return false;
    if(DataBase[book].rentBy!=man){
        cout<<"此會員並未出借此書!"<<endl;
        return false;
    }
    else{
        DataBase[book].rentBy=-1;
        return true;
    }
}
void BOOK::show(MEMBER m){
    if(index == 0)cout<<"EMPTY!"<<endl;
    else{
        cout<<"編號\t書籍名稱\t借出者"<<endl; 
        for(int i=0;i<index;i++){
            if(DataBase[i].i==-1)continue;
            cout<<DataBase[i].i<<"\t"<<DataBase[i].name;
            if(DataBase[i].rentBy!=-1)
                cout<<"\t"<<m.DataBase[DataBase[i].rentBy];
            cout<<endl;
        }
    }
    return;
}
void BOOK::readFile(){
    ifstream my_read_file("BookList.txt");  //開啟檔案 
    if(!my_read_file.is_open())return;
    string name;
    int rentBy;
    while(!my_read_file.eof()){
        my_read_file>>name;
        if(!my_read_file.eof()){
            my_read_file>>rentBy;
            add(name,rentBy);
        }
    } 
    my_read_file.close();
    return;
}
void BOOK::writeFile(){
    ofstream my_read_file("BookList.txt");  //開啟檔案 
    string name;
    int count=0;
    while(count<index){
        if(DataBase[count].i==-1)continue;
        my_read_file<<DataBase[count].name<<" ";
        my_read_file<<DataBase[count].rentBy<<endl;
        count++;
    } 
    my_read_file.close();
    return;
}
DVD::DVD(){
    index=0; 
    for(int i=0;i<MaxNum;i++){
        DataBase[i].i=-1; 
        DataBase[i].rentBy=-1;
        level[i]=0;
    }
    readFile();
}
bool DVD::addDVD(string s, int r, int l){
    if(add(s,r)) level[index-1]=l;
    return true;
}
void DVD::showDVD(MEMBER m){
    if(index == 0)cout<<"EMPTY!"<<endl;
    else{
        cout<<"編號\tDVD名稱\t借出者\t分級"<<endl; 
        for(int i=0;i<index;i++){
            if(DataBase[i].i==-1)continue;
            cout<<DataBase[i].i<<"\t"<<DataBase[i].name;
            if(DataBase[i].rentBy!=-1)
                cout<<"\t"<<m.DataBase[DataBase[i].rentBy];
            else cout<<"\t";
            if(level[i]==0)cout<<"非限制級"<<endl; 
            else if(level[i]==1)cout<<"限制級"<<endl; 
        }
    }
    return;
}
void DVD::readFile(){
    ifstream my_read_file("DVDList.txt");  //開啟檔案 
    if(!my_read_file.is_open())return;
    string name;
    int rentBy, lvl;
    while(!my_read_file.eof()){
        my_read_file>>name;
        if(!my_read_file.eof()){
            my_read_file>>rentBy;
            my_read_file>>lvl;
            addDVD(name,rentBy,lvl);
        }
    } 
    my_read_file.close();
    return;
}
void DVD::writeFile(){
    ofstream my_read_file("DVDList.txt");  //開啟檔案 
    string name;
    int count=0;
    while(count<index){
        if(DataBase[count].i==-1)continue;
        my_read_file<<DataBase[count].name<<" ";
        my_read_file<<DataBase[count].rentBy<<" ";
        my_read_file<<level[count]<<endl;
        count++;
    } 
    my_read_file.close();
    return;
}

int main()
{
  int temp;  
  string name;
  MEMBER member;
  BOOK book;
  DVD dvd;
  while(true){
      cout<<"\n要執行下面哪項動作?\n1)管理會員 2)管理書籍 3)管理DVD 4)離開 ";
      cin>>temp;
      switch(temp){
          case 1:
              cout<<"會員管理選項: 1)新增會員 2)刪除會員 3)顯示會員資料"; 
              cin>>temp;
              if(temp==1){
                   cout<<"請輸入會員名稱:";
                   cin>>name;
                   member.add(name);
              } 
              else if(temp==2){
                   cout<<"請輸入會員編號:";
                   cin>>temp;
                   member.remove(temp);
              }
              else if(temp==3){
                   member.show();
              }  
              break;
          case 2:
              cout<<"書籍管理選項: 1)新增書籍 2)刪除書籍 3)借書 4)還書 5)顯示書籍資料"; 
              cin>>temp;
              if(temp==1){
                   cout<<"請輸入書籍名稱:";
                   cin>>name;
                   book.add(name,-1);
              } 
              else if(temp==2){
                   cout<<"請輸入書籍編號:";
                   cin>>temp;
                   book.remove(temp);
              }
              else if(temp==3){
                   int bookNum;
                   cout<<"請輸入書籍編號:";
                   cin>>bookNum;
                   cout<<"請輸入借書會員編號:";
                   cin>>temp;
                   book.rent(temp, bookNum);
              } 
              else if(temp==4){
                   int bookNum;
                   cout<<"請輸入書籍編號:";
                   cin>>bookNum;
                   cout<<"請輸入借書會員編號:";
                   cin>>temp;
                   book.back(temp, bookNum);
              } 
              else if(temp==5){
                   book.show(member);
              }  
              break;
          case 3:
              cout<<"DVD管理選項: 1)新增DVD 2)刪除DVD 3)借DVD 4)還DVD 5)顯示DVD資料"; 
              cin>>temp;
              if(temp==1){
                  int lvl;
                   cout<<"請輸入DVD名稱:";
                   cin>>name;
                   cout<<"請輸入DVD分級: 0)非限制級 1)限制級";
                   cin>>lvl;
                   dvd.addDVD(name,-1,lvl);
              } 
              else if(temp==2){
                   cout<<"請輸入DVD編號:";
                   cin>>temp;
                   dvd.remove(temp);
              }
              else if(temp==3){
                   int bookNum;
                   cout<<"請輸入DVD編號:";
                   cin>>bookNum;
                   cout<<"請輸入借書會員編號:";
                   cin>>temp;
                   dvd.rent(temp, bookNum);
              } 
              else if(temp==4){
                   int bookNum;
                   cout<<"請輸入DVD編號:";
                   cin>>bookNum;
                   cout<<"請輸入借書會員編號:";
                   cin>>temp;
                   dvd.back(temp, bookNum);
              } 
              else if(temp==5){
                   dvd.showDVD(member);
              }  
              break;
          case 4:
              member.writeFile();
              book.writeFile();
              dvd.writeFile();
              exit(0);
              break;
      } 
  }
  return 0;
}
