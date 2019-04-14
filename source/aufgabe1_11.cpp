#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

//fractional___________________________________________________________________
double
fractional( double dValue ) {

    double dIntPart{0.0};
    
    //teilt Zahl (dValue) in Ganzzahlanteil (dIntPart) und Nachkommaanzahlanteil (Rückgabewert)
         return modf( dValue , &dIntPart );
}//fractional



TEST_CASE( "describe_fractional", "[fractional]" ) {

    REQUIRE( 0.2345 == Approx( fractional( 3.2345 ) ) );
    REQUIRE( 0.21   == Approx( fractional( 0.21 ) ) );
    REQUIRE( -0.271 == Approx( fractional( -1.271 ) ) );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {
    
    std::cout << "Aufgabe 1.11" << std::endl;
    
    return Catch::Session().run( argc, argv );
}//main

