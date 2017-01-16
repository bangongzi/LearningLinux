#include <iostream>
#include <string>

using namespace std; 

int bto (string str)
{ 
  int len, temp, result = 0;
  int ratio = 1;
  len=str.size();
  for (int i = 0 ; i < len;i++)
    {
        temp = str[len-1-i] - '0';
		result = result + temp*ratio;
		ratio = ratio * 2;
    }
  return result;
}

string otb(int divident)
{
	int remainder;
	string str1, str2,str3;
	while(divident > 0)
	{
		remainder = divident % 2;
		divident = divident / 2;
		str1 = remainder + '0';
		str2 = str2 + str1;
	}
	for(int i = str2.size() - 1; i >= 0; i --)
	{
		str1 = str2[i];
		str3 = str3 + str1;
	}
	return str3;
}