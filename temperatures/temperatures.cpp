#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, temp, closest_value = 5526, closest_distance = 5526;
    cin >> n; cin.ignore();
    if(n == 0){
        cout << "0" << endl;
        return 0;
    }
    for(int i = 0; i < n; ++i){
        cin >> temp;
        if(abs(temp) < closest_distance){
            closest_distance = abs(temp);
            closest_value = temp;
        }
        else if(abs(temp) == closest_distance)
            if((temp > 0) && (closest_value < 0))
                closest_value = temp;
    }
    cout << closest_value << endl;
}
