/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:20:12 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 14:31:40 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::array<int, 5> stdarr = {1, 2, 3, 4, 5};
    std::vector<int> vec = {10, 20 , 30 , 40, 50};
    
    auto stdarrIt = easyfind(stdarr, 1);

    if (stdarrIt != stdarr.end())
        std::cout << "Found number at position in Array: " << *stdarrIt << std::endl;
    else 
        std::cout << "Didn't find your number in the array" << std::endl;

    auto vecIt = easyfind(vec, 30);

    if (vecIt != vec.end())
        std::cout << "Found number at position in vector: " << *vecIt << std::endl;
    else 
        std::cout << "Didn't find your number in the array" << std::endl;
    return (0);
}