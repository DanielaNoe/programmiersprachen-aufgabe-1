#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

//gcd__________________________________________________________________________
int
checksum( int iArg ) {

    int iResult{0};

while ( iArg > 0 ) {
        
        iResult += iArg % 10;
        iArg    /= 10;
}
        
    return iResult;
}//checksum


TEST_CASE( "describe_checksum", "[checksum]" ) {

    REQUIRE( checksum( 0 )      == 0 );
    REQUIRE( checksum( 2 )      == 2 );
    REQUIRE( checksum( 19 )     == 10 );
    REQUIRE( checksum( 123456 ) == 21 );
    REQUIRE( checksum( 100 )    == 1 );
    REQUIRE( checksum( 45031 )  == 13 );
}



//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    return Catch::Session().run( argc, argv );
}//main


