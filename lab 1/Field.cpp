#include <random>
#include <iostream>
#include "arrayCopy.cpp"

class Field {
private:
	Square a[n][n];
	FieldBuilder fieldbuilder;
public:
	Field() {
		fieldbuilder.buildingFilling(a);
		fieldbuilder.exitEnterFilling(a);
	}
	Field(const Field &other){
		arrayCopy(a, other.a);
		std::cout << "Copied!" << std::endl;
	}
	Field(Field&& other)
	{
		arrayCopy(a, other.a);
		std::cout << "Moved" << std::endl;
	}
public:
	void fieldPrinting() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				a[i][j].squarePrinting();
			std::cout << std::endl;
		}
	}
	Field& operator= (const Field &other)
	{
		if (&other == this)
			return *this;
		arrayCopy(a, other.a);
		return *this;
	}
	Field& operator= (Field&& other) {
		if (&other == this)
			return *this;
		arrayCopy(a, other.a);
		for (int i = 0; i < n; i++) {
			delete []other.a[i];
		}
		return *this;
	}
};