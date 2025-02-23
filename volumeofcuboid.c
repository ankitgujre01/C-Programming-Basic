#include<stdio.h>
int main(){
	int l,b,h, vol;
	
	printf("\n enter length breadth and height of cuboid :");
	scanf("%d %d %d",&l,&b,&h);
	
	vol = l*b*h;
	
	printf("\n volume of cuboid = %d", vol);
	
	return 0;
}
