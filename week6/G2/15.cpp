#include <iostream>

using namespace std;

int main() {
    // snake
    /*
    in:
    3

    out:
    row 0: 1 2 3
    row 1: 6 5 4
    row 2: 7 8 9

    in:
    4

    out:
    row 0: 1    2   3   4
    row 1: 8    7   6   5
    row 2: 9   10  11  12
    row 3: 16  15  14  13     

    00 01 02
    10 11 12
    20 21 22
    */
    int n;
    cin >> n;
    int a[n][n];

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                a[i][j] = cnt++; 
            }
        } else {
            for(int j = n - 1; j >= 0; j--){
                a[i][j] = cnt++; 
            }            
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }




    

    
                
    
    


    return 0;
}