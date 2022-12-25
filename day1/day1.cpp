#include <iostream>
#include <fstream> 

using namespace std;

int main(){

    string input; 
    ifstream MyReadFile("day1.txt");
    int count, max = 0;

    while (getline (MyReadFile, input)){ 
        if (input.empty())
        {
        count = 0;
        continue;
        }

        count = stoi(input) + count;
        if( count > max)
        {
            max = count; 
        }
    }
    cout << max;
   return 0;
}
