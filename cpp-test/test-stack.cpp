#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool paren(const string &str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '{')
            s.push('{');
        else if (str[i] == '}')
        {
            if (s.top() != '{')
                return false;
            else
                s.pop();
        }
        else
            return false;
    }
    return s.empty();
}

int main()
{
    string str = "{}{";
    cout << "The string is : " << str << " ";
    if (paren(str))
        cout << "yes" << endl;
    ;
    else cout << "no" << endl;
    return 0;
}
