#include <iostream>
#include<iomanip>
using namespace std;

void printmatrix(double arr[60][7]);
void finaldropped(double arr[60][7]);

int main() {

  double arr[60][7]={{1,100,100,100,100},{2,100,0,100,0},{3,82,94,73,86},{4,64,74,84,94},{5,94,84,74,64}};

  for(int j=0;j<5;j++)
    arr[j][5]=((arr[j][1]*0.2)+(arr[j][2]*0.3)+(arr[j][3]*0.3)+(arr[j][4]*0.2));

  finaldropped(arr);
  printmatrix(arr);
}
void printmatrix(double arr[60][7]){
  
  cout<<setw(12)<<"Student"<<setw(12)<<"Grade 1"<<setw(12)<<"Grade 2"<<setw(12)<<"Grade 3"<<setw(12)<<"Grade 4"<<setw(12)<<"Grade Final"<<setw(12)<<"Grade Avg"<<endl;
  for(int i=0; i<5; i++)
    {
      for(int j=0;j<7;j++)
        {
          cout<<setw(12)<<arr[i][j];
        }
      cout<<endl;
    }
}
void finaldropped(double arr[60][7]){
int index=1;
for(int i=0;i<5;i++){
  int min=arr[i][1];
  for(int j=1;j<5;j++){
    if(arr[i][j]<min){
      min=arr[i][j];
      index=j;
    } 
    arr[i][6]=(arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4]-arr[i][index])/3;
  }
}

}