/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:31:05 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/18 13:55:12 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void print(T &a) { std::cout << a << std::endl; }

template <typename T>
void iter(T *array, size_t length, void (*func)(T &))
{
  for (size_t i = 0; i < length; i++)
  {
    func(array[i]);
  }
}

#endif