#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
     
    int r,c,x,y;
    cout<<"Enter the number of rows";
    cin>>r;
    cout<<endl<<"Enter the number of columns";
    cin>>c;
    vector<vector<int>> arr(r);
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>x;
            arr[i].push_back(x);
        }
    }
    
     for (int i = 0; i<r; i++) {
         for(int j=0; j<c; j++) {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
 }