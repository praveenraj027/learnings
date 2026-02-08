#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    pair<string, int> pair2("praveen", 12);
    m.insert(pair2);
    pair<string, int> p = make_pair("piyu", 100);
    m.insert(p);

    m["romeo"] = 23;

    // printing map elements using for each loop
    for (auto i : m){
        cout << i.first << " -> " << i.second << endl;
    }

    //printing map elements using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while (it != m.end()){
        cout << it->first << " -> " << it->second << endl;
        it++;
    }
    return 0;
}
