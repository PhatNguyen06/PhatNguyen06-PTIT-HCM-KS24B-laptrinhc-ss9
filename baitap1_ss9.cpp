#include<stdio.h>

int main()
{
	int arr[100];
	
	int n;
	printf("Nhap so luong phan tu muon nhap: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int x, index;
	printf("Nhap phan tu muon chen: ");
	scanf("%d", &x);
	printf("Nhap vi tri muon chen(bat dau tu 0): ");
	scanf("%d", &index);
	
	for(int i = n + 1; i >= index; i--)
	{
		arr[i + 1] = arr[i];
	}
	n++;
	
	arr[index] = x;
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
