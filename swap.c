#include<stdio.h>

void swap(int a, int b) {
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}

void main() {
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
}
