#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* 输出源文件的标题和目前执行行的行数  */
void printLines()
{
    int line = __LINE__;
    char *file = __FILE__;
    cout << "File name is: " << file << ", line is: " << line << endl;
}
int main(int argc, char const *argv[])
{
    printLines();
    system("pause");
    return 0;
}
