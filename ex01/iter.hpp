/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:31:05 by mstrauss          #+#    #+#             */
/*   Updated: 2025/04/01 14:36:29 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void iter(T &arr, u_int len, void (*f)(T &)) {

  if (arr == NULL)
    return;

  for (u_int i = 0; i < len; ++i) {
    f(arr[i]);
  }
}
#endif
