/*
 * Multiplication Principle
 * */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	/**
	 * You have 2 pant[1 and 2] and you have 3 shirt [A,B,C], how many diffriend ways you can wear shirt and pant.
	 * You weare Pant 1 and then weare theree shirt A,B,C, that means 1A, 1B, 1C
	 * And if you weare Pant 2 and then you weare shirt A,B,C that means 2A, 2B, 2C
	 * Here six diffrent ways you can weare pant and shirt. 
	 * That means diffrent ways = Number of pant * Number of shirt.
	 * */
	 
	 int numOfPant, numOfShirt;
	 
	 cout << "Enter number of pant : ";
	 cin >> numOfPant;
	 
	 cout << "Enter number of shirt : ";
	 cin >> numOfShirt;
	 
	 cout << "Total Diffrient ways = " << numOfPant*numOfShirt << endl;
	 
	 
	 /**
	  * Your works is to create 4 digit password and each digit could be 0-9 inclusive.
	  * How many diffrient ways you can create password?
	  * 
	  * For first digit you can choose any digit betweent 0-9, so you have 10 choice
	  * For second digit you can choose andy digit between 0-9, so here you have also 10 chosice
	  * For third digit you can choose andy digit between 0-9, so here you have also 10 chosice
	  * For fourth digit you can choose andy digit between 0-9, so here you have also 10 chosice
	  * 
	  * So here number of diffrient choice = 10*10*10*10 = 10^4 from Multiplication principle
	  * 
	  * */
	
	return 0;
}

