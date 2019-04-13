#include<iostream>

//main_________________________________________________________________________
int
main (int argc , char * argv []) {

std::cout << "Aufgabe 1.3" << std::endl;

int iResult{19};
bool bFinished{false};

do {

    iResult++;
       bFinished = true;

    for ( int iDivisor = 2; iDivisor < 21; iDivisor++ ) {
        
        if ( iResult % iDivisor ) {

            bFinished = false;
            break;
		}
	}
} while( !bFinished );

    std::cout << "Das Ergbebnis lautet: " << iResult << std::endl;
return 0;

}//main

