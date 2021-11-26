#include <iostream>
using namespace std;


 void CashChange(int totDollars, int &twenties, int &tens, int &fives, int &ones){
        // initializing the values
       
        // set the values
        twenties -= 10;

        // set the number of twenties
        // subtract it from the totDollars
    }

int main(){
    int totDollars = 58;
    int twenties = 20;
    int tens = 10;
    int fives = 5;
    int ones = 1;

    // this function takes the following parameters as a pass by reference
    // totDollars = 58
    // twenties = 2
    // tens = 1
    // fives = 1
    // ones = 3
    CashChange(totDollars, twenty, ten, five, one);
    cout << twenty << endl;

    return 0;
}