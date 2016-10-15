#include <stdio.h>
int main(){	int y;
		printf("\tinput number from 0 to 9\n");
		scanf("%d",&y);
		switch(y){
			case 0:printf("\tzero\n");break;
			case 1:printf("\tone\n");break;
			case 2:printf("\ttwo\n");break;
			case 3:printf("\tthree\n");break;
			case 4:printf("\tfour\n");break;
			case 5:printf("\tfive\n");break;
			case 6:printf("\tsix\n");break;
			case 7:printf("\tseven\n");break;
			case 8:printf("\teight\n");break;
			case 9:printf("\tnine\n");break;
		}
return 0;
}
