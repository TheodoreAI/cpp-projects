#include <iostream>
#include <vector>
using namespace std;

// 5 3 9 -2 -1 0 6

void GetMaxAndMin(vector <int> &v, int &min, int &max){
    // assume the first element of the vector is the min and max
    max = v[0];
    min = v[0]; 
    
    // I need to loop through the vector and find the min and max and set them
    for (int i = 0; i < v.size(); i++){
        // if any of the elements is bigger than the first element make that the max
        if (v[i] > max){
            max = v[i];
        }
        // if any of the elements is smaller than the first element make that the min
        if (v[i] < min){
            min = v[i];
        }
    }
}




int main(){
    vector <int> v;
    int i;
    int numValues;
    int currValue;
    int min;
    int max;

    // Get values into vector. First input is number of values that follow.
    cout << "Number of values: " << endl;
    cin >> numValues;
    for (i = 0; i < numValues; i++){
        cin >> currValue;
        v.push_back(currValue);
    }

    GetMaxAndMin(v, min, max);
    cout << "The Min and Max: " << endl;
    cout << "Max " << max << endl;
    cout << "Min " << min << endl;
    return 0;
}