#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i = 0; i < n; i++)
        cin >> strs[i];

    if(n == 0)
    {
        cout << "";
        return 0;
    }

    string prefix = strs[0];

    for(int i = 1; i < n; i++)
    {
        while(strs[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);

            if(prefix == "")
            {
                cout << "";
                return 0;
            }
        }
    }

    cout << prefix;

    return 0;
}