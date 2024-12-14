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
	
	int index;
	printf("Nhap vi tri muon xoa(bat dau tu 0): ");
	scanf("%d", &index);
	
	int deleted_index = -1;
	deleted_index = arr[index];
	
	for(int i = index; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	n--;
	
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
