#include <iostream>
#include <set>
#include <stdlib.h>
#include <ctime>
using namespace std;

void out_by_order(int input[], int n)
{
    set<int> id_set;
    int m = 1;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == m)
        {
            cout << m;
            id_set.erase(m);
            while (1)
            {
                if (id_set.find(++m) != id_set.end())
                {
                    cout << ',' << m;
                }
                else
                {
                    cout << endl;
                    break;
                }
            }
        }
        else
        {
            id_set.insert(input[i]);
        }
    }
}

void test(int a[], int n)
{
    srand(time(NULL));
    set<int> t;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            int rand_id = rand() % n + 1;
            if (t.find(rand_id) == t.end())
            {
                a[i] = rand_id;
                t.insert(a[i]);
                break;
            }
        }
    }
    cout << "input:(";
    for (int j = 0; j < n; j++)
    {
        if (j == n - 1)
        {
            cout << a[j];
        }
        else
        {
            cout << a[j] << ',';
        }
    }
    cout << ")" << endl;
    out_by_order(a, 10);
}

int main(int agrc, char *argv[])
{
    int a[10] = {1, 2, 5, 8, 10, 4, 3, 6, 9, 7};
    out_by_order(a, 10);
    cout << endl;
    cout << "test" << endl;

    test(a, 10);
    system("pause");
    return 0;
}
