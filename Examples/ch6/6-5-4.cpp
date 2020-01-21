#include <iostream>
using namespace std;
int f(int);               //計算費氏數列
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
  int i,sum,pre,fi;
  pre = 0;
  fi = 1;
  for(i=1;i<n;i++) {
      sum = pre + fi;  //加出下一項
      pre = fi;        //紀錄前一項
      fi = sum;       //第i項
   }
   return fi;
}


