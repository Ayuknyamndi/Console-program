#include<stdio.h>
//This program ask the user to input 9 digits and tells you whether its MTN, ORANGE, NEXTTEL or CAMTEL
int main()
{
	int tel[9], n;
printf("Enter your phone number:\n");
for (int i=0; i<9; i++){
scanf("%1d", &tel[i]);
}
	if (tel[0]==6 && tel[1]==9 || tel[1]==5 && tel[2]>=5 && tel[2]<=9){
		printf("ORANGE");
	}
	if (tel[0]==6 && tel[1]==6){
		printf("Nexttel");
	}
	 if (tel[0]==6 && tel[1]==7 || tel[1]==8 || tel[1]==5 && tel[2]>=1 && tel[2]<=4){
		printf("MTN");
	}
	if(tel[0]==2 && tel[1]==4){
		printf("CAMTEL");
	}
	return 0;
}

