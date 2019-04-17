#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <stdint.h>

const double dKM_PER_MILE{1.609344}; //Umrechnungswert aus Wikipedia (engl.&amerik. Landmeile)

//mile_to_kilometer____________________________________________________________
double
mile_to_kilometer( double dMiles ) {
 
            return dMiles * dKM_PER_MILE;
}//mile_to_kilometer


TEST_CASE( "describe_mile_to_kilometer", "[mile_to_kilometer]" ) {

    REQUIRE( 0.0         == Approx( mile_to_kilometer( 0.0 ) ) );
    REQUIRE( dKM_PER_MILE == Approx( mile_to_kilometer( 1.0 ) ) );
    REQUIRE( 36.612576   == Approx( mile_to_kilometer( 22.75 ) ) );
}


//main_________________________________________________________________________
int
main (int argc , char * argv []) {
    
    int iResult = Catch::Session().run( argc, argv );
    
    std::cout << "Aufgabe 1.15" << std::endl;
    
    std::cout << "Geben Sie hier die Strecke in Meilen ein: ";
    double dRoute{0.0};
    std::cin >> dRoute;
    std::cout.precision( 6 ); //Anzahl Nachkommastellen
    std::cout << "Die Strecke von " <<dRoute << " Meilen entspricht etwa "
              << mile_to_kilometer( dRoute ) << " km." << std::endl;
    
    return iResult;
}//main
