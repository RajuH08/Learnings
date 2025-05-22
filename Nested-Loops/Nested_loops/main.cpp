#include <iostream>

using namespace std;

int main() {
    
    //Basic understanding of nested loop
    
    for(int i = 1; i <= 5; i++ ){
        for(int j = 1; j <= 4; j++){
            cout << i << " - " << j << endl;
        }
    }
    
    return 0;
}