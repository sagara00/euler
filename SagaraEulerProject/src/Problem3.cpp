/*
 * Problem3.cpp
 *
 *  Created on: 2014. 10. 30.
 *      Author: Administrator
 */

#include "Problem3.h"

using namespace std;

Problem3::Problem3() {
	// TODO Auto-generated constructor stub

}

Problem3::~Problem3() {
	// TODO Auto-generated destructor stub
}

vector<long long> Problem3::getFactorizePrimeFactor(long long inputNum)
{

	vector<long long> arr;
	unsigned long max = sqrt(inputNum);
	for (unsigned long div = 2; div <= max; div++)
	{
		if (inputNum % div == 0)
		{
			inputNum = inputNum / div;
			arr.push_back(div);
		}
	}
	if (inputNum > 1)	// except 1
	{
		arr.push_back(inputNum);
	}

	return arr;
}

bool Problem3::isPrime(long n)
{
    if( n%2 == 0 )
    {
    	return false;
    }

    for( long r = 3 ; r*r <= n ; r += 2 )
    {
    	//cout<<n<<"%"<<r<<endl;
        if( n%r == 0 )
		{
			return false;
		}
    }
    return true;
}
