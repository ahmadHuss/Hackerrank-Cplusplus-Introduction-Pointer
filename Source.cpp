#include <iostream>

using namespace std;

void Update(int *, int *);


int main() {

	int a{ 0 }, b{ 0 };
	int *aPtr{ &a };
	int *bPtr{ &b };
	cin >> a >> b;
	Update(aPtr, bPtr);
	cout <<*aPtr << "\n" << *bPtr << endl;

}

void Update(int * aPtr, int * bPtr) {
	int sum;
	sum = (*aPtr) + (*bPtr);
	
	//Formula to find absoulte value from two numbers
	int absValue = *aPtr - *bPtr;
	if (absValue > 0) {
		absValue = absValue;
	}
	else {
		absValue = -(absValue);
	}
	
	*aPtr = sum;
	*bPtr = absValue;
}