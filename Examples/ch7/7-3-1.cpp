#include <iostream>
using namespace std;
int main(void)
{
    int line[3][3],i,j,ans=0;    //�N����ܼ�ans����ȳ]��0
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          cout<<"��J��C����"<<i+1<<"��"<<j+1<<"�C�������G";
          cin>>line[i][j];
      }
/*�@��kans = line[0][0]*line[1][1]*line[2][2] + line[0][1]*line[1][2]*line[2][0] +
         line[0][2]*line[1][0]*line[2][1] - line[0][2]*line[1][1]*line[2][0] - 
         line[0][0]*line[1][2]*line[2][1] - line[0][1]*line[1][0]*line[2][2]; */ 
    for(i=0;i<3;i++) {
      ans = ans + line[0][i]*line[1][(i+1)%3]*line[2][(i+2)%3]
- line[0][(i+2)%3]*line[1][(i+1)%3]*line[2][i];  
    }
    cout<<"Ans = "<<ans<<endl;
    return 0;
}
