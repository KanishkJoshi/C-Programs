#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> a(4,2);
    cout<<"Size of vector a - "<<a.size()<<endl;
    
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);
    cout<<"Size - "<<a.size()<<endl;
    cout<<"Capacity - "<<a.capacity()<<endl;
    
    cout<<"Element at 2nd Position is - "<<a.at(2)<<endl;
    cout<<"Front Element - "<<a.front()<<endl;
    cout<<"Back Element - "<<a.back()<<endl;
    a.pop_back();
    a.pop_back();
    cout<<"Size - "<<a.size()<<endl;
    for(int v:a)
    {
        cout<<v<<" ";
    }
}