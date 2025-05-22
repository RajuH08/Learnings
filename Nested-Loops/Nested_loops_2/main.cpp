#include <iostream>

using namespace std;

int main() {
    
    //Nested 3 kinds of Loops Inside of other one
    
    
     
    for(int i = 1; i <= 5; i++ ){
        for(int j = 1; j <= 4; j++){
            for(int k = 1; k <= 3; k++){
              cout << i << " - " << j << " - " << k << endl;  
            }
            
        }
    }
    
    return 0;
}