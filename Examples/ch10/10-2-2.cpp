/* �ܼƥ洫�{�� */
#include <iostream>
#define SWAP(x,y,t) (t = x, x = y, y = t)  //�w�q����
using namespace std;
int main(void)
{
    int x=3,y=4,temp;
    SWAP(x,y,temp);  //�I�s����
    cout<<"x = "<<x<<" y = "<<y<<endl;
	return 0;
}
