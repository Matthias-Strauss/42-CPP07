/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:44:27 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/18 14:44:00 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
  T *_arr;
  unsigned int _size;

public:
  Array();
  Array(unsigned int size);
  Array(const Array &arr);
  ~Array();

  Array &operator=(const Array &other);
  T &operator[](unsigned int i);
  const T &operator[](unsigned int i) const;

  unsigned int size() const;

  class OutOfBoundsException : public std::exception
  {
  public:
    const char *what() const throw();
  };
};

#include "Array.tpp"

#endif