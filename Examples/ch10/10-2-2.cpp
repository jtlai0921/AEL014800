/* 變數交換程式 */
#include <iostream>
#define SWAP(x,y,t) (t = x, x = y, y = t)  //定義巨集
using namespace std;
int main(void)
{
    int x=3,y=4,temp;
    SWAP(x,y,temp);  //呼叫巨集
    cout<<"x = "<<x<<" y = "<<y<<endl;
	return 0;
}
