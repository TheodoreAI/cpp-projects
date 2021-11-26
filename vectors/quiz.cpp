#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Declare a function to count the wordInterest in the vector,
pass-by-reference, and count the repeating words
Test case: Maria Lee John Maria Lee Maria
*/

void CountRepeats(vector <string> &words, int &countWordInterest){
    /*
    I need to start the cout of the repeated word at zero
    Count the number of words that are the same as the string of interest
    I need to get the word of interest from the vector (its the last one with index 5)
    */
    countWordInterest = 0;
    string wordInterest;
    wordInterest = words[5];
    // I will loop thorugh the array to figure out how many
    // times the wordInterest appears in the vector
    for (int i = 0; i <= 4; i++){
        if (wordInterest == words[i]){
            countWordInterest++;
        }
    }
}
int main(){
    vector <string> words;
    string word;
    int count;
    int i = 0;
    // the word of interest will be the last one
    while(i <= 5){
        cin >> word;
        words.push_back(word);
        i++;
    }
    // After filling out the vector with words, pass it to the function that will count the amount of times words repeat
    CountRepeats(words, count);
    cout << count << endl;
    return 0;
}