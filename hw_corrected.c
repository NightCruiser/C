#include <stdio.h>

int main(int argc, char *argv[]) {

    long int A = 0 ;
    long int B = 0 ;


    printf( "Please enter the first Int number "
            "(A) "
            "if it is possible : " ) ;
    scanf("%ld", &A ) ;
    printf( "You have entered %ld\n", A ) ;


    printf( "Enter the second number (B) pls : " ) ;
    scanf("%ld", &B ) ;
    printf( "You have entered %ld\n", B ) ;

    if ( A > B ) {
        long int BufferAB = B ;
        B = A ;
        A = BufferAB ;
    }
    printf("A = %ld\nB = %ld\n", A, B ) ;

    return 0;
}
