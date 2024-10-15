#include <iostream>

using namespace std;

void imputE(int k, int*& b) {
	for (int i = 0; i < k; i++) {
		b[i] = i;
	}
}
void Print(int* b, const int k) {
	for (int l = 0; l < k; l++)
		cout << b[l] << ' ';
}
void Inverse(int*& b, const int k)
{
	int t;
	int n = k;
	for (int i = 0; i < n / 2; i++)
	{
		t = b[i];
		b[i] = b[n - 1 - i];
		b[n - 1 - i] = t;

	}
}

int main() {
	const int k = 10;
	int* b = new int[10];
	imputE(k, b);
	Print(b, k);
	cout << endl;
	Inverse(b, k);
	Print(b, k);
	return 0;
}

