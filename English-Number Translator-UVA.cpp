#include <bits/stdc++.h>
using namespace std;
#define bhaag ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    bhaag;
    map<string, int> words_to_number;
    words_to_number["zero"] = 0;
    words_to_number["one"] = 1;
    words_to_number["two"] = 2;
    words_to_number["three"] = 3;
    words_to_number["four"] = 4;
    words_to_number["five"] = 5;
    words_to_number["six"] = 6;
    words_to_number["seven"] = 7;
    words_to_number["eight"] = 8;
    words_to_number["nine"] = 9;
    words_to_number["ten"] = 10;
    words_to_number["eleven"] = 11;
    words_to_number["twelve"] = 12;
    words_to_number["thirteen"] = 13;
    words_to_number["fourteen"] = 14;
    words_to_number["fifteen"] = 15;
    words_to_number["sixteen"] = 16;
    words_to_number["seventeen"] = 17;
    words_to_number["eighteen"] = 18;
    words_to_number["nineteen"] = 19;
    words_to_number["twenty"] = 20;
    words_to_number["thirty"] = 30;
    words_to_number["forty"] = 40;
    words_to_number["fifty"] = 50;
    words_to_number["sixty"] = 60;
    words_to_number["seventy"] = 70;
    words_to_number["eighty"] = 80;
    words_to_number["ninety"] = 90;
    string s;
    
    while (getline(cin, s))
    {
        bool negative = false;
        int num = 0, total = 0;
        
        stringstream string1(s);
        string word;
        
        while (string1 >> word)
        {
            if (word == "negative")
                negative = true;
            else if (word.compare("million")==0)
            {
                total += num * 1000000;
                num = 0;
            }
             else if (word == "hundred")
            {
                num = num * 100;
            }
            else if (word == "thousand")
            {
                total += num * 1000;
                num = 0;
            }
           
            else
            {
                num += words_to_number[word];
            }
        }
        
        total += num;
        
        if (negative){
 total = -1*total;
        }
           
        cout << total << '\n';
    }
}