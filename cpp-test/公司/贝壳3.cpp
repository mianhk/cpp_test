#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Room
{
  public:
    int id;
    int i;
    int j;
    Room(int id, int i, int j) : id(id), i(i), j(j) {}
    bool operator<(Room &rhs)
    {
        return this.i < rhs.i;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ivec(n);
    for (int i = 0; i < n; ++i)
    {
        int i1, i2;
        cin >> i1 >> i2;
        ivec[i] = new Room(i, i1, i2);
    }
    sort(ivec.begin(), ivec.end());

    set<int> iset;
    for (int i = 0; i < n; ++i)
    {
        int last = 0;
        bool can = true;
        for (int j = 0; j < n; ++j)
        {
            if (j == i)
                continue;
            if (ivec[j].i < last)
            {
                can = false;
                break;
            }
            last = ivec[j].j;
        }
        if (can)
        {
            res++;
            iset.insert(i);
        }
        cout << res << endl;
        for (auto ii : iset)
            cout << ii + 1 << " ";
    }
    // system("pause")
    return 0;
}
