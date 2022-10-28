#include <iostream>
#include<iomanip>
using namespace std;
void printmatrix(double arr[60][7]);

int main() {
  
}
void printmatrix(double arr[60][7]){
  
  cout<<setw(10)<<"Student"<<setw(10)<<"Grade 1"<<setw(10)<<"Grade 2"<<setw(10)<<"Grade 3"<<setw(10)<<"Grade 4";
  for(int i=0; i<60; i++)
    {
      for(int j=0;j<7;j++)
        {
          cout<<setw(10)<<arr[i][j];
        }
      cout<<endl;
    }
}