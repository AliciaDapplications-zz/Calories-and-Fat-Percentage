//
//  main.cpp
//  Calories and Fat Percentage
//
//  Created by Alicia Dale on 2/27/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    //Declare Variables
    int totalCals = 0;
    int fatGrams = 0;
    int fatCals = 0;
    double fatPercent = 0.0;
    
        //enter input items
    cout << "Total Calories: ";
    cin >> totalCals;
    cout << "Grams of fat: ";
    cin >> fatGrams;
    
        //Determine whether the data is valid
    if(totalCals >= 0 && fatGrams >= 0)
    {
            //calculate and dispaly the output
        fatCals = fatGrams * 9;
        fatPercent = static_cast<double>(fatCals)
        /static_cast<double>(totalCals) *100;
        
        cout << "Fat calories: " << fatCals << endl;
        cout << fixed << setprecision(0);
        cout << "Fat percentage: " << fatPercent
        << "%" << endl;
        
            if (fatPercent > 30.0)
                cout << "High in fat " << endl;
            else
                cout << "Not high in fat " << endl;
            //end if
    }
    
    else
        cout << "Input error" << endl;
        //end if
    return 0;
}   //end of main funtion
