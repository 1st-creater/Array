#include <stdio.h>
#define N 10 // �̷��� �ϸ� �ſ� ���� 

int main(void)
{
	int a[10]; // �̷��� �ƹ��͵� �� ���� �� �� �ִ�. �ֳ��ϸ� ���߿� �Ҵ����ָ� �Ǳ� ������
	int a[N]; // ���߿� ���� �ٲ� �� �ֱ� ������ �ſ� ���� ����
			  // array variable�� ���̴� constant-expression�̾�� �Ѵ�

	// Array Subscripting
	// array �� for loops�� �ſ� �� �´´� 

	//idiom
	int i;
	
	for (i = 0; i < N; i++)
		a[i] = 0;			// clears a

	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]); // reads data into a

	int sum;
	for (i = 0; i < N; i++)
		sum += a[i];  // sums the elements of a

	int j;

	a[i + j * 10] = 0; // �̷��� array subscript�� expression�� �����ϴ�
	a[i++]; // side effect�� ����


	//Array Initialization
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ���� �������� array initialize

	int c[10] = { 1, 2, 3, 4, 5 }; // �̰Ŵ� {1, 2, 3, 4, 5, 0, 0, 0, 0, 0}�� ����; �� ���� 0���� �ڵ� �߰�
	
	int c[10] = { 0 }; /* �̰Ŵ� {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}�� ����; �ٵ� initialzier�� ����δ� ���� 
					   �ȵǱ� ������ ��ȣ�� 0�� �ϳ� �־� �ξ��� */

	int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // �̷��� ���̸� ����ξ ������; initializer�� ������ ����
	                                             //�Ǵ�


	// Designated Initializer
	int a[10] = { 0, 0, 0, 30, 0, 0, 0, 7, 0, 0 }; // �̷��� �� ���� �����Ͽ� ���� ���� ���� �ִ�
	int a[10] = { [3] = 30, [7] = 7}; /* �̷��� �� �� ����; ���ȣ �ȿ� �ִ� ���ڸ� designator�� �Ѵ�.
									  designator�� �ݵ�� integer constant expression �̾�� �Ѵ�. */

	int b[] = { [5] = 10,[23] = 13,[11] = 36,[15] = 29 }; //���⼭ array�� length�� 24�� �� ���̴�.

	int c[10] = { 5, 1, 9,[4] = 3, 7, 2,[8] = 6 }; // �̰� {5, 1, 9, 0, 3, 7, 2, 6, 0, 0} �� ����. 


	// sizeof operator with arrays
	// array a�� 10���� ����; �׷��� sizeof(a)�� 40�̴�

	//sizeof(a) / sizeof(a[0])

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) //array�� ���̰� �ʿ��� ��; ���߿� array�� ���̰� �ٲ�
		a[i] = 0;								   // �������; ��ũ�ζ� ȿ���� ������ �̰��� ����ؾ� �� ����
												   // ���� ������ �� ����� �� ����

	for (i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++)    //sizeof�� size_t�� �̱� ������ ����ȣ�� ����ȣ
		a[i] = 0;										     //�� ���ϴ� ���� �����ؼ� casting ���ִ°� ����


	// #define SIZE ((int) (sizeof(a) / sizeof(a[0])))

	/*for (i = 0; i < SIZE; i++)        �̷��� ����� �� �� �ִ�.
		a[i] = 0;*/                     



	//array �����ϴ� �� a�� b�� array; �ٸ� ����� memcpy �Լ� ��� <string.h> header
	a = b; // �̷��� �ϸ� �ȵ�

	for (i = 0; i < N; i++)
		a[i] = b[i];

	memcpy(a, b, sizeof(a)); //�̷��� ���

}
