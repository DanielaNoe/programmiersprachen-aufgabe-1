#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

//gcd__________________________________________________________________________
int
gcd( int a, int b ) {

    int TempVal;

    while ( b > 0 ) {
        
        TempVal = b;
        b        = a % b;
        a       = TempVal;
    }
        
    return a;
}//gcd


TEST_CASE( "describe_gcd", "[gcd]" ) {

    REQUIRE( gcd( 2, 4 )   == 2 );
    REQUIRE( gcd( 9, 6 )   == 3 );
    REQUIRE( gcd( 6, 9 )   == 3 );
    REQUIRE( gcd( 3, 7 )   == 1 );
    REQUIRE( gcd( 24, 18 ) == 6 );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    return Catch::Session().run( argc, argv );
}//main


