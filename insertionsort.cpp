// the first algorithm, an insertion sort, from section 1.1

#include <iostream>
#include <stdlib.h>
#include <array>

int main()
{
	std::array<int, 1000> arrNum;

	for(int i = 0; i < arrNum.size(); i++) arrNum[i] = rand() % 50;
	for(int i = 0; i < arrNum.size(); i++) std::cout<<arrNum[i]<<std::endl;
	
	
	for(int i = 1; i < arrNum.size(); i++)	
	{
		int key = arrNum[i];
		int index = i - 1;
		while(index >= 0 && arrNum[index] > key)
		{
			arrNum[index + 1] = arrNum[index];
			index--;
		}
		arrNum[index + 1] = key;
	}
	std::cout<<std::endl;
	for(int i = 0; i < arrNum.size(); i++)
	{
		std::cout<<arrNum[i]<<std::endl;
	}
}
