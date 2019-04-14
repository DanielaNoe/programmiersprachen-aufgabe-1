#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <stdint.h>

//is_prime_____________________________________________________________________
bool
is_prime( uint32_t iValue ) {
    
    bool bResult = true;
    
    switch ( iValue ) {

    case 0:
    case 1:
            bResult = false;
            break;
        
    case 2: //standardmäßig true --> effektiv
        break;
        
    default:        
        for ( int iCount = 2; iCount < iValue; iCount++ ) {
                
            if ( iValue % iCount == 0 ) {
            
                bResult = false;
                break;
            }
        }
            break;
    }
    
    return bResult;
}//is_prime


TEST_CASE( "describe_is_prime", "[is_prime]" ) {

    REQUIRE( false == is_prime( 0 ) );
    REQUIRE( false == is_prime( 1 ) );
    REQUIRE( true  == is_prime( 2 ) );
    REQUIRE( true  == is_prime( 3 ) );
    REQUIRE( false == is_prime( 4 ) );
    REQUIRE( true  == is_prime( 17 ) );
    REQUIRE( false == is_prime( 18 ) );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {

    std::cout << "Aufgabe 1.14" << std::endl;
       return Catch::Session().run( argc, argv );
}//main
