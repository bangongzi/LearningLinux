#include "libtrans.h"

int main( int argc, char* argv[] )
{
	
	string str1,str2;
	for(char *cp=argv[1];*cp!='\0';cp++)
	{
		str1=str1+*cp;
	}
	for(char *cp=argv[2];*cp!='\0';cp++)
	{
		str2=str2+*cp;
	}
	cout<<"You have input two binary numbers:"<<str1<<" and "<<str2<<endl;
	int sum = bto(str1) + bto(str2);
	cout<<"The sum is:"<<otb(sum)<<endl;
	return 1;
}
