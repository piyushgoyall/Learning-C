#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*

    BITWISE AND
    A  B  A&B
    0  0   0
    0  1   0
    1  0   0
    1  1   1

    */
    int a = 12; // 1100
    int b = 9;  // 1001
    int c = a & b;

    /*

        BITWISE OR
        A  B  A|B
        0  0   0
        0  1   1
        1  0   1
        1  1   1

    */

    /*

     BITWISE EXCLUSIVE OR
     A  B  A&B
     0  0   0
     0  1   1
     1  0   1
     1  1   0

     */

//    BITWISE COMPLIMENT
    int a=10; //1010
    int b = ~a; //0101
    return 0;
}
