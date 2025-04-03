/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:44:22 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/03 13:59:26 by mstrauss         ###   ########.fr       */
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
  if (arr != nullptr) {
    delete[] _arr;
    _arr = nullptr;
  }
};

template <typename T> Array &operator=(const Array &other) {
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

template <typename T> unsigned int size() const { return _size; }

#endif
