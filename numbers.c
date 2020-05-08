#include <stdio.h>

/**
 * Swaps 2 values, delievered using pointers.
 * Returns 0 if Success
 * Returns -1 if Failed
 */
int iswap( long int *P1, long int *P2 ) {
    long int BufferAB = 0 ;

    if ( ! P1 ) return -1 ;
    if ( ! P2 ) return -2 ;

    BufferAB = *P2
    *P2 = *P1 ;
    *P1 = BufferAB ;

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


    }
    printf( "A = %ld\nB = %ld\n", A, B ) ;

    return 0;
}
