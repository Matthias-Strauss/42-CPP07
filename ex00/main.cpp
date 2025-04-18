/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:09:01 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/18 12:27:43 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <array>
#include <iostream>

int main(void)
{
  int a = 2;
  int b = 3;

  std::cout << std::endl;
  std::cout << "initializing int a = " << a << ";" << std::endl;
  std::cout << "initializing int b = " << b << ";" << std::endl;
  std::cout << std::endl;

  std::cout << "... swapping a with b ..." << std::endl;
  ::swap(a, b);

  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << std::endl;

  std::cout << "... determining minimum of a & b ..." << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << std::endl;

  std::cout << "... determining maximum of a & b ..." << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::cout << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";
  std::cout << "initializing std::string c = " << "\"" << c << "\""
            << std::endl;
  std::cout << "initializing std::string d = " << "\"" << d << "\""
            << std::endl;
  std::cout << std::endl;

  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
  std::cout << std::endl;

  std::cout << "#####################" << std::endl;
  std::cout << "## ADDITIONAL TESTS #" << std::endl;
  std::cout << "#####################" << std::endl;
  std::cout << "" << std::endl;

  std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
  std::cout << "initializing arr1: ";
  for (int i = 0; i < 5; ++i)
  {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  std::array<int, 5> arr2 = {5, 4, 3, 2, 1};
  std::cout << "initializing arr2: ";
  for (int i = 0; i < 5; ++i)
  {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << "... swapping arr1 with arr2 ..." << std::endl;
  std::cout << std::endl;

  ::swap(arr1, arr2);

  std::cout << "arr1: ";
  for (int i = 0; i < 5; ++i)
  {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "arr2: ";
  for (int i = 0; i < 5; ++i)
  {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;

  return 0;
}

// EXPECTEED OUTPUT:
// a = 3, b = 2
// min(a, b) = 2
// max(a, b) = 3
// c = chaine2, d = chaine1
// min(c, d) = chaine1
// max(c, d) = chaine2
