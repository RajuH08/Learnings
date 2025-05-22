#include <iostream>

using namespace std;

int main() {
    
  /*  Square Pattern
    
    Input number of rows: 5
    
    Output : *****
             *****
             *****
             ***** 
             ***** */
             
        
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}