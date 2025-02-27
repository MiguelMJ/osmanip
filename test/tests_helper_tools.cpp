#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS

#include <doctest.h>
#include <functional>
#include <string>
#include "../include/osmanip.hpp"
#include "../include/helper_tools.hpp"

using namespace osm;
using namespace std;

//====================================================
//     GLOBAL VARIABLES DEFINITION
//====================================================
const string example = "a";
const int integer = 2;

//====================================================
//     TESTING THE * REDEFINITION
//====================================================
TEST_CASE( "Testing the * redefinition for string multiplication by an integer." )
 {
  CHECK_EQ( example * 3, "aaa" );
  CHECK_EQ( 3 * example, "aaa" );
 }

//====================================================
//     TESTING THE "check condition" FUNCTION
//====================================================
TEST_CASE_TEMPLATE( "Testing the check_condition function.", T, string )
 {
  T test_string = "nice", null_str = "";

  CHECK_EQ( check_condition( [](){ return 3 < 4; }, test_string, null_str ), test_string );
  CHECK_EQ( check_condition( [](){ return 3 > 4; }, test_string, null_str ), null_str );
 }
  
//====================================================
//     TESTING THE "isFloatingPoint" FUNCTION
//====================================================
TEST_CASE_TEMPLATE( "Testing the isFLoatingPoint function.", T, double, float, long double )
 {
  T type;
  
  CHECK( !isFloatingPoint( integer ) );
  CHECK( isFloatingPoint( type ) );
 }

//====================================================
//     TESTING THE "runtime_error_func" FUNCTION
//==================================================== 
TEST_CASE_TEMPLATE( "Testing the runtime_error_func function.", T, string )
 {
  T var = "this";

  string test_string_hp =  "first" + static_cast <std::string>(" \"") +
                           static_cast <std::string>( var ) + 
                           static_cast <std::string>( "\" " ) +
                           "second" +
                           "\n";
                       
  CHECK_THROWS_AS( throw( runtime_error_func( "first", var, "second" ) ), runtime_error );
  CHECK_THROWS_MESSAGE( throw( runtime_error_func( "first", var, "second" ) ), test_string_hp );
 }