#include <iostream>
using namespace std;


int main() {
    
    int n, num, max, min, sum;
    
    cout << "How many numbers: ";
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cout << "num #" << i << ": ";
        cin >> num;
        if (i==0) {
            max = num;
            min = num;
        } else {
            if (num >= max) max = num;
            if (num <= min) min = num;
        }
        sum += num;
    }

    cout << "Mean: " << (float)sum/n << "\n";
    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";
    cout << "Range: " << max-min << "\n";
        
    return 0;

}