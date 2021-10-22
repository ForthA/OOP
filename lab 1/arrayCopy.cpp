#include "FieldBuilder.cpp"
inline void arrayCopy(Square a[n][n],const Square b[n][n]){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}