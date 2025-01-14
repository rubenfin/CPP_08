/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:20:33 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/30 11:53:15 by rfinneru      ########   odam.nl         */
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
    return (std::find(container.begin(), container.end(), n));
}

#endif