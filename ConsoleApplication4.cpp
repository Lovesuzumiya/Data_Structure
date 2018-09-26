// ConsoleApplication4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

struct indexTable
{
	int maxKey;//块内关键字不超过最大值
	int start;//块开始的位置
	int realarray;//实际长度
	int array = 6;//分配长度
};
//具体实现代码：
int main()
{
	int high = 2;
	int low = 0;
	struct indexTable indexArray[4] = { {35,0,5,},
										{75,5,6,},
										{90,11,4}};//存放索引表，3块，每块5记录
	int data[15] = { 9,22,12, 14, 35, 42, 44, 38, 48, 60, 75, 90, 80, 82,77 };//待查找的序列
	int flag1 = -1, flag2 = -1, key =77;//待查关键字
	while(low<=high) //确定所在的块
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
	//到具体块里顺序查找
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
		printf("flag2=%d\n", flag2);//所在块中的索引数
		if (flag2 < indexArray[flag1].realarray & flag2>0)
			printf("待查元素在数组中的下标是：%d\n", flag1*indexArray->array + flag2);
		else
			printf("Not in the block u are searching.\n");
	}
	else
		printf("Not in the list.");
	return 0;
}
