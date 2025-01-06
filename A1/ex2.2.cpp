#include <iostream>
using namespace std;


int main() {
    
    int n;

    const char * text = "Hello World!\n";

    cin >> n;

    cout << "for\n";
    for(int i = 0; i < n; i++)
        cout << text;
    
    int i = 0;

    cout << "while\n";
    while(i<n){
        cout << text;
        i++;
    }

    i = 0;

    cout << "do-while\n";
    do {
        cout << text;
        i++;
    } while(i<n);

    return 0;

}