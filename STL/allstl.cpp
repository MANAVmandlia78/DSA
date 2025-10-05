#include <bits/stdc++.h>
using namespace std;

int main() {
    // -------------------- VECTOR --------------------
    cout << "\n=== VECTOR ===\n";
    vector<int> v = {10, 20, 30, 40, 50};
    v.push_back(60);
    v.emplace_back(70);
    v.insert(v.begin() + 2, 25);
    v.erase(v.begin() + 3);
    cout << "Vector elements: ";
    for (auto it : v) cout << it << " ";
    cout << "\nFront: " << v.front() << ", Back: " << v.back() << ", Size: " << v.size() << "\n";

    // -------------------- LIST --------------------
    cout << "\n=== LIST ===\n";
    list<int> l = {10, 20, 30};
    l.push_back(40);
    l.push_front(5);
    l.emplace_back(45);
    l.remove(20);
    cout << "List elements: ";
    for (auto it : l) cout << it << " ";
    cout << "\nFront: " << l.front() << ", Back: " << l.back() << "\n";

    // -------------------- DEQUE --------------------
    cout << "\n=== DEQUE ===\n";
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(40);
    dq.pop_front();
    dq.pop_back();
    dq.insert(dq.begin() + 1, 15);
    cout << "Deque elements: ";
    for (auto it : dq) cout << it << " ";
    cout << "\nFront: " << dq.front() << ", Back: " << dq.back() << "\n";

    // -------------------- STACK --------------------
    cout << "\n=== STACK ===\n";
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top: " << st.top() << "\n";
    st.pop();
    cout << "After pop, top: " << st.top() << "\n";

    // -------------------- QUEUE --------------------
    cout << "\n=== QUEUE ===\n";
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front: " << q.front() << ", Back: " << q.back() << "\n";
    q.pop();
    cout << "After pop, Front: " << q.front() << "\n";

    // -------------------- PRIORITY QUEUE --------------------
    cout << "\n=== PRIORITY QUEUE (MAX HEAP) ===\n";
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Top element: " << pq.top() << "\n";
    pq.pop();
    cout << "After pop, top: " << pq.top() << "\n";

    cout << "\n=== PRIORITY QUEUE (MIN HEAP) ===\n";
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10);
    minpq.push(30);
    minpq.push(20);
    cout << "Top element: " << minpq.top() << "\n";

    // -------------------- SET --------------------
    cout << "\n=== SET ===\n";
    set<int> s = {10, 20, 30, 10, 20};
    s.insert(40);
    s.erase(20);
    cout << "Set elements: ";
    for (auto it : s) cout << it << " ";
    cout << "\nIs 30 present? " << (s.count(30) ? "Yes" : "No") << "\n";

    // -------------------- UNORDERED SET --------------------
    cout << "\n=== UNORDERED SET ===\n";
    unordered_set<int> us = {10, 20, 30, 40, 50};
    us.insert(60);
    us.erase(20);
    cout << "Unordered set elements: ";
    for (auto it : us) cout << it << " ";
    cout << "\n";

    // -------------------- MULTISET --------------------
    cout << "\n=== MULTISET ===\n";
    multiset<int> ms = {10, 20, 20, 30};
    ms.insert(20);
    ms.erase(ms.find(20)); // Erases only one 20
    cout << "Multiset elements: ";
    for (auto it : ms) cout << it << " ";
    cout << "\n";

    // -------------------- MAP --------------------
    cout << "\n=== MAP ===\n";
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp.insert({3, "Three"});
    mp[2] = "TWO"; // Updates existing key
    cout << "Map elements:\n";
    for (auto it : mp) cout << it.first << " -> " << it.second << "\n";
    cout << "Find key 3: " << (mp.count(3) ? "Yes" : "No") << "\n";

    // -------------------- UNORDERED MAP --------------------
    cout << "\n=== UNORDERED MAP ===\n";
    unordered_map<int, string> ump;
    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[3] = "Cherry";
    ump.erase(2);
    cout << "Unordered map elements:\n";
    for (auto it : ump) cout << it.first << " -> " << it.second << "\n";

    // -------------------- MULTIMAP --------------------
    cout << "\n=== MULTIMAP ===\n";
    multimap<int, string> mmp;
    mmp.insert({1, "A"});
    mmp.insert({1, "B"});
    mmp.insert({2, "C"});
    cout << "Multimap elements:\n";
    for (auto it : mmp) cout << it.first << " -> " << it.second << "\n";

    // -------------------- PAIR --------------------
    cout << "\n=== PAIR ===\n";
    pair<int, string> p = {1, "One"};
    cout << "Pair: " << p.first << " " << p.second << "\n";

    pair<int, pair<int, int>> complexPair = {1, {2, 3}};
    cout << "Complex Pair: " << complexPair.first << " " << complexPair.second.first << " " << complexPair.second.second << "\n";

    vector<pair<int, string>> pairVec = {{1, "A"}, {2, "B"}, {3, "C"}};
    cout << "Vector of Pairs:\n";
    for (auto it : pairVec) cout << it.first << " " << it.second << "\n";

    return 0;
}
