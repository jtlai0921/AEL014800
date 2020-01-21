#include <iostream>
using namespace std;
int f(int,int [ ]);
int main(void)
{
  	int i,n,cache[50];
  	for(i=0;i<50;i++)
    	cache[i] = 0;
  	cin>>n;
  	cout<<"f("<<n<<") = "<<f(n-1,cache)<<endl;
  
  	return 0;
}
int f(int n,int cache[ ])
{
    if(cache[n]==0)
      if(n==0||n==1)
        return 1;
      else 
        cache[n] =  f(n-1,cache) + f(n-2,cache);
    return cache[n];
}

