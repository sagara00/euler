/*
 * Problem4.cpp
 *
 *  Created on: 2014. 10. 30.
 *      Author: Administrator
 */

#include "Problem4.h"
using namespace std;

Problem4::Problem4() {
	// TODO Auto-generated constructor stub
	palindrome = 0;
}

Problem4::~Problem4() {
	// TODO Auto-generated destructor stub
}

long Problem4::getLargestPalindromeDigit3()
{
	long result = 0;
	long LargestPalindrome = 0;

	for (int term1 = 100; term1<999; term1++)
	{
		for (int term2 = 100; term2<999; term2++)
		{

			result = term1 * term2;
			if ( isPalindrome(result) )
			{
				if (LargestPalindrome < result)
				{
					LargestPalindrome = result;
				}
			}
		}
	}
	return LargestPalindrome;
}

bool Problem4::isPalindrome(long input)
{

	char str[6+1];
	ltoa(input, str , 10);

	if (str[0] == str[5]
	 && str[1] == str[4]
	 && str[2] == str[3])
	{
		return true;
	}
	else
	{
		return false;
	}

}
