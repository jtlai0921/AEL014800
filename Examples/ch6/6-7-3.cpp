#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void game(int,int,int);
int main(void)
{
    int answer;
    int left=1,right=10000;
    srand(time(NULL));  //���Ͷü�
    answer = rand( ) % 10000;//���l�ơA���ͤ���1~10000�������ü�
    while(1)
    {
        int guess;
        cout<<"�ثe�d�� "<<left<<" ~ "<<right<<" ,�вq:";
        cin>>guess;
        if(guess > right || guess < left) exit(1);
        if(guess == answer) break;
        else {
          if(guess > answer) right = guess;
          else left = guess;
        }     
    }
    cout<<"�z�q��F ~"<<endl;
    return 0;
}
