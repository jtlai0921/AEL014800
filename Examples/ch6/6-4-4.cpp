/* const的範例 */
#include <iostream>
using namespace std;
int main(void)
{
    const int x = 1;       //加上const修飾字
    x++;            //錯誤的使用，變數x不應被修改
}
