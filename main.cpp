#include <iostream>
#include<iomanip>
using namespace std;
void printmatrix(double arr[60][7]);

int main() {

  double arr[60][7]={{1,100,100,100,100},{2,100,0,100,0},{82,94,73,86},{64,74,84,94},{94,84,74,64}};

  


  
}
void printmatrix(double arr[60][7]){
  
  cout<<setw(15)<<"Student"<<setw(15)<<"Grade 1"<<setw(15)<<"Grade 2"<<setw(15)<<"Grade 3"<<setw(15)<<"Grade 4"<<setw(15)<<"Final Grade"
  for(int i=0; i<60; i++)
    {
      for(int j=0;j<7;j++)
        {
          cout<<setw(10)<<arr[i][j];
        }
      cout<<endl;
    }
}