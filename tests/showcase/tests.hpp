/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpppp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:56:18 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 09:58:45 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include <libunit.hpp>

int test_routine( t_FinalResult *res );
int	ok_routine( t_FinalResult *res );

// tests.cpp
int	ok_test( void );
int	ko_test( void );
int	segv_test( void );

#endif