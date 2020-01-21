/*範圍判斷巨集程式 */
#include <iostream>
#include <fstream>
#define RANGE(a,b,x) (x>a && x<b) ? 1 : 0 //運用三元運算子
using namespace std;
int main(void)
{
    if(RANGE(0,10,5))    //判斷5是否在0~10之間
      puts("5 在 0~10 之間");
    return 0;
}
