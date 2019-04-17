#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

//factorial________________________________________________________________
int
factorial( uint64_t iValue ) {

    int iResult{1};

    switch ( iValue ) {

    case 0:
    case 1:
            break;

    default:
        iResult = iValue * factorial( iValue - 1 );
        break;
    }

    return iResult;
}//factorial


TEST_CASE( "describe_sum_multiples", "[sum_multiples]" ) {

    REQUIRE( factorial(0)  == 1 );
    REQUIRE( factorial(1)  == 1 );
    REQUIRE( factorial(5)  == 120 );
    REQUIRE( factorial(10) == 3628800 );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    std::cout << "Aufgabe 1.13" << std::endl;
       return Catch::Session().run( argc, argv );
}//main
