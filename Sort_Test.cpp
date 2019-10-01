#include "Sort.h"
#include "Definiciones.h"
#include "catch.hpp"

using namespace std;


TEST_CASE("Sort") {
    SECTION("Order array by quick sort") {
        vector<int>v1={1,7,6,8,9,0};
        Sorter<int> p(v1);
        p.Quick();

        REQUIRE(v1[0] == 0);
        REQUIRE(v1[1]==1);
    }
    /*SECTION("Order vector by quick sort") {

        Sorter<QuickSort> p1;
        p1.add( 1, 0 );
        p1.add(-1, 1 );
        p1.add(6, 3 );
        auto p2 = p1;
        p2 = p2 + 10;

        REQUIRE(get_expression(p1) == "1-1x^1+6x^3");
        REQUIRE(get_expression(p2) == "11-1x^1+6x^3");
    }
    SECTION("Order Map by heap sort") {

        Polynomial p1;
        p1.add( 1, 0 );
        p1.add(-1, 1 );
        p1.add( 6, 3 );

        REQUIRE(p1.degree() == 3);
    }
    SECTION("order Array by shell sort") {

        Polynomial p1;
        p1.add( 1, 0 );
        p1.add( -1, 1 );
        p1.add( 6, 3 );

        Polynomial p2;
        p2.add(-1, 1 );
        p2.add( 4, 2 );
        p2.add( 3, 3 );

        auto p3 = p1 + p2;
        p1 += p2;
        REQUIRE(get_expression(p2) == "-1x^1+4x^2+3x^3");
        REQUIRE(get_expression(p3) == "1-2x^1+4x^2+9x^3");
        REQUIRE(get_expression(p1) == "1-2x^1+4x^2+9x^3");
    }

    SECTION("order Vector by heap sort") {

        Polynomial p1;
        p1.add( -1, 1 );
        p1.add( 4, 2 );
        p1.add( 3, 3 );

        auto p2 = 10 + p1;
        auto p3 = p1 + 10;
        p1 += 10;
        REQUIRE(get_expression(p2) == "10-1x^1+4x^2+3x^3");
        REQUIRE(get_expression(p3) == "10-1x^1+4x^2+3x^3");
        REQUIRE(get_expression(p1) == "10-1x^1+4x^2+3x^3");
    }

    SECTION("Duplicated terms") {
        try {
            Polynomial p1;
            p1.add( 1, 1 );
            p1.add( 1, 1 );

        }
        catch (const exception& e) {
            REQUIRE(e.what() == "Term exists in Polynomial");
        }
    }*/
}