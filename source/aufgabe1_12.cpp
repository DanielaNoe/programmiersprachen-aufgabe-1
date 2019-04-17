#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

//volume_______________________________________________________________________
double
volume( double dRadius, double dHeight ) {

    return M_PI * dRadius * dRadius * dHeight;
}//volume

//surface______________________________________________________________________
double
surface( double dRadius, double dHeight ) {

    return 2.0 * M_PI * dRadius * ( dRadius + dHeight );
}//surface

TEST_CASE( "describe_volume", "[volume]" ) {

    REQUIRE( M_PI          == Approx( volume( 1.0, 1.0 ) ) );
    REQUIRE( 1.01787602    == Approx( volume( 0.6, 0.9 ) ) );
}

TEST_CASE( "describe_surface", "[surface]" ) {

    REQUIRE( 4.0 * M_PI      == Approx( surface( 1.0, 1.0 ) ) );
    REQUIRE( 9.0/5.0 * M_PI  == Approx( surface( 0.6, 0.9 ) ) );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    std::cout << "Aufgabe 1.12" << std::endl;

    return Catch::Session().run( argc, argv );
}//main
