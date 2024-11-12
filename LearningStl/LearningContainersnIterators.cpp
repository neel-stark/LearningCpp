#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    cout << "----------- initializing vectors -----------" << endl; 
    vector<int> vec = {1, 2, 3};

    cout << vec.size() << " " << vec.capacity() << endl;

    vec.push_back(4);

    cout << vec.size() << " " << vec.capacity() << endl;

    for (int element : vec)
    {
        cout << element << " " ;
    }
    cout << endl;

    cout << "----------- Vectors: iterators and looping using iterators -----------" << endl; 

    vector<int> vec2 = {1, 2, 3, 4, 5};

    vector<int>::iterator itr;
    for(itr=vec2.begin(); itr!=vec2.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;

    // vector<int>::reverse_iterator ritr;
    for(auto ritr=vec2.rbegin(); ritr!=vec2.rend(); ritr++){
        cout << *ritr << " ";
    }
    cout << endl;

    cout << "----------- Vectors: erase, insert, clear, empty -----------" << endl;

    vec2.erase(vec2.begin()+2);   //erases 3rd element
    cout << "Erased 3rd element : "; 
    for (int element : vec2)
    {
        cout << element << " " ;
    }
    cout << endl;

    // Erases 2nd and 3rd element, i.e. a range of elements. 
    // First argument is inclusive, 2nd argument is non-inclusive
    vec2.erase(vec2.begin()+1, vec2.begin()+3);   
    cout << "Erased 2nd and 3rd elements : "; 
    for (int element : vec2)
    {
        cout << element << " " ;
    }
    cout << endl;

    //Insert element at index 1
    vec2.insert(vec2.begin()+1, 100);   
    cout << "Inserted element at index 1 : "; 
    for (int element : vec2)
    {
        cout << element << " " ;
    }
    cout << endl;


    cout << "----------- Lists: push_back, push_front, pop_back, pop_front -----------" << endl; 

    list<int> l = {1,2,3};
    l.push_back(1);
    l.push_front(5);
    l.push_back(4);
    l.push_front(1);

    for(int element : l){
        cout << element << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    for(int element : l){
    cout << element << " ";
    }
    cout << endl;

    cout << "----------- Deque: push_back, push_front, pop_back, pop_front -----------" << endl;

    deque<int> d = {1,2,3};
    d.push_back(1);
    d.push_front(5);
    d.push_back(4);
    d.push_front(1);

    for(int element : d){
        cout << element << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    for(int element : d){
    cout << element << " ";
    }
    cout << endl;

    cout << "----------- Comparison between deque and List -----------" << endl;

    cout << d[2] << endl;
    d[2] = 100;
    cout << d[2] << endl;
    //cout << l[2];     //[ ] indexing does not work on Lists

    cout << "----------- Pair -----------" << endl;
    pair<string, int> p = {"Hello", 5};

    cout << p.first << endl;
    cout << p.second << endl;

    cout << "----------- Stack -----------" << endl;

    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
    cout << "Size of Stack after pushing : " << s.size() << endl;

    cout << "Printing out Stack top elements followed by popping them in a while loop till the stack becomes empty : ";
    while(!s.empty()){
        cout << s.top() << " "; 
        s.pop();
    }
    cout << endl;
    cout << "Size of stack after popping: " << s.size() << endl;

    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
    stack<int> s2;
    cout << "Before swapping: stack1 size : " << s.size() << " " << "stack2 size : " << s2.size() << endl;
    s2.swap(s);
    cout << "After swapping: stack1 size : " << s.size() << " " << "stack2 size : " << s2.size();

    cout << endl << endl;
    cout << "----------- Queue -----------" << endl;

    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    cout << "Size of queue after pushing : " << q.size() << endl;

    while(!q.empty()){
        cout << q.front() << " "; 
        q.pop();
    }
    cout << endl;
    cout << "Size of queue after popping: " << q.size() << endl;

    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    queue<int> q2;
    cout << "Before swapping: queue1 size : " << q.size() << " " << "queue2 size : " << q2.size() << endl;
    q2.swap(q);
    cout << "After swapping: queue1 size : " << q.size() << " " << "queue2 size : " << q2.size();

    cout << endl << endl;

    cout << "----------- Priority Queue -----------" << endl;

    priority_queue<int> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    cout << "Printing out the top elements and popping them till pq is empty: " << endl;
    while(!pq.empty()){
        cout << pq.top() << " "; 
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pqMinHeap;

    pqMinHeap.push(5);
    pqMinHeap.push(3);
    pqMinHeap.push(10);
    pqMinHeap.push(4);

    cout << "Printing out the top elements and popping them till pqMinHeap is empty: " << endl;
    while(!pqMinHeap.empty()){
        cout << pqMinHeap.top() << " "; 
        pqMinHeap.pop();
    }
    cout << endl << endl;

    cout << "----------- Maps -----------" << endl;

    map<string, int> m;

    m["tv"] = 50;
    m["laptop"] = 100;
    m["fridge"] = 150;

    m.insert({"watch", 40});
    m.emplace("headphones", 56);
    m.emplace("headphones", 78);

    for (pair<string, int> p : m){
        cout << p.first << " " << p.second << endl;
    }
    cout << "Count of headphone keys in the map: " << m.count("headphones") << endl;

    if (m.find("laptop") != m.end()){
        cout << "laptop key found in map!" << endl;
    } else {
        cout << " laptop key not found in map" << endl;
    }
    cout << (*(m.find("laptop"))).first << endl;    
    // cout << (*(m.end())).first << endl;      // trying to dereference m.end() causes segmentation fault

    unordered_map<string, int> uM;

    uM["tv"] = 50;
    uM["laptop"] = 100;
    uM["fridge"] = 150;

    cout << "Unordred map" << endl;
    for (pair<string, int> pUM : uM){
        cout << pUM.first << " " << pUM.second << endl;
    }
    
    cout << endl << endl;

    cout << "----------- Sets -----------" << endl;

    set<int> set1;

    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);

    for (auto val : set1){
        cout << val << endl;
    }

    cout << "The value in set higher than or equal to lower bound = " << *(set1.lower_bound(5)) << endl;
    // for some reason, the lower_bound(7) which should return an iterator to beyond the set, keeps returning 4 instead of 0
    
    cout << "The value in set higher than or equal to lower bound = " << *(set1.upper_bound(5)) << endl;

    unordered_set<int> uSet1;

    uSet1.insert(33);
    uSet1.insert(4);
    uSet1.insert(25);
    uSet1.insert(6);

    for (auto val : uSet1){
        cout << val << endl;
    }

    cout << endl;

    return 0;
}