#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"

using namespace std;

void problem2()
{
		Problem2* pb2 = new Problem2();
		long maximum = 4000000;
		long answer = 0;
		answer = pb2->ComputeFibonacci(maximum);

		delete pb2;

		cout<<"answer"<<answer<<endl;
}

void problem3()
{
	Problem3 pb3;

	vector<long long> result;
	result = pb3.getFactorizePrimeFactor(600851475143);
	//result = pb3.getFactorizePrimeFactor(100);

	for (unsigned long i=0; i<result.size() ; i++ )
	{
		cout<<result[i]<<endl;
	}
}

void problem4()
{
	Problem4 pb4;
	long result = pb4.getLargestPalindromeDigit3();
	cout<<result;
}

int main()
{
	//problem2();
	//problem3();
	problem4();


	return 0;
}
