/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:35:34 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/18 13:01:18 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
  return (a < b ? a : b);
}

template <typename T>
const T &max(const T &a, const T &b)
{
  return (a > b ? a : b);
}

#endif