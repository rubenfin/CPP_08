/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:20:12 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/28 16:03:11 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::array<int, 5> stdarr = {1, 2, 3, 4, 5};
    std::vector<int> vec = {10, 20 , 30 , 40, 50};
    
    auto stdarrIt = easyfind(stdarr, 1);

    if (stdarrIt != stdarr.end())
        std::cout << "Found number at position: " << *stdarrIt << std::endl;
    else 
        std::cout << "Didn't finy number in arry" << std::endl;
    return (0);
}