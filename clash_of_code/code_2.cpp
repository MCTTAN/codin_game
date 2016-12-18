#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N; cin.ignore();
    string W;
    cin >> W; cin.ignore();

    for(int i = 0; i < N; ++i)
        cout << W << endl;
        
    return 0;
}
