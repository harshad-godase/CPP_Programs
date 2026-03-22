#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    // Count frequency
    for(int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }

    // Find first non-repeating
    for(int i = 0; i < s.length(); i++)
    {
        if(freq[s[i] - 'a'] == 1)
        {
            cout << s[i];
            return 0;
        }
    }

    cout << "No unique character";

    return 0;
}