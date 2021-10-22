#include <iostream>
#include "Square.cpp"
#define n 10

class FieldBuilder {
public:
	void buildingFilling(Square a[n][n]) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j].buildingSet();
		for (int i = 1; i < n-1; i++) 
			for (int j = 1; j < n-1; j++) 
				a[i][j].freeSet();
	}
	void exitEnterFilling(Square a[n][n]) {
		int enterRand = rand() % 10;
		int exitRand = rand() % 10;
		a[enterRand][0].enterSet();
		a[exitRand][9].exitSet();
	}

};
