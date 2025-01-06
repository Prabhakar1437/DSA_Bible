/*

  
    
    // pattern 2_1

    *
    * *
    *   *
    *     *
    * * * * *

    // pattern 3

    1
    1 2
    1 2 3 
    1 2 3 4
    1 2 3 4 5

    // pattern 4

    1
    2 2 
    3 3 3
    4 4 4 4
    5 5 5 5 5

    // pattern 5

    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    
    // pattern 5_1

    * * * * *
    *     *
    *   *
    * *
    *  
    // pattern 6

    1 2 3 4 5
    1 2 3 4 
    1 2 3 
    1 2 
    1 
    
    // pattern 6.1

        1 2 3 4 5
          1 2 3 4 
            1 2 3 
              1 2 
                1 

    // pattern 6.2

        5 4 3 2 1
          4 3 2 1
            3 2 1
              2 1
                1

    // pattern 6.3

      5 4 3 2 1 
        5 4 3 2
          5 4 3
            5 4
              5

    
    // pattern 7

                * 
              * * * 
            * * * * * 
          * * * * * * *  
        * * * * * * * * *
    
    // pattern 7_1

                * 
              *   * 
            *       * 
          *           *  
        * * * * * * * * *

    
    // pattern 8

        * * * * * * * * *         
          * * * * * * *     
            * * * * *              
              * * *         
                *
    
    // pattern 9

                * 
              * * * 
            * * * * * 
          * * * * * * *  
        * * * * * * * * *
        * * * * * * * * *         
          * * * * * * *     
            * * * * *              
              * * *         
                *
    
    // pattern 10

    *
    * *
    * * * 
    * * * *
    * * * * *
    * * * * 
    * * * 
    * * 
    * 
    
    // pattern 11

    1
    0 1
    1 0 1 
    0 1 0 1 
    1 0 1 0 1 

    // pattern_12

    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1 

    // pattern 13

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

    // pattern : 14

    A 
    A B 
    A B C 
    A B C D 
    A B C D E 
    
    // pattern 14_1

    A 
    B C 
    D E F 
    G H I J 
    K L M N O 
    
    // pattern 15 

    A B C D E 
    A B C D 
    A B C 
    A B 
    A 
    
    // pattern 15_1

    A B C D E
    F G H I
    J K L 
    M N 
    O
    
    // pattern 16

    A         
    B B       
    C C C     
    D D D D   
    E E E E E

    // pattern 17

                A
              A B A
            A B C B A
          A B C D C B A
        A B C D E D C B A


    // pattern 18

    E 
    D E 
    C D E 
    B C D E 
    A B C D E

    // pattern 19 

    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *

    // pattern 20

    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * * 
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    
    // pattern 21

    * * * * *
    *       *
    *       *
    *       *
    * * * * *
    
    // pattern 22

    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5


*/

/* 
    pattern 1

    * * * * 
    * * * * 
    * * * * 
    * * * * 
    
*/

#include <bits/stdc++.h>
using namespace std;

// void pattern_1(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_1(n); // Call the function to print the pattern
//     return 0;
// }


/*
  // pattern 2

    *
    * * 
    * * *
    * * * * 
    * * * * * 
*/
void pattern_2(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern_2(n); // Call the function to print the pattern
    return 0;
}
