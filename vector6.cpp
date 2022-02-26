#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
     
    int r,c,x,y;
    cout<<"Enter the number of rows";
    cin>>r;
    cout<<endl<<"Enter the number of columns";
    cin>>c;
    vector<vector<int>> arr(r,vector <int> (c));
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    
     for (auto r:arr) {
         for(auto c:r) {
             cout<<c<<" ";
         }
         cout<<endl;
     }
     
 }