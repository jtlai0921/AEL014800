/* �p��G���}�C�ۭ� */
#include <iostream>
using namespace std;
int main(void)
{
    int A[3][3],B[3][3],AB[3][3],i,j,sum=0;    //�N����ܼ�ans����ȳ]��0
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          cout<<"��J�x�}A��"<<i+1<<"��"<<j+1<<"�C�������G";
          cin>>A[i][j];
      }
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          cout<<"��J�x�}B��"<<i+1<<"��"<<j+1<<"�C�������G";
          cin>>B[i][j];
      }

    for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
        sum=0;
        for(int r=0;r<3;r++) {           
          sum+=A[i][r]*B[r][j];  
        }
        AB[i][j]=sum;
        cout<<AB[i][j]<<" ";
      }
      cout<<endl;
    } 
    return 0;
}

