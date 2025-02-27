#ifndef HELPER_TOOLS_HPP
#define HELPER_TOOLS_HPP

#include <string>
#include <map>
#include <functional>
#include <type_traits>
#include <stdexcept>
namespace osm
 {
  //====================================================
  //     GLOBAL HELPER VARIABLES
  //====================================================
  extern std::string output, error;

  //====================================================
  //     OPERATORS REDEFINITION
  //====================================================
  extern std::string operator * ( const std::string & generic_string, unsigned int integer );
  extern std::string operator * ( unsigned int integer, const std::string & generic_string );

  //====================================================
  //     TEMPLATE FUNCTIONS DEFINITION
  //====================================================
  template <typename T>
  extern std::runtime_error runtime_error_func( std::string beg, T variable, std::string end );

  template <typename T, typename R>
  extern T check_condition( std::function <bool()> condition, T return_it, R return_false );

  template <typename T>
  extern bool isFloatingPoint( const T & expression );
 }
#endif