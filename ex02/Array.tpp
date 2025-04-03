/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:44:22 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/03 15:34:03 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"
#include <iostream>

template <typename T> Array<T>::Array() : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : _arr(nullptr), _size(0) {
  *this = other;
}

template <typename T> Array<T>::~Array() {
  if (_arr != nullptr) {
    delete[] _arr;
    _arr = nullptr;
  }
};

template <typename T> Array<T> &Array<T>::operator=(const Array &other) {
  if (this != &other) {
    delete[] _arr;
    _size = other._size;
    _arr = new T[_size];

    for (unsigned int i = 0; i < _size; ++i) {
      _arr[i] = other._arr[i];
    }
  }
  return *this;
}

template <typename T> T &Array<T>::operator[](unsigned int i) {
  if (i >= _size) {
    throw OutOfBoundsException();
  }
  return _arr[i];
}

template <typename T> const T &Array<T>::operator[](unsigned int i) const {
  if (i >= _size) {
    throw OutOfBoundsException();
  }
  return _arr[i];
}

template <typename T> unsigned int Array<T>::size() const { return _size; }

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw() {
  return "Error: Index out of bounds";
}

#endif
