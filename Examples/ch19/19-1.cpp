/* ============================================== */
/* ���y���٨t�αM�D�s�@                           */  
/* ============================================== */
#include <iostream>
#include <fstream> 
#include <string>
#include <stdlib.h>
#define MaxNum 256         
using namespace std;
typedef struct node{
    int i;  //�s�� 
    string name;  //�W�� 
    int rentBy;  //���ɷ|���s���A-1�N��L�H�~��
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
        int index;  //�����}�C�g�J��m 
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
        cout<<"�L���|��"<<endl;
        return false;
    }
    return true;
}
bool MEMBER::add(string s){
    if(index==MaxNum)return false;
    DataBase[index]=s;
    index++;
    cout<<"�s�W�|�� "<<s<<endl<<"�s��:"<<index-1<<endl;  
    return true;
}
bool MEMBER::remove(int m){
    if(!exist(m))return false;
    DataBase[m]="";
    return true;
}
void MEMBER::readFile(){
    ifstream my_read_file("MemberList.txt");  //�}���ɮ� 
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
        cout<<"�s��\t�|���W��"<<endl; 
        for(int i=0;i<index;i++){
            if(DataBase[i]=="")continue;
            cout<<i<<"\t"<<DataBase[i]<<endl;
        }
    }
    return;
}
void MEMBER::writeFile(){
    ofstream my_read_file("MemberList.txt");  //�}���ɮ� 
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
        int index;  //�����}�C�g�J��m 
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
        cout<<"�d�L����"<<endl;
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
    cout<<"�s�W "<<s<<endl<<"�s��:"<<index-1<<endl; 
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
        cout<<"���Ѥw�~��!"<<endl;
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
        cout<<"���|���å��X�ɦ���!"<<endl;
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
        cout<<"�s��\t���y�W��\t�ɥX��"<<endl; 
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
    ifstream my_read_file("BookList.txt");  //�}���ɮ� 
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
    ofstream my_read_file("BookList.txt");  //�}���ɮ� 
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
        cout<<"�s��\tDVD�W��\t�ɥX��\t����"<<endl; 
        for(int i=0;i<index;i++){
            if(DataBase[i].i==-1)continue;
            cout<<DataBase[i].i<<"\t"<<DataBase[i].name;
            if(DataBase[i].rentBy!=-1)
                cout<<"\t"<<m.DataBase[DataBase[i].rentBy];
            else cout<<"\t";
            if(level[i]==0)cout<<"�D�����"<<endl; 
            else if(level[i]==1)cout<<"�����"<<endl; 
        }
    }
    return;
}
void DVD::readFile(){
    ifstream my_read_file("DVDList.txt");  //�}���ɮ� 
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
    ofstream my_read_file("DVDList.txt");  //�}���ɮ� 
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
      cout<<"\n�n����U�������ʧ@?\n1)�޲z�|�� 2)�޲z���y 3)�޲zDVD 4)���} ";
      cin>>temp;
      switch(temp){
          case 1:
              cout<<"�|���޲z�ﶵ: 1)�s�W�|�� 2)�R���|�� 3)��ܷ|�����"; 
              cin>>temp;
              if(temp==1){
                   cout<<"�п�J�|���W��:";
                   cin>>name;
                   member.add(name);
              } 
              else if(temp==2){
                   cout<<"�п�J�|���s��:";
                   cin>>temp;
                   member.remove(temp);
              }
              else if(temp==3){
                   member.show();
              }  
              break;
          case 2:
              cout<<"���y�޲z�ﶵ: 1)�s�W���y 2)�R�����y 3)�ɮ� 4)�ٮ� 5)��ܮ��y���"; 
              cin>>temp;
              if(temp==1){
                   cout<<"�п�J���y�W��:";
                   cin>>name;
                   book.add(name,-1);
              } 
              else if(temp==2){
                   cout<<"�п�J���y�s��:";
                   cin>>temp;
                   book.remove(temp);
              }
              else if(temp==3){
                   int bookNum;
                   cout<<"�п�J���y�s��:";
                   cin>>bookNum;
                   cout<<"�п�J�ɮѷ|���s��:";
                   cin>>temp;
                   book.rent(temp, bookNum);
              } 
              else if(temp==4){
                   int bookNum;
                   cout<<"�п�J���y�s��:";
                   cin>>bookNum;
                   cout<<"�п�J�ɮѷ|���s��:";
                   cin>>temp;
                   book.back(temp, bookNum);
              } 
              else if(temp==5){
                   book.show(member);
              }  
              break;
          case 3:
              cout<<"DVD�޲z�ﶵ: 1)�s�WDVD 2)�R��DVD 3)��DVD 4)��DVD 5)���DVD���"; 
              cin>>temp;
              if(temp==1){
                  int lvl;
                   cout<<"�п�JDVD�W��:";
                   cin>>name;
                   cout<<"�п�JDVD����: 0)�D����� 1)�����";
                   cin>>lvl;
                   dvd.addDVD(name,-1,lvl);
              } 
              else if(temp==2){
                   cout<<"�п�JDVD�s��:";
                   cin>>temp;
                   dvd.remove(temp);
              }
              else if(temp==3){
                   int bookNum;
                   cout<<"�п�JDVD�s��:";
                   cin>>bookNum;
                   cout<<"�п�J�ɮѷ|���s��:";
                   cin>>temp;
                   dvd.rent(temp, bookNum);
              } 
              else if(temp==4){
                   int bookNum;
                   cout<<"�п�JDVD�s��:";
                   cin>>bookNum;
                   cout<<"�п�J�ɮѷ|���s��:";
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
