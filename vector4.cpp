#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
     
     int a;
     vector<vector<int>> arr{{3,2,1} , {6,5,4}};
     
     for (int i = 0; i<2; i++) {
         for(int j=0; j<3; j++) {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     
 }