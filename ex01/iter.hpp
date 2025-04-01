/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:31:05 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/01 14:46:58 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T> void iter(T *arr, std::size_t len, void (*f)(T &)) {

  if (!arr || len == 0)
    return;

  for (std::size_t i = 0; i < len; ++i) {
    f(arr[i]);
  }
}

#endif