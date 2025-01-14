/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:20:12 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/30 11:59:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    // Testing for array
    std::array<int, 5> stdarr = {1, 2, 3, 4, 5};
    
    auto stdarrIt = easyfind(stdarr, 1);

    if (stdarrIt != stdarr.end())
        std::cout << "Found number at position in Array: " << *stdarrIt << std::endl;
    else 
        std::cout << "Didn't find your number in the array" << std::endl;

    // Testing for vector
    std::vector<int> vec = {10, 20 , 30 , 40, 50};

    auto vecIt = easyfind(vec, 30);

    if (vecIt != vec.end())
        std::cout << "Found number at position in vector: " << *vecIt << std::endl;
    else 
        std::cout << "Didn't find your number in the vector" << std::endl;

    // Testing for set
    std::set<int> set = {10, 9, 8, 7, 6, 5};

    auto setIt = easyfind(set, 5);

    if (setIt != set.end())
        std::cout << "Found number at position in set: " << *setIt << std::endl;
    else 
        std::cout << "Didn't find your number in the set" << std::endl;

    return (0);
}