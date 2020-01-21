/* ============================================== */
/* �{���ت�: Ū���q�v�ݨ��æL�X�����Ƨ�   */  
/* ============================================== */
#include <iostream>
#include <fstream> 
#include <string>
#define movieNum 10          /* �q�v�ƥ� */
using namespace std;
typedef struct rateNode { /*����������struct*/ 
  float n;
  struct rateNode *next;
} RATE;
typedef struct node { /*�����q�v��ƪ�struct*/ 
  int i; //�s�� 
  string name;  //�q�v�W�� 
  float aveRate;  //�������� 
  RATE *rate;  //����������C 
} MOVIE;
MOVIE movieList[movieNum];
/* ---------------------------------------------- */
/* Ū���ݨ����                                   */
/* ---------------------------------------------- */
void readDate(){
  ifstream my_read_file("movie_data.txt");  //�}���ɮ� 
  string name;
  float tmpRate;
  int count=0;
  while(my_read_file>>name) //Ū���U���q�v��loop 
  {
    RATE *tmpNode, *topNode=NULL;
    movieList[count].i=count;
    movieList[count].name=name;
    /*Ū��������loop*/
    /*��Ū����U�@���q�v�W�ٮɵL�k�s�Jfloat���A�A�^��false�A���X�j��*/ 
    while(my_read_file>>tmpRate){   
        tmpNode=new RATE;
        tmpNode->n=tmpRate;
        tmpNode->next=NULL;
        if(topNode==NULL)movieList[count].rate=tmpNode;
        else topNode->next=tmpNode;
        topNode=tmpNode;
    }
    my_read_file.clear();//�W�@����Ū���o�Ϳ��~�A�M�����~��~�i�H�~��Ū�� 
    count++;
  }
  my_read_file.close();
}
/* ---------------------------------------------- */
/* �p�������������                               */
/* ---------------------------------------------- */
void average(){
  float sum;
  int count;
  RATE *tmpNode;
  for(int i=0;i<movieNum;i++){  //Ū���U�q�v��� 
    sum=0;
    count=0;
    tmpNode=movieList[i].rate;
    while(tmpNode!=NULL){  //Ū���q�v��ƪ��U�ӵ��� 
      sum+=tmpNode->n;
      count++;
      tmpNode=tmpNode->next;
    }
    movieList[i].aveRate=sum/count;
  }
}
/* ---------------------------------------------- */
/* �i���ܱƧ�                                   */
/* ---------------------------------------------- */
void sort()   
{
  int i,j;
  MOVIE temp;
  for( i = 0; i < movieNum-1; i++ )
    for( j = i + 1; j < movieNum; j++ )
      if( movieList[i].aveRate < movieList[j].aveRate ) //�Y���p�h����洫 
      {
        temp = movieList[i];
        movieList[i] = movieList[j];
        movieList[j] = temp;
      }
}
/* ---------------------------------------------- */
/* �C�L���G                                       */
/* ---------------------------------------------- */
void result(){
  int n;
  cout<<"�z�Q�d�ݱƦ�]�e�X�W?(1~"<<movieNum<<") ";
  cin>>n;
  cout<<"=============================:"<<endl;  
  cout<<"�q�v�Ʀ�] �e"<<n<<"�W"<<endl; 
  cout<<"=============================:"<<endl; 
  for(int i=0;i<n;i++)
    cout<<i+1<<": "<<movieList[i].name<<" "<<movieList[i].aveRate<<"��"<<endl; 
}
int main()
{
  readDate();
  average();
  sort();
  result();
  return 0;
}
