#include <iostream>
#include "mcell.h"

using namespace std;

int main ()
{
    MCell<int> m; // Ou, MCell m(0); mas n~ao usar MCell m();
    MCell<int> n( 8 ); // Invocando construtor com parâmetros.

    //m.write( 5 );
    cout << "Cell contents: " << m.read( ) << endl;

    cout << "2nd Cell contents: " << n.read( ) << endl;
    n.write( 10 );
    cout << "new 2nd Cell contents: " << n.read( ) << endl;

    m.write( 2*n.read() );
    cout << "new Cell contents: " << m.read( ) << endl;

    MCell<int> o;
    o = m;

	cout << "[o]: Cell contents " << o.read( ) << endl;
	o.write( 100 );
	cout << "[m]: Cell contents " << m.read( ) << endl;
	cout << "[o]: New Cell contents " << o.read( ) << endl;

	MCell<std::string> ms("template");
	cout << ">>> Conteudo de ms eh: " << ms.read( ) << endl;	

	MCell<std::string> ms2("template");
	if ( ms == ms2 ) cout << ">>> Sao iguais!\n";
	else cout << ">>> Nao sao iguais!\n";

	MCell<std::string> ms3("templates");
	if ( ms2 == ms3 ) cout << ">>> Sao iguais!\n";
	else cout << ">>> Nao sao iguais!\n";

    return 0;
}
