#include <iostream>
using namespace std;
int f(int);               //�p��O��ƦC
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<"f("<<n<<") = "<<f(n);
    return 0;  
}
int f(int n)
{
    if(n==1 || n==2)  //���j�禡���������
        return 1;
    return f(n-1) + f(n-2);
}


