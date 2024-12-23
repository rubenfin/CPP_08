/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:20:33 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 13:40:18 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <set>


template<typename T>
typename T::const_iterator easyfind(const T& container, int n)
{
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
    {
        if (*it == n)
            return it;
    }
    return container.end();
}

#endif