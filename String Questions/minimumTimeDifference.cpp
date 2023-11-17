#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int findMinDifference(vector<string> timePoints){

    // Converting String to Integer and storing in new Array

    vector<int> minutes;
    for (int i = 0; i < timePoints.size(); i++){   
        string current = timePoints[i];     
        int hours = stoi(current.substr(0, 2));
        int min = stoi(current.substr(3, 2));
        int totalMinutes = (hours * 60) + min;
        minutes.push_back(totalMinutes);
    }

    // Sorting

    sort(minutes.begin(), minutes.end());

    // Finding the difference

    int mini = INT_MAX;
    int size = minutes.size();

    for (int i = 0; i < size - 1; i++){
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // Missing Difference [Last value and First Value]

    int lastDiff1 = minutes[0] + 1440 - minutes[size - 1];
    int lastDiff2 = minutes[size - 1] - minutes[0];
    int lastDiff = min(lastDiff1, lastDiff2);
    mini = min(mini, lastDiff);

    return mini;
}