#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    char *str = "abcd\n";
    cout << sizeof(str) << endl;
    char str1[10] = "abcd\n";
    cout << sizeof(str1) << endl;
    char str2[][10] = {"abcd\n", ""};
    cout << sizeof(str2) << endl;
    char *str3[] = {"abcd\n", "efgh\n"};
    cout << sizeof(str3) << endl;
    system("pause");
    return 0;
}
