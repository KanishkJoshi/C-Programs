
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    string b;
    vector<string> arr;
    cout<<"Enter Number of Students ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        arr.push_back(b);
    }
    for(string c:arr)
    {
        cout<<c<<endl;
    }
    cout<<"Student at 2nd Position is - "<<arr.at(2);
    return 0;
}
