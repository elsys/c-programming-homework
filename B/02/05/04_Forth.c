#include<stdio.h>

int main()
  	{
	 char ch;
	 char ch1=0;
	ch=getchar();
	if(ch>=97 && ch<=109){
        ch1=ch-97;
	printf("%c",122-ch1);
	
	}
	else{
	ch1=122-ch;
	printf("%c",97+ch1);
	    };
	return 0;
	}

	
