#include<stdio.h>

int main()
{
	int n;
	printf("Nhap so luong phan tu muon nhap: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int x, index;
	printf("Nhap phan tu muon sua: ");
	scanf("%d", &x);
	printf("Nhap vi tri muon sua(bat dau tu 0): ");
	scanf("%d", &index);
	
	int deleted_index = -1;
	
	deleted_index = arr[index];
	
	arr[index] = x;
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
