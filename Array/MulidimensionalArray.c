#include <stdio.h>

#define N 10

int main(void)
{
	int m[5][9];  // declaration of two dimensional array; ���� 5�� ���� 9��
	// C stores array in row-major order; nested for loop is ideal for multidimensional array

	// identity matrix(�밢���� 1, �������� 0)
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
	// �ȿ� �ִ� ��ȣ�� ���� ������(�׷��� �����ϴ� ��ȣ�� ����ϴ°� ����)
	int m[3][4] = { {0, 1, 0, 1},
					{0, 1, 0, 1},
					{0, 1, 0, 1} };

	double ident[2][2] = {[0][0] = 1.0, [1][1] = 1.0 }; //�������� 0���� �ʱ�ȭ

	//Constant Array
	//const�� ����� array�� ���α׷��� ���� �ٲ��� �ʴ´�.
	// �� �ڵ带 �д� �ٸ� ������� �� �迭�� �ٲ��� �ʴ´ٰ� �˸���, �����Ϸ��� ������ ��� ���� ���ش�.
	const int m[3][4] = { {0, 1, 0, 1},
						  {0, 1, 0, 1},
						  {0, 1, 0, 1} };



}