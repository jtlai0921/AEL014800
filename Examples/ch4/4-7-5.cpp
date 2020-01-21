/*字元判斷程式 */
//4-7-5.cpp
#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
      cout<<"輸入字元為小寫字母\n";
    if(ch >= 'A' && ch <= 'Z')
      cout<<"輸入字元為大寫字母\n";
    if(ch >= '0' && ch <='9')
      cout<<"輸入字元為阿拉伯數字\n";

    return 0;
}
