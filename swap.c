/**
 * Swaps 2 values, delievered using pointers.
 * Returns 0 if Success
 * Returns -1 or -2 in case when pointer is NULL
 */
int iswap( long int *P1, long int *P2 ) {
    long int BufferAB = 0 ;

    if ( ! P1 ) return -1 ;
    if ( ! P2 ) return -2 ;

    BufferAB = *P2 ;
    *P2 = *P1 ;
    *P1 = BufferAB ;

    return 0 ;
}
