#include <iostream>
#include <fstream> 
#include <vector>

using namespace std;

int main(){

    vector<int> calories;
    string input; 
    ifstream MyReadFile("day1.txt");

    int count = 0;

    while (getline (MyReadFile, input)){ 
        if (input.empty())
        {
        calories.push_back(count);
        count = 0;
        continue;
        }
        count = stoi(input) + count;
    }

    sort(calories.begin(), calories.end(), greater<int>());
    cout << calories[0] + calories[1] + calories[2] ;

   return 0;
}
