#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    pair<string, int> p = make_pair("piyu", 100);
    m.insert(p);
    pair<string, int> pair2("praveen", 12);
    m.insert(pair2);

    m["romeo"] = 23;

    // search 
    cout << m["romeo"] << endl;
    cout << m.at("piyu") << endl;

    cout << m["anything"] << endl;
    cout << m.at("anything") << endl;

    //size

    cout << m.size() << endl;

    //to check presence

    cout << m.count("piyu") << endl;
    cout << m.count("piyuu") << endl;

    //erase

    m.erase("praveen");
    cout << m.count("praveen") << endl;
    return 0;
}
