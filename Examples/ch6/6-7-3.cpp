#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void game(int,int,int);
int main(void)
{
    int answer;
    int left=1,right=10000;
    srand(time(NULL));  //產生亂數
    answer = rand( ) % 10000;//取餘數，產生介於1~10000之間的亂數
    while(1)
    {
        int guess;
        cout<<"目前範圍 "<<left<<" ~ "<<right<<" ,請猜:";
        cin>>guess;
        if(guess > right || guess < left) exit(1);
        if(guess == answer) break;
        else {
          if(guess > answer) right = guess;
          else left = guess;
        }     
    }
    cout<<"您猜對了 ~"<<endl;
    return 0;
}
