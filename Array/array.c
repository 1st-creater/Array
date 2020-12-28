#include <stdio.h>
#define N 10 // 이렇게 하면 매우 유용 

int main(void)
{
	int a[10]; // 이렇게 아무것도 안 적어 둘 수 있다. 왜냐하면 나중에 할당해주면 되기 때문에
	int a[N]; // 나중에 쉽게 바꿀 수 있기 때문에 매우 좋은 사용법
			  // array variable의 길이는 constant-expression이어야 한다

	// Array Subscripting
	// array 와 for loops는 매우 잘 맞는다 

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

	a[i + j * 10] = 0; // 이렇게 array subscript에 expression도 가능하다
	a[i++]; // side effect도 가능


	//Array Initialization
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 가장 기초적인 array initialize

	int c[10] = { 1, 2, 3, 4, 5 }; // 이거는 {1, 2, 3, 4, 5, 0, 0, 0, 0, 0}랑 같다; 빈 곳은 0으로 자동 추가
	
	int c[10] = { 0 }; /* 이거는 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}랑 같다; 근데 initialzier를 비워두는 것은 
					   안되기 때문에 괄호에 0을 하나 넣어 두었다 */

	int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 이렇게 길이를 비워두어도 괜찮음; initializer의 개수로 길이
	                                             //판단


	// Designated Initializer
	int a[10] = { 0, 0, 0, 30, 0, 0, 0, 7, 0, 0 }; // 이렇게 몇 개만 지정하여 쓰고 싶을 때가 있다
	int a[10] = { [3] = 30, [7] = 7}; /* 이렇게 쓸 수 있음; 대괄호 안에 있는 숫자를 designator라 한다.
									  designator는 반드시 integer constant expression 이어야 한다. */

	int b[] = { [5] = 10,[23] = 13,[11] = 36,[15] = 29 }; //여기서 array의 length는 24가 될 것이다.

	int c[10] = { 5, 1, 9,[4] = 3, 7, 2,[8] = 6 }; // 이건 {5, 1, 9, 0, 3, 7, 2, 6, 0, 0} 과 같다. 


	// sizeof operator with arrays
	// array a는 10개의 정수; 그러면 sizeof(a)는 40이다

	//sizeof(a) / sizeof(a[0])

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) //array의 길이가 필요할 때; 나중에 array의 길이가 바뀌어도
		a[i] = 0;								   // 상관없다; 매크로랑 효과는 같지만 이것이 기억해야 할 거이
												   // 없기 때문에 이 기술이 더 좋다

	for (i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++)    //sizeof는 size_t형 이기 때문에 무부호와 유부호
		a[i] = 0;										     //를 비교하는 것은 위험해서 casting 해주는게 좋다


	// #define SIZE ((int) (sizeof(a) / sizeof(a[0])))

	/*for (i = 0; i < SIZE; i++)        이렇게 사용할 수 도 있다.
		a[i] = 0;*/                     



	//array 복사하는 법 a와 b는 array; 다른 방법은 memcpy 함수 사용 <string.h> header
	a = b; // 이렇게 하면 안됨

	for (i = 0; i < N; i++)
		a[i] = b[i];

	memcpy(a, b, sizeof(a)); //이렇게 사용

}
