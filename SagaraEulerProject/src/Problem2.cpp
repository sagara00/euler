/*
 * Problem2.cpp
 *
 *  Created on: 2014. 10. 28.
 *      Author: Administrator
 */

#include "Problem2.h"

using namespace std;

Problem2::Problem2() {
	// TODO Auto-generated constructor stub

}

Problem2::~Problem2() {
	// TODO Auto-generated destructor stub
}

long Problem2::ComputeFibonacci(long max)
{
	long evenSummary = 0;

	long start, addup, total;
	start = 1;
    addup = total = 2;

	//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	do
	{
		total = start + addup;
		start = addup;
		addup = total;

		if (total %2 == 0)
		{
			evenSummary += total;
		}

		//printf("fib: %ld", evenSummary);
		cout<<"fib:"<< total<<endl;
	} while (evenSummary < max );
	return evenSummary;
}


