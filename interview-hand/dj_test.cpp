#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("args error\n");
        return -1;
    }
    char cmd[1024] = {0};
    snprintf(cmd, 1024, "echo %s", argv[1]);
    system(cmd);
    system("pause");
    return 0;
}
