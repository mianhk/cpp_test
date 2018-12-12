#include <bits/stdc++.h>
using namespace std;

struct matrix
{
    // matrix(int xx,int yy){
    //   x=xx;
    //   y=yy;
    // }
    int x;
    int y;
};

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; ++tt)
    {
        int n;
        cin >> n;
        //multiset<matrix> mset;
        multiset<int> set1, set2;
        for (int i = 0; i < n; ++i)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            // mset.insert(temp);
            set1.insert(temp1);
            set2.insert(temp2);
        }

        while (set1.size() > 1)
        {
            multiset<int>::iterator it = set1.begin();
            multiset<int>::iterator it0 = find(set2.begin(), set2.end(), *it);
            if (it0 != set2.end())
            {
                set1.erase(it);
                set2.erase(it0);
                it = set1.begin();
            }
            else
                it++;
        }

        if (set2.size() == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    system("pause");
    return 0;
}
