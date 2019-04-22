#include"stdio.h"
main() {
	int a, b, c;
	int minum;
	printf("\n enter three Integer :");
	scanf_s("%d,%d,%d", &a, &b, &c);//%d表示占位符号
	minum = min(a, b, c);
	printf("\n minum:%d ", minum);
	system("pause");
}
int min(int a, int b, int c) {
	//int m;
	//m = a;
	//if (b < m)m = b;
	//if (c < m) m = c;
	//return m;
	return a > b ? (c > b ? b : c) : (a > c ? c : a);
}