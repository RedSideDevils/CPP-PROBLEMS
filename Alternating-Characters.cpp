#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N;
string inp[100];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> inp[i];
    }

    for(int i = 0; i < N; i++){
        int ans = 0;

        for(int j = 0; j < inp[i].length() - 1; j++){
            if(inp[i][j] == inp[i][j + 1]){
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
