/*
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
   pattern 2

    *
    * * 
    * * *
    * * * * 
    * * * * * 
*/
// void pattern_2(int n){
//     for(int i =0;i<n;i++){
//         for(int j = 0;j<=i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_2(n); // Call the function to print the pattern
//     return 0;
// }

/*
pattern 2_1

    *
    * *
    *   *
    *     *
    * * * * *
*/
// void pattern_2_1(int n){
//     for(int i = 1 ; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             if( i==n || j==1|| j==i){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_2_1(n); // Call the function to print the pattern
//     return 0;
// }



/*
 pattern 3

    1
    1 2
    1 2 3 
    1 2 3 4
    1 2 3 4 5
*/
// void pattern_3(int n){
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_3(n); // Call the function to print the pattern
//     return 0;
// }

/*
   pattern 4

    1
    2 2 
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/

// void pattern_4(int n){
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_4(n); // Call the function to print the pattern
//     return 0;
// }



/*
 pattern 5

    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
*/
// void pattern_5(int n){
//     for(int i =n ;i>=1;i--){
//         for(int j = 1;j<=i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_5(n); // Call the function to print the pattern
//     return 0;
// }


/* 
 pattern 5_1

    * * * * *
    *     *
    *   *
    * *
    * 
    
 */
// void pattern_5_1(int n){
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n-i+1; j++){
//             if(i==1|| j==n-i+1|| j==1){
//                 cout << "* ";
//             }
//             else cout << "  ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_5_1(n); // Call the function to print the pattern
//     return 0;
// }

/*
   pattern 6

    1 2 3 4 5
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/
// void pattern_6(int n){
//     for(int i = n;i >= 1;i--){
//         for(int j =1;j<=i;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_6(n); // Call the function to print the pattern
//     return 0;
// }



/*
  pattern 6.1

        1 2 3 4 5
          1 2 3 4 
            1 2 3 
              1 2 
                1 
*/
// void pattern_6_1(int n){
//     for(int i =0;i<n;i++){
//         for(int j =1;j<=i;j++){
//             cout << "  ";
//         }
//         // Here we start from "1" and go till "n-i"
//         for(int j = 1; j<=n-i;j++){
//             cout << j << " ";
//         }
//         cout << endl;

//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_6_1(n); // Call the function to print the pattern
//     return 0;
// }

/*

  pattern 6.2

        5 4 3 2 1
          4 3 2 1
            3 2 1
              2 1
                1
*/

// void pattern_6_2(int n){
//     for(int i = 1;i<=n;i++){
//         for(int j = 1; j < i ;j++){
//             cout << "  ";
//         }
//         // here we start from "n-i+1" & iterate the loop till "1"
//         for(int j = n-i+1; j >=1;j--){
//             cout << j << " ";
//         }
//         cout << endl ;
//     }

// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_6_2(n); // Call the function to print the pattern
//     return 0;
// }


/*
  pattern 6.3

      5 4 3 2 1 
        5 4 3 2
          5 4 3
            5 4
              5
*/
// void pattern_6_3(int n){
//     for(int i = 1; i<=n;i++){
//         for(int j = 1;j<i;j++){
//             cout << "  ";
//         }
//         for(int j = n; j>=i;j--){
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_6_3(n); // Call the function to print the pattern
//     return 0;
// }


/*
 pattern 7

                * 
              * * * 
            * * * * * 
          * * * * * * *  
        * * * * * * * * *
*/

// void pattern_7(int n ){

/* 
    Concept : 
                               n = 5
                               formula for star : (2*i -1 ) 
                    *             for i = 1    =>      1(stars)      
                  * * *           for i = 2    =>      3(stars)
                * * * * *         for i = 3    =>      5(stars)       
              * * * * * * *       for i = 4    =>      7(stars)
            * * * * * * * * *     for i = 5    =>      9(stars)
 
                                   formula for space :  (n-i)
                                   for i = 1    =>    4(spaces)
                                   for i = 2    =>    3(spaces)
                                   for i = 3    =>    2(spaces)
                                   for i = 4    =>    1(spaces)
                                   for i = 5    =>    0(spaces)
*/
    //  NOTE : In order to better understanding print "#" in a place of (" ") spaces.

    // i starts from "1" & goes till n
//     for(int i = 1; i <= n ;i++){
//         // formula for space : (n-i)
//         for(int j = 1 ; j <= (n-i); j++){
//             cout << "  ";
//         }
//         // formula for star : 2*i-1
//         for(int j = 1; j<=(2*i-1) ;j++){
//             cout << "* ";
//         }
//         // formula for space : (n-i)
//         for(int j = 1 ; j <= (n-i); j++){
//             cout << "  ";
//         }
//         cout << endl;
//     }
// }   


// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_7(n); // Call the function to print the pattern
//     return 0;
// }


/*

  pattern 7_1

                * 
              *   * 
            *       * 
          *           *  
        * * * * * * * * *
*/


// void pattern_7_1(int n){
//     for(int i=1; i<=n; i++){
//         // spaces
//         for(int j=1; j<=n-i; j++){
//             cout << "  ";
//         }
//         // stars
//         for(int j=1; j<=2*i-1; j++){
//             if(i==n || j==1 || j==2*i-1){
//                 cout << "* ";
//             }
//             else cout << "  ";
//         }
//         // spaces
//         for(int j=1; j<=n-i; j++){
//             cout << "  ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_7_1(n); // Call the function to print the pattern
//     return 0;
// }


/*
  pattern 8

        * * * * * * * * *         
          * * * * * * *     
            * * * * *              
              * * *         
                *
*/


// void pattern_8(int n){
/*
    Concept : 
                               n = 5
                               formula for star : (2*n - (2*i -1) ) 
            * * * * * * * * *   for i = 1    =>      9(stars)      
              * * * * * * *     for i = 2    =>      7(stars)
                * * * * *       for i = 3    =>      5(stars)       
                  * * *         for i = 4    =>      3(stars)
                    *           for i = 5    =>      1(stars)
 
                                   formula for space :  (i-1)
                                   for i = 1    =>    0(spaces)
                                   for i = 2    =>    1(spaces)
                                   for i = 3    =>    2(spaces)
                                   for i = 4    =>    3(spaces)
                                   for i = 5    =>    4(spaces)      
*/

//     for(int i = 1; i <=n ; i++){
//         for(int j = 1; j <=i-1;j++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= 2*n- (2*i-1);j++){
//             cout << "* ";
//         }
//         for(int j = 1; j <=i-1;j++){
//             cout << "  ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_8(n); // Call the function to print the pattern
//     return 0;
// }

/*
  pattern 9

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
*/


// void pattern_9(int n){
/*
     for this pattern combine pattern_(7 & 8)

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
*/

//     for(int i = 1 ; i<=n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout << "  ";
//         }
//         for(int j = 1; j<=2*i-1; j++){
//             cout << "* ";
//         }
//         for(int j = 1; j <= n-i; j++){
//             cout << "  ";
//         }
//         cout << endl;
//     }
//     for(int i=1; i <= n;i++){
//         for(int j=1;j <= i-1 ;j++){
//             cout << "  ";
//         }
//         for(int j =1; j<= 2*n-(2*i-1);j++){
//             cout << "* ";
//         }
//         for(int j=1;j <= i-1 ;j++){
//             cout << "  ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_9(n); // Call the function to print the pattern
//     return 0;
// }

/*
  pattern 10

    *
    * *
    * * * 
    * * * *
    * * * * *
    * * * * 
    * * * 
    * * 
    * 
*/

// void pattern_10(int n){
/*                         
            Concept : 
                        passed value of n : 5 

                            i starts from 1 till (2*-1)
                                        Start : 
    *                   `i = 1   ->         1
    * *`                 i = 2   ->         2                    
    * * *                i = 3   ->         3
    * * * *              i = 4   ->         4
    * * * * *            i = 5   ->         5   til n it's i, after the value of n, decrement happened.
    * * * *              i = 6   ->         4   from this we can use (2*n - i ) >> which fulfill our condition. => 2*5 - 6 = 4
    * * *                i = 7   ->         3                         2*5 - 7 = 3
    * *                  i = 8   ->         2                         2*5 - 8 = 2
    *                    i = 9   ->         1                         2*5 - 9 = 1
                                                Solution : we can use conditions (i<=n) for printing stars till n, & after when i > n -> it prints decrement value by (2*n-i) formula.
*/      


//     for(int i = 1; i <= 2*n - 1;i++){
//         if(i <= n){
//             for(int j = 1; j <= i; j++){
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int j = 1 ; j <= 2*n-i; j++){
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }


// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_10(n); // Call the function to print the pattern
//     return 0;
// }


/*
  pattern 11

    1
    0 1
    1 0 1 
    0 1 0 1 
    1 0 1 0 1 
*/

// void pattern_11(int n){
/* 
            basics but number are flip when it print 1 & it prints only 1 or 0 
                                                         starts with : 
    1                         i = 1(odd)          =>          odd  
    0 1                       i = 2(even)         =>          even
    1 0 1                     i = 3(odd)          =>          odd
    0 1 0 1                   i = 4(even)         =>          even
    1 0 1 0 1                 i = 5(odd)          =>          odd

        solution : we will use nested loop.
                        *  when our loop start with even no : we use for loop to print the rows in flip manner by simply using the condition of odd & even, like when our nested loop start with even no : we print "true" i.e 1, & else "false" which is 0
                        * when our loop start with even no : we use for loop to print the rows in flip manner by simply using the condition of odd & even, like when our nested loop start with odd no : we print "true", else we print "false".
                     
*/
//     int val = 1;
//     for(int i = 1; i<=n; i++){
//         if(i % 2 == 0){
//             for(int j = 1; j<=i;j++){
//                 (j % 2 == 0) ? cout << true << " " : cout << false << " ";
//             }
//         }
//         else{
//             for(int j = 1; j <=i;j++){
//                 (j % 2 != 0) ? cout << true << " " : cout << false << " ";
//             }
            
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     pattern_11(n); // Call the function to print the pattern
//     return 0;
// }


/*
  pattern_12

    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1 
*/

void pattern_12(int n){

/*
            This pattern is simillar to pattern 8, the difference is we have to print the numbers instead of spaces, & spaces in place of stars.
            
            * for first part, it's simple : we can use nested loop,with outer loop i & inner loop j : with printing the "j" value in inner loop loop & using condition (j<=i)
            * for space : 
                                                        for spaces : (2*n- 2*i)
    1                 1         i = 1       =>          8(spaces)  -> 10-2 = 8
    1 2             2 1         i = 2       =>          6(spaces)  -> 10-4 = 6
    1 2 3         3 2 1         i = 3       =>          4(spaces)  -> 10-6 = 4
    1 2 3 4     4 3 2 1         i = 4       =>          2(spaces)  -> 10-8 = 2
    1 2 3 4 5 5 4 3 2 1         i = 5       =>          0(spaces)  -> 10-10 = 0
            * note for better understanding print # instead of spaces.

            * for 3rd part : numbers start backward : pattern_6_2 explain well but it just inverted, but here is explained solution : 

                                                  -> start with value of outer loop ie. "i" say : and goes till 1
                                                  -> we can iterate loop fro i till 1, i.e : (j = i ; j>=1;j--)
                                1    i = 1    =>
                              2 1    i = 2    =>    
                            3 2 1    i = 3    => 
                          4 3 2 1    i = 4    => 
                        5 4 3 2 1    i = 5    => 

    * note for better understanding print # instead of spaces.
*/

    for(int i = 1; i<=n ;i++){
        // numbers 
        for(int j = 1; j<=i ;j++){
            cout << j << " ";
        }
        // spaces 
        for(int j = 1; j<=(2*n-2*i); j++){
            cout << "  ";
        }
        // numbers 
        for(int j = i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern_12(n); // Call the function to print the pattern
    return 0;
}