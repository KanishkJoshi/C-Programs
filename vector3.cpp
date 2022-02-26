
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int a;
    vector<string> arr;
    cout<<"Enter Number of Students ";
    cin>>a;
    string b;
    //getline(cin,b);
    cin.ignore();
    for(int i=0;i<a;i++)
    {
        getline(cin,b);
        arr.push_back(b);
    }
    for(string c:arr)
    {
        cout<<c<<endl;
    }
    cout<<"Student at 2nd Position is - "<<arr.at(2);
    return 0;
}
