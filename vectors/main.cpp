// Contribuitors: Vanessa Panameño, Mateo Estrada 
// cpp
// Description: Program to output a vector of strings forwards and backwards.

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    // Defines a vector called words & a variable named word of type string
    vector <string> words;
    string word;

    // Loops until there is a word "DONE" inputted
    while (cin >> word){
        if (word == "DONE"){
            break;
        }
        // Adds the words to the end of the vector with a space on the word
        words.push_back(word);
    }
    // Prints the vector in original order
    for (int i = 0; i <= (int)(words.size()) - 1; i++){
        // if we reach the last element in the vector then don't print it with a space
        if (i == (int)(words.size()-1)){
            cout << words[i] << endl;
        }else{
            cout << words[i] << " ";
        }
        
        
    }
    // Prints the vector in reverse order 
    // by starting from the end of the vector.
    cout << endl;
    for (int i = (int)(words.size()) - 1; i >= 0; i--){
        // if we reach the last element in the vector then don't print it with a space
        if (i == 0){
            cout << words[i] << endl;
        }else{
            cout << words[i] << " ";
        }
    }
    return 0;
}