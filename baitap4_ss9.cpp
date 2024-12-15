#include<stdio.h>
#include<iostream>

int show_menu();

int main()
{
	int n = 0;
	int arr[100];
	int repair_index, location;
	int hollow = -1;
	while(true)
	{
		int arr[n];
		int chose = show_menu();
		system("cls");
		switch(chose)
		{
			case 1:
				int n;
				printf("Nhap vao so luong mang: ");
				scanf("%d", &n);
				printf("Nhap mang: ");
				for(int i = 0; i < n; i++)
				{
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao\n");
					break;
				}
				
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				break;
			case 3:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao\n");
					break;
				}
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				int add_index, x;
				printf("Nhap vao gia tri ban muon them vao: ");
				scanf("%d", &x);
				printf("Nhap vao vi tri muon them vao(Luu y: mang duoc tinh tu vi tri 0): ");
				scanf("%d", &add_index);
				
				for(int i = n + 1; i >= add_index; i--)
				{
					arr[i + 1] = arr[i];
				}
				++n;
				
				arr[add_index] = x;
				break;
			case 4:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao\n");
					break;
				}
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				int repair_index, location;
				printf("Nhap vao vi tri ban muon sua chua(Luu y: mang duoc tinh tu vi tri 0): ");
				scanf("%d", &location);
				printf("Nhap vao gia tri moi sau khi sua: ");
				scanf("%d", &repair_index);
				
				arr[location] = repair_index;
				
				break;
			case 5:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao\n");
					break;
				}
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				int deleted_index;
				printf("Nhap vao vi tri muon xoa(Luu y: mang duoc tinh tu vi tri 0): ");
				scanf("%d", &deleted_index);
				
				hollow = arr[deleted_index];
				
				for(int i = deleted_index; i < n - 1; i++)
				{
					arr[i] = arr[i + 1];
				}
				--n;
				
				break;
			case 6:
				printf("thoat chuong trinh, bai bai ban\n");
				return 1;
			default:
				printf("Du lieu khong hop le!!!\n");
		}
		int is_continue = 1;
		printf("\nBan co muon tiep tuc khong?(1/0)\n");
		scanf("%d", &is_continue);
		system("cls");
		if(is_continue == 0)
		{
			printf("Chuong trinh ket thuc, hen gap lai ban\n");
			break;
		}
	}
	
	return 0;
}

int show_menu()
{
	int chose;
	printf("            MENU            \n");
	printf("\n");
	printf("1. Nhap vao mang\n");
	printf("2. Hien thi mang\n");
	printf("3. Them phan tu\n");
	printf("4. Sua phan tu\n");
	printf("5. Xoa phan tu\n");
	printf("6. Thoat\n");
	printf("\n");
	printf("Lua chon cua ban la: ");
	scanf("%d", &chose);
	
	return chose;
}

