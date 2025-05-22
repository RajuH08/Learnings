#include <iostream>

using namespace std;

int main() {
    
    /* Diamond pattern with numbers 
     * 
     * 
     * Practice on own (TEST YOURSELF)
     */
   
    int n;
    cin >> n;
    int a = 1, spaces = n - 1;
    
    for(int i = 1; i <= 2*n-1; i++){
        for(int k = 1; k <= spaces; k++){
            cout << " ";
        }
        for(int j = 1; j <= a; j++){
            cout << j;
        }
        cout<<endl;
        if(i < n){
            a+=2;
            spaces--;
        }else {
            a-=2;
            spaces++;
        }
    }
    
    return 0;
}