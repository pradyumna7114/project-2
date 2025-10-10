#include <bits/stdc++.h>
using namespace std;
int main() {
   
    list<int> L = {3,4,5};       // NO random access
    auto it = L.begin(); advance(it, 1); // to reach index 1 you must iterate
    cout << "list second element via advance() = " << *it << '\n';

    set<int> s = {5,2,9,2};      // ordered unique
    cout << "set elements in order:";
    for (int x : s) cout << x << ' '; // prints 2 5 9
    cout << '\n';

    priority_queue<int> pq; pq.push(5); pq.push(2); pq.push(9);
    cout << "priority_queue top (max): " << pq.top() << '\n'; // 9

    // min-heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5); minpq.push(2); minpq.push(9);
    cout << "min-heap top: " << minpq.top() << '\n'; // 2

    return 0;
}
