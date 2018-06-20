#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;
/*
reberse_2nd:将一个数转换为二进制去反
编写函数reverse，将val(32位无符号整数)的二进制位反序，比如，如果val的二进制表示为1011000011111111，反序后val的二进制表示为1111111100001101。
*/
int reverse_2nd(unsigned int num)
{
    int res = 0;
    for (int i = 0; i < 32; ++i, num /= 2)
        res = res * 2 + num % 2;
    return res;
}
/*
函数match检查字符串str是否匹配模板pattern，匹配则返回0，否则返回-1。

模板支持普通字符(a-z0-9A-Z)及通配符?和*，普通字符匹配该字符本身，?匹配任意一个字符，*匹配任意多个字符。比如字符串abc对下述模板的匹配结果为：
*/
int match(const char *str,const char *pattern){
    int str_len=strlen(str);
    int pattern_len=strlen(pattern);
    if(!str_len && !pattern_len)
        return 0;
    if(!pattern_len || !str_len)
        return -1;
    
}
int main(int argc, char const *argv[])
{
    int num = 2313141231;
    cout << bitset<32>(num) << endl;
    int res = reverse_2nd(num);
    cout << bitset<32>(res) << endl;
    //  system("pause");
    return 0;
}
