#include<stdio.h>
int main(){
	int side, vol;
	printf("/n Enter side of coube :");
	scanf("%d", &side);
	vol = side*side*side;
	printf("\n Volume of cube with side %d is %d", side, vol);
}
