#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(int x, int result) 
{
    if (x == 1) return result; 
    else return factorial(x - 1, x * result);
}
    
int main()
{
    int N, result = 1;
    cin >> N; cin.ignore();
    cout << factorial(N, result) << endl;
}
