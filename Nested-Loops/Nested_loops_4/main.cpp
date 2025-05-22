#include <iostream>

using namespace std;

int main() {
    
    /* Rhoumbus Pattern
    
       Input rows: 5
    
       Output: *****
                *****
                 *****
                  *****
                   *****  */
                   
                   
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int spaces = i - 1;
        for(int k = 1; k <= spaces; k++){
            cout << " "; 
        }
        for(int j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }
               
    return 0;
}