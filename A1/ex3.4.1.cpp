#include <iostream>
using namespace std;


int main() {
        
    int N;

    while(true){
        cout << "Number: ";
        cin >> N;    
        N = (N>0)&&(N%5==0) ? N/5 : -1;
        cout << N << "\n";
    }    
    
    return 0;

}