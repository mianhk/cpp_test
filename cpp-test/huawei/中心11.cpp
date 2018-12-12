#include <bits/stdc++.h>
using namespace std;

vector<int> minStrength(string network)
{
    int len = network.size();
    vector<int> depth(len);
    vector<int> result;
    for (int i = len - 1; i >= 0; --i)
    {
        int sondepth = -1;
        if (2 * i + 1 < len && network[2 * i + 1] == '1')
            sondepth = depth[2 * i + 1];
        if (2 * i + 2 < len && network[2 * i + 2] == '1' && depth[2 * i + 2] > sondepth)
            sondepth = depth[2 * i + 2];
        depth[i] = sondepth + 1;
    }

    for (int i = 0; i < len; ++i)
    {
        if (network[i] != '1')
            continue;

        int maxlength = depth[i];
        int j = i;
        for (int pathlen = 2; j; ++pathlen)
        {
            int p = (j - 1) / 2;
            int k = 2 * p + 1;
            if (j == k)
                k++;
            if (network[k] == '1' && pathlen + depth[k] > maxlength)
            {
                maxlength = pathlen + depth[k];
            }
            j = p;
        }
        result.push_back(maxlength);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int ones=0;
    s=s.substr(8,s.size()-7);
    for(int i=0;i<s.size();++i)
        if(s[i]=='1')
        ones++;
    cout<<s<<endl;
    int depth=(int)sqrt(s.size());
    for(int i=0;i<depth;++i){
        
    }
 system("pause");
 return 0;

}