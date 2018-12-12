#include <bits/stdc++.h>
using namespace std;

// std::mutex mt;

class Sington
{
  public:
    static Sington *getInstance();
    ~Sington();

  private:
    Sington() = delete;
    Sington(const Sington &) = delete;
    Sington &operator=(const Sington &) = delete;
    static Sington *mSington;
}

Sington *Sington::mSington = nullptr;
Sington *Sington::getInstance()
{
    if (mSington == nullptr)
    {
        // mt.lock();
        mSington = new Sington();
        // mt.unlock();
    }
    return mSington;
}

int main(int argc, char const *argv[])
{
    Sington *a = Sington::getInstance();
    Sington *b = Sington::getInstance();
    cout << a == b << endl;
    system("pause");
    return 0;
}
