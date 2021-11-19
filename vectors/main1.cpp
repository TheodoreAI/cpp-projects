#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declare the vector of integers where the inputs will be stored.
    vector <int> numbers;
    // declare the variable and the type of inputs
    int num;
    //counting var
    int count;
    count = 0;
    // loop while there are inputs AND they are greater than or equal to 0.
    while (cin >> num && num >= 0){
        // if the numbers are greater-than or equal to 0 add them to vector
        if (num >= 0){
            numbers.push_back(num);
            count++;
        }
    }
    numbers.insert(numbers.begin(), count);
    //  Loop through the vector to print out the numbers 
    for (int i = 0; i <= numbers.size(); i++){
        // if we reach the end of the vector then make a newline
        if (i == numbers.size()){
            cout << endl;
        }else{
            // else print numbers with a space
            cout << numbers[i] << " ";
        }  
    }
    return 0;
}