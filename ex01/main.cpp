/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:39:25 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/18 13:55:14 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
  std::cout << std::endl;

  int intArr[] = {1, 2, 3, 4, 5};
  size_t intArrLen = sizeof(intArr) / sizeof(intArr[0]);

  std::cout << "initializing int array ..." << std::endl;
  for (size_t i = 0; i < intArrLen; i++)
  {
    std::cout << intArr[i] << std::endl;
  }
  std::cout << std::endl;

  std::cout << "determining length of the int array ..." << std::endl;
  std::cout << "length of intArr[] = " << intArrLen << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "Applying iter function ..." << std::endl;
  iter(intArr, intArrLen, print<int>);
  std::cout << std::endl;
  std::cout << std::endl;

  char charArr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ',
                    'W', 'o', 'r', 'l', 'd', '!'};
  size_t charArrLen = sizeof(charArr) / sizeof(charArr[0]);

  std::cout << "initializing char array ..." << std::endl;
  for (size_t i = 0; i < charArrLen; ++i)
  {
    std::cout << charArr[i] << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "determining length of the char array ..." << std::endl;
  std::cout << "length of charArr[] = " << charArrLen << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "Applying iter function: ";
  std::cout << std::endl;
  iter(charArr, charArrLen, print<char>);
  std::cout << std::endl;

  return 0;
}

// std::cout << "" << std::endl;