//3 kinds of sorting methods:direct insert sorting and binary insert sorting.Direct insert sorting contians 2 kinds
//

#include "stdafx.h"

void directInsertSort(int s[], int n)
{
	int i, j, t, k;
	for (i = 1;i<n;i++)
	{
		for (j = i - 1;j >= 0;j--)
		{
			if (s[i] >= s[j])
				break;
		}
		if (i != j + 1)
		{
			t = s[i];
			for (k = i - 1;k >= j + 1;k--)
			{
				s[k + 1] = s[k];
			}
			s[j + 1] = t;
		}
	}
}

void directInsertSort2(int s[], int n)
{
	int i, j, t;
	for (i = 1;i < n;i++)
	{
		t = s[i];
		for (j = i - 1;j >= 0;j--)
		{
			if (t < s[j])
				s[j + 1] = s[j];
			else
				break;
		}
		s[j + 1] = t;
	}
}

void binaryInsertSort(int s[], int n)
{
	int i,t,m;
	int high, low, mid;
	for (i = 1; i<n ;i++)
	{
		low = 0;
		high = i-1;
		while (low <= high)
		{
			mid = (high + low) / 2;
			printf("mid=%d,\n", mid);
			if (s[mid] <= s[i])
				low = mid + 1;
			else
				high = mid -1;
		}
		if (high != i - 1)
		{
			t = s[i];
			for (m = i - 1;m >= high+1;m--)
			{
				s[m + 1] = s[m];
			}
			s[m+1] = t;
		}
	}
}

void binaryInsertSort2(int s[], int n)
{
	int i, t, m;
	int high, low, mid;
	for (i = 1; i<n;i++)
	{
		t = s[i];
		low = 0;
		high = i - 1;
		while (low <= high)
		{
			mid = (high + low) / 2;
			printf("mid=%d,\n", mid);
			if (s[mid] <= s[i])
				low = mid + 1;
			else
				high = mid - 1;
		}
		if (t<s[mid])
		{
			for (m = i - 1;m >= high + 1;m--)
			{
				s[m + 1] = s[m];
			}
			s[m + 1] = t;
		}
	}
}

int main()
{
	int n = 8;
	/*int s[8] = { 3,1,1,2,2,8,6,9};*/
	int s[8] = { 9,8,7,6,5,4,3,2 };
	binaryInsertSort(s, n);
	for (int i = 0;i < n;i++)
		printf("%d,", s[i]);
    return 0;
}

