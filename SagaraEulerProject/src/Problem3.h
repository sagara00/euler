/*
 * Problem3.h
 *
 *  Created on: 2014. 10. 30.
 *      Author: Administrator
 */

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#ifndef PROBLEM3_H_
#define PROBLEM3_H_

class Problem3 {
public:
	Problem3();
	virtual ~Problem3();
	vector<long long> getFactorizePrimeFactor(long long);
	bool isPrime(long);
};
#endif /* PROBLEM3_H_ */

