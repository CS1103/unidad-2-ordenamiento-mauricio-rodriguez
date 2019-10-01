#include "Sort.h"
#include "Definiciones.h"
#include "catch.hpp"

using namespace std;


TEST_CASE("Sort") {
    SECTION("Order array by quick sort") {
        vector<int>v1={1,7,6,8,9,0};
        Sorter<int> p(v1);
        //p.quicksort(begin(v1),end(v1)-1);
        p.Quick();
        REQUIRE(v1[0] == 0);
        REQUIRE(v1[1]==1);
    }
    SECTION("Order vector by merge sort") {
        vector<int>v1={1,7,6,8,9,0};
        Sorter<int> p(v1);
        p.Merge();
        REQUIRE(v1[3]==7);
    }
    SECTION("Order Map by heap sort") {
        vector<int>v1={1,7,6,8,9,0};
        Sorter<int> p(v1);
        p.Heap();
        REQUIRE(v1[3] == 7);
    }
    SECTION("order Array by shell sort") {
        vector<int>v1={1,7,6,8,9,0};
        Sorter<int> p(v1);
        REQUIRE(v1[5]==9);

    }

}