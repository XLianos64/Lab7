#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	int barCode;
	string productName;
public:
	Product();
	Product(int, int, string);
	~Product();

	void show(ostream);
	void scanner();

	string getProductName()
	{
		return productName;
	}

	int getBarCode()
	{
		return barCode;
	}
};