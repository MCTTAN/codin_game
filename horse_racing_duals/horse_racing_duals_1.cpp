#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numHorses, Pi, answer;
    vector<int> strengths;
    
    cin >> numHorses;
    
    for (int i = 0; i < numHorses; i++) 
    {
        cin >> Pi;
        strengths.push_back(Pi);
    }
    
    sort(strengths.begin(), strengths.end());
    
    answer = abs(strengths.at(1) - strengths.at(0));
    
    for(int j = 2; j < strengths.size(); ++j)
    {
        if(abs(strengths.at(j) - strengths.at(j - 1)) < answer)
            answer = abs(strengths.at(j) - strengths.at(j - 1));
    }

    cout << answer << endl;
}
