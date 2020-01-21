/* ============================================== */
/* 程式目的: 讀取電影問卷並印出評分排序   */  
/* ============================================== */
#include <iostream>
#include <fstream> 
#include <string>
#define movieNum 10          /* 電影數目 */
using namespace std;
typedef struct rateNode { /*紀錄評分的struct*/ 
  float n;
  struct rateNode *next;
} RATE;
typedef struct node { /*紀錄電影資料的struct*/ 
  int i; //編號 
  string name;  //電影名稱 
  float aveRate;  //平均分數 
  RATE *rate;  //紀錄評分串列 
} MOVIE;
MOVIE movieList[movieNum];
/* ---------------------------------------------- */
/* 讀取問卷資料                                   */
/* ---------------------------------------------- */
void readDate(){
  ifstream my_read_file("movie_data.txt");  //開啟檔案 
  string name;
  float tmpRate;
  int count=0;
  while(my_read_file>>name) //讀取各部電影的loop 
  {
    RATE *tmpNode, *topNode=NULL;
    movieList[count].i=count;
    movieList[count].name=name;
    /*讀取評分的loop*/
    /*當讀取到下一部電影名稱時無法存入float型態，回傳false，跳出迴圈*/ 
    while(my_read_file>>tmpRate){   
        tmpNode=new RATE;
        tmpNode->n=tmpRate;
        tmpNode->next=NULL;
        if(topNode==NULL)movieList[count].rate=tmpNode;
        else topNode->next=tmpNode;
        topNode=tmpNode;
    }
    my_read_file.clear();//上一次的讀取發生錯誤，清掉錯誤後才可以繼續讀取 
    count++;
  }
  my_read_file.close();
}
/* ---------------------------------------------- */
/* 計算評分平均分數                               */
/* ---------------------------------------------- */
void average(){
  float sum;
  int count;
  RATE *tmpNode;
  for(int i=0;i<movieNum;i++){  //讀取各電影資料 
    sum=0;
    count=0;
    tmpNode=movieList[i].rate;
    while(tmpNode!=NULL){  //讀取電影資料的各個評分 
      sum+=tmpNode->n;
      count++;
      tmpNode=tmpNode->next;
    }
    movieList[i].aveRate=sum/count;
  }
}
/* ---------------------------------------------- */
/* 進行選擇排序                                   */
/* ---------------------------------------------- */
void sort()   
{
  int i,j;
  MOVIE temp;
  for( i = 0; i < movieNum-1; i++ )
    for( j = i + 1; j < movieNum; j++ )
      if( movieList[i].aveRate < movieList[j].aveRate ) //若較小則往後交換 
      {
        temp = movieList[i];
        movieList[i] = movieList[j];
        movieList[j] = temp;
      }
}
/* ---------------------------------------------- */
/* 列印結果                                       */
/* ---------------------------------------------- */
void result(){
  int n;
  cout<<"您想查看排行榜前幾名?(1~"<<movieNum<<") ";
  cin>>n;
  cout<<"=============================:"<<endl;  
  cout<<"電影排行榜 前"<<n<<"名"<<endl; 
  cout<<"=============================:"<<endl; 
  for(int i=0;i<n;i++)
    cout<<i+1<<": "<<movieList[i].name<<" "<<movieList[i].aveRate<<"分"<<endl; 
}
int main()
{
  readDate();
  average();
  sort();
  result();
  return 0;
}
