/*�u�`�W��½Ķ�{��*/
#include <iostream>
#include <cstring>
#define SPRING "�K��"
#define SUMMER "�L��"
#define AUTUMN "���"
#define WINTER "�V��"
using namespace std;
int main(void)
{
  char str[80];
  cin>>str;  
#ifdef SPRING
  if(!strcmp(str,"spring"))    
    cout<<"spring is "<<SPRING<<endl;
#endif
#ifdef SUMMER
  if(!strcmp(str,"summer"))    
    cout<<"summer is "<<SUMMER<<endl;
#endif    
#ifdef AUTUMN
  if(!strcmp(str,"autumn"))    
    cout<<"autumn is "<<AUTUMN<<endl;
#endif    
#ifdef WINTER
  if(!strcmp(str,"winter"))    
    cout<<"winter is "<<WINTER<<endl;
#endif        
  return 0;
}
