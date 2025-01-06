#include <iostream>
using namespace std;


int main() {
        
    int N;
    int count_div = 0;
    
    cout << "Biggest number: ";
    cin >> N;

    if (N<2){
        cout << "No prime number lower or equal to N.\n";
    } else 
    {
        for(int i = 2; i <= N; i++){
            for(int j = 2; j <= i; j++){
                if (i % j == 0) count_div += 1;
            }

            if (count_div < 2) cout << i << "\n";
            count_div = 0;
        }
    }

    return 0;

}