#include<stdio.h>

void draw_stars(void);

int main(void)
{	
	draw_stars();
	printf("Hello World!\n");
	draw_stars();

	return 0;
}


void draw_stars(void) {
	printf("****************************\n");
	return;
}