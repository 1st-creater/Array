#include <stdio.h>

#define N 10

int main(void)
{
	int m[5][9];  // declaration of two dimensional array; 가로 5개 세로 9개
	// C stores array in row-major order; nested for loop is ideal for multidimensional array

	// identity matrix(대각선은 1, 나머지는 0)
	double ident[N][N];
	int row, col;

	for (row = 0; row < N; row++) {
		for (col = 0; col < N; col++) {
			if (row == col)
				ident[row][col] = 1.0;
			else
				ident[row][col] = 0.0;
		}
	}


	//Initializing a Multidimensional Array
	// 안에 있는 괄호를 빼도 괜찮다(그러나 위험하니 괄호를 사용하는게 좋다)
	int m[3][4] = { {0, 1, 0, 1},
					{0, 1, 0, 1},
					{0, 1, 0, 1} };

	double ident[2][2] = {[0][0] = 1.0, [1][1] = 1.0 }; //나머지는 0으로 초기화

	//Constant Array
	//const로 선언된 array는 프로그램에 의해 바뀌지 않는다.
	// 이 코드를 읽는 다른 사람에게 이 배열은 바뀌지 않는다고 알리고, 컴파일러가 에러를 잡기 쉽게 해준다.
	const int m[3][4] = { {0, 1, 0, 1},
						  {0, 1, 0, 1},
						  {0, 1, 0, 1} };



}