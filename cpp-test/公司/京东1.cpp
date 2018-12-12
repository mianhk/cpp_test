#include <bits/stdc++.h>
using namespace std;

class Thing
{
  public:
    long x, y, z;
    Thing(long xx, long yy, long zz) : x(xx), y(yy), z(zz) {}
    // friend bool operaotr < (const Thing &lhs, const Thing &rhs);
    //  bool operaotr < (const Thing &rhs)
    // {
    //     return this->x < ths.x;
    // }
};
bool operator<(const Thing &lhs, const Thing &rhs)
{
    return lhs.x < rhs.x;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    set<Thing> tset;
    for (int i = 0; i < n; ++i)
    {
        long temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;
        Thing t(temp1, temp2, temp3);
        tset.insert(t);
    }
    int res = 0;
    set<Thing>::iterator it = tset.begin();
    while (it != tset.end())
    {
        set<Thing>::iterator it0 = it, begin = it;
        while (it0 != tset.end())
        {
            it++;
            if (it->y > it0->y && it->z > it0->z)
            {
                res++;
            }
        }
        // it++;
    }
    cout << res << endl;
    //system("pause");
    return 0;
}
