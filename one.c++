#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const string NUM[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven","eight","nine"};


void sub(int num, int count[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c : NUM[num])
        {
            count[c - 'a'] --;
        }
    }
}

void decode2(string str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    int count[26] = { 0 };
    int password0[10] = { 0 };

    for (char c : str)
    {
        count[c - 'a'] ++;
    }

    if (count['w' - 'a']>0)
    {
        password0[2] = count['w' - 'a'];
        sub(2, count, count['w' - 'a']);
    }

    if (count['x' - 'a']>0)
    {
        password0[6] = count['x' - 'a'];
        sub(6, count, count['x' - 'a']);
    }

    if (count['g' - 'a']>0)
    {
        password0[8] = count['g' - 'a'];
        sub(8, count, count['g' - 'a']);
    }

    if (count['z' - 'a']>0)
    {
        password0[0] = count['z' - 'a'];
        sub(0, count, count['z' - 'a']);
    }

    if (count['s' - 'a']>0)
    {
        password0[7] = count['s' - 'a'];
        sub(7, count, count['s' - 'a']);
    }

    if (count['v' - 'a']>0)
    {
        password0[5] = count['v' - 'a'];
        sub(5, count, count['v' - 'a']);
    }

    if (count['f' - 'a']>0)
    {
        password0[4] = count['f' - 'a'];
        sub(4, count, count['f' - 'a']);
    }

    if (count['r' - 'a']>0)
    {
        password0[3] = count['r' - 'a'];
        sub(3, count, count['r' - 'a']);
    }

    if (count['o' - 'a']>0)
    {
        password0[1] = count['o' - 'a'];
        sub(1, count, count['o' - 'a']);
    }

    if (count['i' - 'a']>0)
    {
        password0[9] = count['i' - 'a'];
    }

    for (int i = 0; i < 10; )
    {
        if (password0[i]>0)
        {
            cout << i;
            password0[i]--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    string s = "OnreEihEENnsTix";

    decode2(s);

    system("pause");
    return 0;
}
