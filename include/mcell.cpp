/**
* Uma classe para simular uma ce ́lula de mem ́oria inteira.
* */

#include "mcell.h"

template< typename T >
MCell<T>::MCell( T initVal ) : mData( new T )
{
    *mData = initVal;
    //std::cout << "Entrei no [ MCELL ]!\n";
}

template< typename T >
MCell<T>::~MCell( )
{
	//std::cout << "Entrei no [ ~MCELL ]!\n";
	delete mData;
}

template< typename T >
T MCell<T>::read( ) const
{ 
    return *mData;
}

template< typename T >
void MCell<T>::write( const T& x )
{ 
    *mData = x;
}

template< typename T >
const MCell<T> &
MCell<T>::operator=( const MCell<T> & rhs )
{ 
    //std::cout << "Entrei na operacao de atribuicao!\n";
    if ( this != &rhs ) // Teste padrao de auto-copia
    {
    	*(this->mData) = *(rhs.mData);
    }
    return *this;
}

template< typename T >
bool
MCell<T>::operator==( const MCell<T> & rhs ) const
{
	// Astericos resferencia do endereço de memória para o valor
	return (*mData == *rhs.mData);
}