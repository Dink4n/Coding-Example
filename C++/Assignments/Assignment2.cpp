/*
 * Program to find the Average of the mark of Maths,Physics,Chemistry
 * 
 * Assignment2.cpp
 * 
 * Copyright 2020 Anu <uzumaki@uzumaki-H81M-S>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int maths,physics,chemistry; double average;
	cout << "Mark of Maths: "; cin >> maths;
	cout << "Mark of Physics: "; cin >> physics;
	cout << "Mark of Chemistry: "; cin >> chemistry;
	average = (maths + physics + chemistry)/3.0;
	cout << "Your average is : " << average;
	return 0;
}

