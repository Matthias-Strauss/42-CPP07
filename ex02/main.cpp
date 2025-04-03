/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:42:44 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/03 15:52:27 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750

int main(void) {
  int *a = new int();

  std::cout << "std::cout << a << std::endl : ";
  std::cout << a << std::endl;
  std::cout << "std::cout << *a << std::endl : ";
  std::cout << *a << std::endl;
  std::cout << std::endl;
  delete a;

  std::cout << "Creating Array with size: " << MAX_VAL << std::endl;
  Array<int> numbers(MAX_VAL);
  int *mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  // SCOPE
  {
    std::cout << "Creating tmp Array by copy" << std::endl;
    Array<int> tmp = numbers;
    std::cout << "Creating test Array by copy of tmp" << std::endl;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }
  try {
    std::cout << "Trying to access numbers[-2]" << std::endl;
    numbers[-2] = 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::cout << "Trying to access numbers[MAX_VAL]" << std::endl;
    numbers[MAX_VAL] = 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror; //

  std::cout << "\n--- Testing with float ---" << std::endl;
  Array<float> floatArray(5);
  for (int i = 0; i < 5; ++i) {
    floatArray[i] = i + 0.5f;
    std::cout << "floatArray[" << i << "] = " << floatArray[i] << std::endl;
  }

  std::cout << "\n--- Testing with string ---" << std::endl;
  Array<std::string> stringArray(3);
  stringArray[0] = "Hello";
  stringArray[1] = "World";
  stringArray[2] = "!";
  for (int i = 0; i < 3; ++i) {
    std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
  }

  return 0;
}
