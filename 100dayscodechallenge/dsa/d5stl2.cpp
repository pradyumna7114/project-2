#include<bits/stdc++.h>
using namespace std;
int main(){
    //deque (access random and effecient push/pop at both ends)
    deque<int> d= {10,20};
    d.push_front(5);
    d.push_back(30);
    cout<<"deque front"<<d.front()<<"" << d.back()<<" "<<endl;
     
    //list (no random access)
    list<int> L = {100,200};
    L.push_back(300);
    for(auto x : L ) cout<<' ';//auto is used not int

    //set(ordered,unique)
    set<int >s;
    s.insert(3); s.insert(4);
    cout<< " set contain 2 ?"<<(s.count(2)? "yes" : "no");

    // MAP (ordered key->value)
    map<string,int> m;
    m["apple"] = 3;
    if (m.find("apple") != m.end()) cout << "apple->" << m["apple"] ;

     // STACK and QUEUE (adapters)
    stack<int> st; st.push(10); st.push(20); cout << "stack top=" << st.top() << '\n';
    queue<int> q; q.push(1); q.push(2); cout << "queue front=" << q.front() << '\n';

    // PRIORITY_QUEUE (max-heap by default)
    priority_queue<int> pq; pq.push(7); pq.push(2); pq.push(9);
    cout << "pq top(max)=" << pq.top() << '\n';

    return 0;

}