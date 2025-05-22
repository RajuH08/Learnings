#include <iostream>

using namespace std;

int main() {
    
    /* Diamond Star Pattern
     * 
     * Input- Enter N: 5
     * 
     * Output:       *
     *              ***
     *             *****
     *            *******
     *           *********
     *            *******
     *             *****   
     *              ***
     *               *
     * 
     * */
     
        
        
    int n;
    cin >> n;
    int stars = 1, spaces = n-1;
    
    for(int i = 1; i <= 2*n-1; i++){
        for(int k = 1; k <= spaces; k++){
            cout << " ";
        }
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n){
            stars+=2;
            spaces--;
        }else{
                stars-=2;
                spaces++;
            }
        
    }

    return 0;
}