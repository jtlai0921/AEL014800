/* 計算二維陣列相乘 */
#include <iostream>
using namespace std;
int main(void)
{
    int A[3][3],B[3][3],AB[3][3],i,j,sum=0;    //將整數變數ans的初值設為0
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          cout<<"輸入矩陣A第"<<i+1<<"行"<<j+1<<"列的元素：";
          cin>>A[i][j];
      }
    for(i=0;i<3;i++)
      for(j=0;j<3;j++) {
          cout<<"輸入矩陣B第"<<i+1<<"行"<<j+1<<"列的元素：";
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

