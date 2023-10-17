// link : https://youtu.be/RRVYpIET_RU

#include <iostream>
using namespace std;

int main()
{
    pair <int, int> p = {1,3};                              // stores data in pairs (of any data type)

    cout << p.first << " " << p.second;

    pair <int, pair <int, int>> q = {1, {3, 4}};            // nested pairs

    cout << q.first << " " << q.second.second << " " << q.second.first;

    pair <int, int> array[] = {{1,2}, {3, 4}, {5,6}};       // array of pairs

    cout << array[1].second;

    return 0;
}