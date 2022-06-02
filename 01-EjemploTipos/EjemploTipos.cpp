// Header Comments

// EjemploTipos.cpp
// Trabajo #1 para AED
// Chiochetti Alejo
// 2022041

#include <cassert>



int main() {

	//Booleanos
	
	assert(true != false);
	assert(true);
	assert(false or true);
	assert(true and true);
	assert(not false);	
	assert((false and false) or (true and true) or (true and true));

	//Char
	
	assert('a' == 'a');
	assert('y' > 'x');
	assert('a' + 0 == 'a');
	
	//Unsigned
	
	assert(10u / 2u == 5u);
	assert(1u * 0u == 0u);
	
	//Enteros
	
	assert(0 == (1+2-3*4/5)*0);
	assert(10 != 100);
	assert(3452 * 283 == 976916 );
	
	//Float
	
	assert(1.6 > 1.4);
	assert(100 != 10.0);
	assert(34 == 34.0);
	assert(1000 - 500 == 500.0);
	assert(15 == (7.5 * 2));
	
	
	
    return 0;
}
