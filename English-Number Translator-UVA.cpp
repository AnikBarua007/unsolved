#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                    "twenty"};
vector<string> thirtofourty = {"1", "2", "3", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int main()
{
    string s;

    while (getline(cin, s))
    {
        if (s.substr(0, 8) == "negative")
        {
            s.erase(0, 9);
            cout << "-" << endl; // negative check
        }
        int total = 0;
        int k = 0;
        for (int i = k; i < s.size(); i++)
        {
            for (int j = i; s[j] != ' '; j++)
            {
                k = j + 2;
                string r = s.substr(k, j);
                vector<string>::iterator it = find(v.begin(), v.end(), r);
                if (&&it != v.end()))
                    {
                        total += poisition;
                    }
                else if (int position = thirtofourty.find(r))
                {

                    total += (position * 10);
                }
                else if ()
            }
        }
    }
    return 0;
}
