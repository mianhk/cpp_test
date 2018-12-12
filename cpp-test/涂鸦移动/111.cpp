#include <bits/stdc++.h>
using namespace std;

int number_of_cards(float length)
{
    float res = 0;
    int i = 0;
    while (res <= length)
    {
        ++i;
        res += 1 / (i + 1.0);
        }

    return i;
}
int main(int argc, char const *argv[])
{
    cout << number_of_cards(1.0) << endl;
    cout << number_of_cards(3.71) << endl;
    cout << number_of_cards(0.04) << endl;
    cout << number_of_cards(5.19) << endl;
    system("pause");
    return 0;
}
