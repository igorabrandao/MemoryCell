/**
* Uma classe para simular uma ce ́lula de mem ́oria inteira.
* */

#ifndef MCELL_H
#define MCELL_H

#include <iostream>

template < typename T >
class MCell {
    public:
        explicit MCell( T initVal = T() );

        ~MCell();

        T read( ) const;

        void write( const T& x );

        const MCell & operator=( const MCell & );

        bool operator==( const MCell & ) const;

    private:
        T *mData; // Ponteiro
};
#include "mcell.cpp"
#endif