//5-6-10.cpp
#include <iostream>
using namespace std;
int main()
{	
    int sum;
	for(int i=1;i<=10000;i++){
        sum=0;
        for(int j=1;j<=i/2;j++)
        {
            if(!(i%j))
                sum+=j;
        }
        if(sum==i)cout<<i<<"是完全數"<<endl;
    }

    return 0;
}
