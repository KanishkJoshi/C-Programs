
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    vector<int> arr;
    cout<<"Enter Number of Array ";
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        arr.push_back(b);
    }
    for(int c:arr)
    {
        cout<<c<<endl;
    }
    return 0;
}
