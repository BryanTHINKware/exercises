/**
 * Objective: 
 * - Return all strings that contain a number (alpha+numeric or numeric)
 *
 * Input: vector of strings
 *
 * Output: vector of strings (that contain a number somewhere in the string)
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<string> test(vector<string> colors) {
    // TODO: add implementation here
}

int main(){
    vector<string> has_numbers = {"red", "green23", "1black", "white"};
    //vector<string> does_not_have_number = {"red", "green", "black", "white"};
  
    cout << "Inputs:\n";
    for (string c : has_numbers) {
        cout << c << " ";
        vector<string> result = test(has_numbers);
        cout << "\n\nOutput (strings that have numbers):\n";   
        for (string c : result) {
            cout << c << endl;
        }
    }
}
