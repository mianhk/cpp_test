#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    long long count1 = 0, count2 = 0;
    long long m = sqrt(n + 0.5);
    vector<int> ivec(n, 0);
    long long a, b, c;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = i + 1; j <= m; j += 2)
        {
            if (gcd(j, i) == 1)
            {
                a = j * j - i * i;
                b = 2 * i * j;
                c = i * i + j * j;
                if (c <= n)
                {
                    count1++;
                    ivec[a] = ivec[b] = ivec[c] = 1;
                }
                for (int k = 2; c * k <= n; k++)
                    ivec[k * a] = ivec[k * b] = ivec[k * c] = 1;
            }
        }
    }

    // for (auto ii : ivec)
    // {
    //     if (ii)
    //         count2++;
    // }
    cout << count1 << endl;
    // for (int i = 2; i <= m; ++i)
    // {
    //     for (int j = i + 1; j <= n; ++j)
    //     {
    //         int t = i * i + j * j;
    //         int k = (int)sqrt(t);
    //         if (k > n)
    //             break;
    //         if (k * k == k)
    //         {
    //             for (int x = i;; x > 1; --x)
    //             {
    //                 if (i % x == 0 && j % x == 0 && k % x == 0)
    //                 {
    //                     break;
    //                 }
    //                 if (x == 1)
    //                 {
    //                     count++;
    //                 }
    //             }
    //                     }
    //     }
    // }
    // cout << count + 1 << endl;
    system("pause");
    return 0;
}
// void main()
// {
// long count=0;
// long M=(long)((double)N/sqrt(2));
// for(long i=2;i<=M;++i)
// for(long j=i+1;j<=N;++j)
// {
// long t=i*i+j*j;
// long k=(long)sqrt(t);
// if(k>N)break;
// if(k*k==t)
// {
// for(int x=i; x >1 ; x--)
// {
// if(i%x==0 && j%x==0 && k%x==0)
// {
// break;
// }
// }
// if(x==1) //最大公约数是1
// {
// cout<<(++count)<<":"<<i<<" "<<j<<" "<<k<<endl;
// }
// }
// }
// }
