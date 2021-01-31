/*
 * Permutaion and Combination
 * */

#include <bits/stdc++.h>

using namespace std;


double nCr(double n, double r)
{
	/*
	* n!/((n-r)!*r!)
	* = 1*2*3....n / (1*2*3...(n-r) * 1*2*3....r)
	* = n-r+1 * n-r+2 .... n / 1*2*3....r
	*/
	
	double res=1;
	for(double i=1;i<=r;i++)
	{
		res*=n+1-i;
		res/=i;
	}
	return res;
}

int main()
{
	/**
	  * Your works is to create 4 digit(4 distinct digit) password and each digit could be 0-9 inclusive.
	  * How many diffrient ways you can create password?
	  * 
	  * For first digit you can choose any digit betweent 0-9, so you have 10 choice
	  * For second digit you can choose any digit between 0-9 except first digit, so here you have 9 chosice
	  * For third digit you can choose any digit between 0-9 except first and second digit, so here you have 8 chosice
	  * For fourth digit you can choose any digit between 0-9 except first, second and third, so here you have 7 chosice
	  * 
	  * So here number of diffrient choice = 10*9*8*7
	  * 
	  * So here 10 digit and you need to create 4 digit password, that means how many diffrient ways you can take 4 digit from
	  * 10 digt maintain constarint = 10!/(10-4)! = 10*9*8*7 = nPr = n!/(n-r)!
	  * Number of permutaion = nPr
	  * 
	  * 
	  * Suppose you create 2 password (1 2 3 4) and (1 3 2 4)
	  * Now consider these password are same that means passwords dosen't matter their order.
	  * So now how many diffrient ways you can create 4 digit(distinct 4 digit) password from 10 digit if they don't matter order?
	  * 
	  * For first digit your choice is 10 and suppose you take 1
	  * For second digit your choice is 9 and you take 2
	  * For third digit your choice is 8 and you take 3
	  * For fourth digit your choice is 7 and you take 4
	  * 
	  * So your password is (1, 2, 3, 4)
	  * if you apply nPr formula you get many combination for (1, 2, 3, 4), like (2, 3, 4, 1), (1, 4, 2, 3), (2, 1, 4, 3)...
	  * But all of these are same. So you should concider these password is one password.
	  * 
	  * So you shoul find how many combination get from (1, 2, 3, 4). it is 4!
	  * 
	  * So diffrient ways to create 4 digit password from 10 digit password(order dosen't matter) = N!/((n-r)!*r!) = nCr
	  * Number of combination = nCr
	  * 
	  * */
	  
	  
	
	return 0;
}

