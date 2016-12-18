#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int M, D, N, sum, sum2;
    vector<int> numbers;
    
    cin >> M >> D >> N; cin.ignore();
    
    sum = M;
    
    for(int i = 0; i < N; ++i)
    {
        numbers.push_back(sum);
        cout << "Item: " << sum << endl;
        sum += D;
    }
    
    for(int j = 0; j < numbers.size(); ++j)
        sum2 += numbers.at(j);

    cout << sum2 << endl;
    
    return 0;
}
