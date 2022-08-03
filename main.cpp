#include <iostream>
#include <map>
#include <set>

using namespace std;

map<int, set<int>> my_map;

int main(int argc, char const *argv[])
{
    my_map[1].insert(2);
    if (my_map.count(2) != 0)
    {
        cout << "find key 2" << endl;
    }
    else
    {
        cout << "key 2 not exists" << endl;
    }

    my_map[2].erase(3);
    if (my_map.count(2) != 0)
    {
        cout << "find key 2" << endl;
        for (int e : my_map[2])
        {
            cout << e << endl;
        }
    }
    if (my_map.count(1) != 0)
    {
        cout << "find key 1" << endl;
    }
    for (int e : my_map[1])
    {
        cout << e << endl;
    }
    return 0;
}
