#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    system("pause");
    return 0;
}
public
class Main03
{
  public
    static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();
        while (in.hasNext())
        {
            int num = in.nextInt();
            if (num == 0)
                break;
            list.add(num);
        }
        Collections.sort(list);
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = list.size() - 1; i >= 0; i--)
        {
            int w = list.get(i);
            boolean flag = false;
            for (int j = 0; j < res.size(); j++)
            {
                if (res.get(j) + w <= 300)
                {
                    res.set(j, res.get(j) + w);
                    flag = true;
                    break;
                }
            }
            if (!flag)
                res.add(w);
        }
        System.out.println(res.size());
    }
} public class Main03
{
  public
    static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();
        while (in.hasNext())
        {
            int num = in.nextInt();
            if (num == 0)
                break;
            list.add(num);
        }
        Collections.sort(list);
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = list.size() - 1; i >= 0; i--)
        {
            int w = list.get(i);
            boolean flag = false;
            for (int j = 0; j < res.size(); j++)
            {
                if (res.get(j) + w <= 300)
                {
                    res.set(j, res.get(j) + w);
                    flag = true;
                    break;
                }
            }
            if (!flag)
                res.add(w);
        }
        System.out.println(res.size());
    }
  public
    class Main03
    {
      public
        static void main(String[] args)
        {
            Scanner in = new Scanner(System.in);
            ArrayList<Integer> list = new ArrayList<>();
            while (in.hasNext())
            {
                int num = in.nextInt();
                if (num == 0)
                    break;
                list.add(num);
            }
            Collections.sort(list);
            ArrayList<Integer> res = new ArrayList<>();
            for (int i = list.size() - 1; i >= 0; i--)
            {
                int w = list.get(i);
                boolean flag = false;
                for (int j = 0; j < res.size(); j++)
                {
                    if (res.get(j) + w <= 300)
                    {
                        res.set(j, res.get(j) + w);
                        flag = true;
                        break;
                    }
                }
                if (!flag)
                    res.add(w);
            }
            System.out.println(res.size());
        }
    