#include <iostream>
#include "ISquare.cpp"

class Square: public ISquare {
private:
	bool free = false;
	bool player = false;
	bool building = false;
	bool enter = false;
	bool exit = false;
	bool enemy = false;
	bool staff = false;

public:
	void zeroSet() {
		free = false;
		player = false;
		building = false;
		enter = false;
		exit = false;
	}
	void freeSet() {
		zeroSet();
		free = true;
	}
	void playerSet() {
		zeroSet();
		player = true;
	}
	void buildingSet() {
		zeroSet();
		building = true;
	}
	void enterSet() {
		zeroSet();
		enter = true;
	}
	void exitSet() {
		zeroSet();
		exit = true;
	}

	void squarePrinting() {
		if (free) std::cout << 0;
		else if (player) std::cout << 1;
		else if (building) std::cout << 2;
		else if (enter) std::cout << 8;
		else if (exit) std::cout << 9;
	}
};