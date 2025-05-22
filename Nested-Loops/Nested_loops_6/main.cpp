#include <iostream>

using namespace std;

int main() {
    
    /* Discussion On Number Patterns
     * 
     * 
     * Input N: 5
     * 
     * 
     * Output:  a, 1
     *             12
                   123
                   1234
                   12345
    
                b, 1
                   21
                   321
                   4321
                   54321
                    
                    
                c, 5
                   44
                   333
                   2222
                   11111   */
                   
                   
    // a.1
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    cout<< "\n" << endl;
/*--------------------------------------------------------------------------------------*/

// b.1

    for(int i = 1; i <= n; i++) {
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    
    
    cout<< "\n" << endl;

/*----------------------------------------------------------------------------------------*/

// c.1

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << n - i + 1; 
        }
        cout << endl;
    }

    
    
    return 0;
}