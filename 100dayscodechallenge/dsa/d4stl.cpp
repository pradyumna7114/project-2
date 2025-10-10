#include<iostream>
#include<array>
#include<vector>
#include<deque>
using namespace std;

int main()
{
    array<int,6> a={1,2,3,4,5,6};
    cout << "at(4): " << a.at(4)
         << " empty: " << a.empty()
         << " front: " << a.front()
         << " back: " << a.back() << endl;

    vector<int> b={3,4,5,25,6};
    b.push_back(45);
    cout << "Last element: " << b.back() << endl;
    b.pop_back();
    cout << "Last element after pop: " << b.back() << endl;  // safe

    b.insert(b.begin()+3,6);
    cout << "Vector elements: ";
    for(int i:b){
        cout << i << " ";
    }
    cout << endl;
    
    deque<int> d = {4,5,7,9};
    d.erase(d.begin(),d.begin()+1);
    for(int i: d)
    {cout<<i<<endl;}
    d.erase(d.begin()+1);
     for(int i: d)
    {cout<<i;}
    return 0;
}
