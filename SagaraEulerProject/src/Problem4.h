/*
 * Problem4.h
 *
 *  Created on: 2014. 10. 30.
 *      Author: Administrator
 */

#ifndef PROBLEM4_H_
#define PROBLEM4_H_

#include <string>
#include <iostream>
#include <stdlib.h>

class Problem4 {
private:
	long palindrome;
public:
	Problem4();
	long getLargestPalindromeDigit3();
	bool isPalindrome(long);
	virtual ~Problem4();
};

#endif /* PROBLEM4_H_ */
