/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:44:27 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/03 13:45:43 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array {
private:
  T *_arr;
  unsigned int _size;

public:
  Array();
  Array(unsigned int size);
  Array(const Array &arr);
  ~Array() {
    if (arr != nullptr) {
      delete[] _arr;
    }
  };

  Array &operator=(const Array &other) {
    if (this == &other) {
      return;
    }
    if (this->_arr != nullptr) {
      delete[] arr;
    }
  };

  T &operator[](unsigned int i) {
    if (i >= _size) {
      throw OutOfBoundsException();
    }
    return _arr[i];
  }

  const T &operator[](unsigned int i) {
    if (i >= _size) {
      throw OutOfBoundsException();
    }
    return _arr[i];
  }

  unsigned int size() const { return _size; }

  class OutOfBoundsException : public std::exception {
  public:
    const char *what() const throw() { return "Error: Index out of bounds"; }
  };
};

#include "Array.tpp"

#endif