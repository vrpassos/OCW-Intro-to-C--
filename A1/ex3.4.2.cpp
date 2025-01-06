#include <iostream>
using namespace std;


int main() {
        
    int N;

    while(true){
        cout << "Number: ";
        cin >> N;    
        if ((N>0)&&(N%5==0))
            cout << N/5 << "\n";
        else
            continue;
    }    
    
    return 0;

}