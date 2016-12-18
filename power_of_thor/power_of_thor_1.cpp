#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    
    /*
    if(lightX < 0 || lightX >= 40 || lightY < 0 || lightY >= 18 || initialTX < 0 || initialTX >= 40 || initialTY < 0 || initialTY >= 18) ||
        exit(1);
    */
    
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
        if(initialTX == lightX && initialTY == lightY)
            exit(1);
        
        if(initialTY < lightY) // If true, go south
        {
            if(initialTX < lightX) // If true, go southeast
            {
                cout << "SE" << endl;
                initialTY += 1; // Go south
                initialTX += 1; // Go east
            }
            
            else if(initialTX > lightX) // If true, go southwest
            {
                cout << "SW" << endl;
                initialTY += 1; // Go south
                initialTX -= 1; // Go west
            }
            
            else if(initialTX == lightX) // If true, go south
            {
                cout << "S" << endl;
                initialTY += 1;
            }
        }
        else if(initialTY > lightY) // If true, go north
        {
            if(initialTX < lightX) // If true, go northeast
            {
                cout << "NE" << endl;
                initialTY -= 1; // Go north
                initialTX += 1; // Go east
            }
                
            else if(initialTX > lightX) // If true, go northwest
            {
                cout << "NW" << endl;
                initialTY -= 1; // Go north
                initialTX -= 1; // Go west
            }
                
            else if(initialTX == lightX) // If true, go north
            {
                cout << "N" << endl;
                initialTY -= 1; // Go north
            }
        }
        else if(initialTY == lightY) // If true, either go east or west
        {
            if(initialTX < lightX) // If true, go east
            {
                cout << "E" << endl;
                initialTX += 1; // Go east
            }
            
            else if(initialTX > lightX) // If true, go west
            {
                cout << "W" << endl;
                initialTX -= 1; // Go west
            }
        }
    }
    
    return 0;
}
