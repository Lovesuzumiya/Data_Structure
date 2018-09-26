// Block search and binary search.cpp
//This code uses both block searching and binary searching

#include "stdafx.h"

struct indexTable
{
	int maxKey;//The max keynumber in a block
	int start;//where the data in list.data begin
	int realarray;//the real space occupied
	int array = 6;//the space arranged
};

int main()
{
	int high = 2;
	int low = 0;
	struct indexTable indexArray[4] = { {35,0,5,},{75,5,6,},{90,11,4}};//The reference list,which contains 3 elements,and each element contains 3 number
	int data[15] = { 9,22,12, 14, 35, 42, 44, 38, 48, 60, 75, 90, 80, 82,77 };//the data list for searching in
	int flag1 = 0, flag2 = -1, key =77;//key is want you want to find out
	while(low<=high) //find the block where key may in,using binary searching
	{
		int mid = (high + low) / 2;
		if (key < indexArray[mid].maxKey)
		{
			high = mid -1;
		}
		else if(key > indexArray[mid].maxKey)
		{
			low = mid + 1;
			mid = mid + 1;
			flag1 = mid;
			 if (flag1 >= 3)
			{
				flag1 = -1;
				break;
			}
		}
		else if(key = indexArray[mid].maxKey)
		{
			flag1 = mid ;
			break;
		}

		printf("mid = %d\n", mid);
	}
	printf("flag1 = %d\n", flag1);
	//in the exact block
	if (flag1 >= 0)
	{

		for (int j = 0;j < indexArray[flag1].realarray + 1;j++)
		{
			if (key == data[indexArray[flag1].start + j])
			{
				printf("the number you found = %d\n", data[indexArray[flag1].start + j]);
				flag2 = j;
				printf("this step run.");
				break;
			}
		}
		printf("flag2=%d\n", flag2);
		if (flag2 < indexArray[flag1].realarray & flag2>=0)
			printf("The wanted subscript is ：%d\n", flag1*indexArray->array + flag2);
		else
			printf("Not in the block u are searching.\n");
	}
	else
		printf("Not in the list.");
	return 0;
}
