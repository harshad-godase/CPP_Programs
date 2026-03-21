#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for(int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            char ch = i + 'a';
            cout << ch << " = " << freq[i] << endl;
        }
    }

    return 0;
}