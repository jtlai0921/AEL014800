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
  int i,sum,pre,fi;
  pre = 0;
  fi = 1;
  for(i=1;i<n;i++) {
      sum = pre + fi;  //�[�X�U�@��
      pre = fi;        //�����e�@��
      fi = sum;       //��i��
   }
   return fi;
}


