#include <iostream>
#include <vector>
#include <list>

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


    return 0;
}