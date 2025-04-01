#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // unordered_map => store data in form (key, value)
    unordered_map<int, string> text = {{1, "Hello"}, {2, "Everybody"}, {3, "Today"}};
    for (auto i : text)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
    // basic operation
    unordered_map<int, string> text1; // empty unordered_map

    // 1) insert
    // insert using square brackets
    text1[1] = "Hello";
    // insert using insert() method
    text1.insert({2, "Everybody"}); text1.insert({3, "Today"});
    for (auto i : text1)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
    
    // 2) access element => access by using [] or at() function
    // at() better more than [] because if it not found key it will response
    cout << text1[1] << '\n';
    cout << text1.at(2) << '\n';

    // 3) update element
    text1[1] = "Nerd"; cout << text1.at(1) << '\n';

    // 4) find element
    auto find = text1.find(2);
    if (find != text1.end())
    // .end() mean it will search until it end unordered_map
    {
        cout << find->first << " : " << find->second << '\n';
    }
    else
    {
        cout << "not_found" << '\n';
    }

    // 5) traversing
    for (auto find = text1.begin(); find != text1.end(); find++)
    {
        cout << find->first << ' ' << find->second << '\n';
    }

    // 5) delete element => using erase(inside this input key);
    text1.erase(2);
    // try output
    cout << text1.at(2) << '\n';
    return 0;
}