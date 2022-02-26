#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int *arr=new int(n);//first time
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<"Enter the new size"<<endl;
    cin>>n;
     arr= new int(n); //changing size
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    return 0;
}