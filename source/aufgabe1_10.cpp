#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>

//sum_multiples________________________________________________________________
int
sum_multiples( void ) {

    int iResult{0};
       
    for ( int iCount = 1; iCount < 1001; iCount++ ) {
        
        if ( iCount % 3 == 0 or iCount % 5 == 0 ) {
            
            iResult += iCount;
        }
    }
 
    return iResult;
}//sum_multiples


TEST_CASE( "describe_sum_multiples", "[sum_multiples]" ) {

    REQUIRE( (sum_multiples() % 3 == 5 or sum_multiples() % 3 == 0) );
    REQUIRE( (sum_multiples() % 5 == 3 or sum_multiples() % 5 == 0) );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    std::cout << "Aufgabe 1.10" << std::endl;
       std::cout << "Das Ergebnis von sum_multiples() ist: " << sum_multiples() << std::endl;

    return Catch::Session().run( argc, argv );

}//main
