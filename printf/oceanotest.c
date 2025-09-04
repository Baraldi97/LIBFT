/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oceanotest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta <rcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:04:59 by rcosta            #+#    #+#             */
/*   Updated: 2025/09/04 16:47:15 by rcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Here we're gonna use variadic fucntion to calculate the avarage age of people

#include <stdarg.h>
#include <stdio.h>

// Creating the avarage function
float	avarage(int n, ...)
{
	va_list	ap;	// usually va_list is declared as ap, it stands for "argument pointer"
	int		total;
	int 	i;

	va_start(ap, n); // n is the number of arguments tha'ts gonna be there. 
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int); // "Take the next argument from the list (va_arg), of type int, and add it to total."
		++i;
	}
	return ((float)total/n);
}

int	main()
{
	float	avarage_age;
	
	avarage_age = avarage(3, 10, 15, 2); // 5 here, or the first number, is actually a indicator of hojw many arguments are here
	printf("The avarage age of those 3 pople is %f\n", avarage_age);
}