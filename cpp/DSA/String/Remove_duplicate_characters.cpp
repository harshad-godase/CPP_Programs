#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool visited[26] = {false};

    for(int i = 0; i < s.length(); i++)
    {
        if(visited[s[i] - 'a'] == false)
        {
            cout << s[i];
            visited[s[i] - 'a'] = true;
        }
    }

    return 0;
}