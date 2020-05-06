#include <stdio.h>

int iswap( long int *P1, long int *P2 ) {

    long int BufferAB = *P2 ;
    printf( "iSwap Called\nR1 = %ld\nR2 = %ld\n", *P1, *P2 ) ;
    *P2 = *P1 ;
    *P1 = BufferAB ;
    printf("R1 = %ld\nR2 = %ld\n", *P1, *P2 );

    return 0 ;
}

int main( int argc, char *argv[] ) {

    long int A = 0 ;
    long int B = 0 ;


    printf( "Please enter the first Int number "
            "(A) "
            "if it is possible : " ) ;
    scanf( "%ld", &A ) ;
    printf( "You have entered %ld\n", A ) ;


    printf( "Enter the second number (B) pls : " ) ;
    scanf( "%ld", &B ) ;
    printf( "You have entered %ld\n", B ) ;

   // if ( A > B ) {
   //     long int BufferAB = B ;
   //     B = A ;
    //    A = BufferAB ;
    //}
    if ( A > B ) {

        int Result = iswap( &A, &B ) ;
        //debug
        if ( Result >= 0 ) {
            printf( "iswapSuccess\n" ) ;
        } else {
            printf( "iSwapFailed\n" ) ;
        }
        //end of debug

    }
    printf( "A = %ld\nB = %ld\n", A, B ) ;

    return 0;
}
