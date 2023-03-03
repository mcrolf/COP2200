//darlene westberg
//December 4, 2019 ©
//Chapter 9 pointers
#include<iostream>
using namespace std;
void NotAPointer(int a);
void Pointer(int *a);
void ChangeArray(int Array[], short size);
void PrintArray(int Array[], short size);
void ptrChangeArray(int *Array, short size);
double DivWithPointer(long *a, long *b);
double DivWithRef(long &a, long &b);
void ptrChangeArrayAndPointer(int *iArr, short size);

int main()
{
	int x = 77;
	cout << x << " is the value stored in x" << endl;
	cout << &x << " is the address where x is stored" << endl;
	int *iptr;//creating a pointer to an int
	iptr = &x;//initializes the pointer with the address of x
	cout << iptr << endl;//outputs the pointer value which is an address
	cout << *iptr << endl;//dereferences pointer and goes the the address and gets the data
	*iptr = 90;
	cout << x << " is the value stored in x" << endl;
	NotAPointer(x);
	cout << x << " is the value stored in x after NotAPointer() is called" << endl;
	Pointer(&x);
	cout << x << " is the value stored in x after Pointer() is called" << endl;
	int iArr[] = { 1,2,3,4 };//implicit array definition (must have initialization list)
	for (int cnt = 0; cnt < 4; cnt++)
		cout << iArr[cnt] << endl;//subscript notation
	ChangeArray(iArr, 4);
	for (int cnt = 0; cnt < 4; cnt++)
		cout << *(iArr+cnt) << endl;//pointer notation
	for (int cnt = 0; cnt < 4; cnt++)
		cout << (iArr + cnt) << endl;//pointer math
	PrintArray(iArr, 4);
	ptrChangeArray(iArr, 4);
	PrintArray(iArr, 4);
	long num1 = 9, num2 = 2;
	double dAnswer;
	dAnswer = DivWithPointer(&num1, &num2);
	cout << "dAnswer after calling DivWithPointer is " << dAnswer << endl;
	cout << "num1 is now " << num1 << " and num2 is now " << num2 << endl;
	num1 = 11, num2 = 3;
	dAnswer =DivWithRef(num1, num2);
	cout << "num1 is now " << num1 << " and num2 is now " << num2 << endl;
	cout << "dAnswer after calling DivWithRef is " << dAnswer << endl;
	ptrChangeArrayAndPointer(iArr, 4);
	//dynamic memory allocation
	int *iptr2;
	int num;
	cout << "How many elements do you want? " << endl;
	cin >> num;
	iptr2 = new int[num];
	for (int cnt = 0; cnt < num;cnt++)
		iptr2[cnt] = cnt;
	for (int cnt = 0; cnt < num;cnt++)
		cout << *iptr2 + cnt << " ";
	cout << endl;
	delete[] iptr2;
	system("pause");
	return 0;
}
void NotAPointer(int a)
{
	a = 120;
}
void Pointer(int *a)
{
	*a = 120;
}
void ChangeArray(int Array[], short size)
{
	for (int cnt = 0; cnt < size; cnt++)
		Array[cnt] = cnt * size;
}
void PrintArray(int Array[], short size)
{
	for (int cnt = 0; cnt < size; cnt++)
		cout << Array[cnt] << " ";
	cout << endl;
}
void ptrChangeArray(int *Array, short size)
{
	for (int cnt = 0; cnt < size; cnt++)
		*(Array+cnt) = cnt * size + 1;
}
double DivWithPointer(long *a, long *b)
{
	double ans = (float)*a / *b;
	*a = 0;
	*b = 0;
	return ans;
}
double DivWithRef(long &a, long &b)
{
	double ans = (float)a / b;
	a = 5; 
	b = 5;
	return ans;
}
void ptrChangeArrayAndPointer(int *iArr, short size)
{
	cout << "The address of the array from the function is: " << iArr << endl;
	for (int cnt = 0; cnt < size; cnt++, iArr++)
		*iArr = cnt + 1;
	cout << "the address of the array is now " << iArr << endl;
}
