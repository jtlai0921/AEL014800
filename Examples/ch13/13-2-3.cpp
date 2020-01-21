#include <iostream>
#include <string.h>
#include <fstream> 
using namespace std;
typedef struct word {
  string str;
  int num;
  struct word *nxt;
} WORD;
int main(void)
{  
  string s;
  ifstream myfile("13-2-3.txt");
  WORD *head,*p;
  p = new WORD;
  head = p;
  head->num=1;
  head->nxt = NULL;
  myfile>>head->str;
  while(!myfile.eof())
  {
    myfile>>s;                
    WORD *cmp=head;
    char flag=0;
    while(cmp != NULL) {
      if(!strcmp(cmp->str.c_str(),s.c_str())) {
        cmp->num++;
        flag = 1;
        break;
      } else
        cmp = cmp->nxt;  
    }
    if(!flag) {
      p->nxt =new WORD;
      p->nxt->num = 1;
      p->nxt->nxt = NULL;
      p->nxt->str=s;
      p = p->nxt; 
    }  
  }
  p = head;
  while(p != NULL) {
    cout<< p->str <<" : " << p->num <<" times\n";
    p = p->nxt;
  }
  while(head !=NULL)
  {
    WORD *tmp;
    tmp = head;
    head = head->nxt;
    delete tmp;
  }
  myfile.close();
  return 0;
}

