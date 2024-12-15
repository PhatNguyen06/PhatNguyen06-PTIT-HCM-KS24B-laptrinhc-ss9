#include<stdio.h>
#include<math.h>
#include<iostream>

int show_menu();
int ktra_ngto(int n);

int cnt[1000001] = {0};

int main()
{
	int n = 0;
	int arr[100];
	int repair_index, location;
	int hollow = -1;
	int sum = 0;
	int dem = 0;
	
	int min, max;
	while(true)
	{
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
					printf("Mang chua duoc khoi tao!!");
					break;
				}
				
				printf("Gia tri phan tu dang quan ly la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				break;
			case 3:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao!!");
					break;
				}
				
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				printf("Cac phan tu chan la: ");
				for(int i = 0; i < n; i++)
				{
					if(arr[i] % 2 == 0)
					{
						printf("%d ", arr[i]);
						sum += arr[i];
					}
				}
				printf("\n");
				printf("Tong cac phan tu chan: %d ", sum);
				break;
			case 4:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao!!");
					break;
				}
				
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				min = arr[0];
				max = arr[0];
				for(int i = 0; i < n; i++)
				{
					if(arr[i] > max)
					{
						max = arr[i];
					}
					if(arr[i] < min)
					{
						min = arr[i];
					}
				}
				
				printf("Gia tri lon nhat trong mang la: %d\n", max);
				printf("Gia tri nho nhat trong mang la: %d", min);
				
				break;
			case 5:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao!!");
					break;
				}
				
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				sum = 0;
				for(int i = 0; i < n; i++)
				{
					if(ktra_ngto(arr[i]))
					{
						if(cnt[arr[i]] == 0)
						{
							printf("%d ", arr[i]);
							sum += arr[i];
							cnt[arr[i]] = 1;
						}
					}
				}
				
				printf("\n");
				printf("Tong gia tri cua so nguyen to trong mang la: %d", sum);
				break;
			case 6:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao!!");
					break;
				}
				
				for(int i = 0; i < 1000001; i++)
				{
					cnt[i] = 0;
				}
				
				printf("Mang hien tai la: ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				
				int search;
				printf("Nhap vao mot so muon thong ke: ");
				scanf("%d", &search);
				
				for(int i = 0; i < n; i++)
				{
					cnt[arr[i]]++;
				}
				
				for(int i = 0; i < n; i++)
				{
					if(search == arr[i])
					{
						printf("Co %d phan tu trong mang\n", cnt[arr[i]]);
						break;
					}
					else
					{
						printf("Khong co gia tri nay trong mang!");
						break;
					}
				}
				break;
			case 7:
				if(n == 0)
				{
					printf("Mang chua duoc khoi tao!!");
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
				printf("Nhap vao vi tri muon them vao: ");
				scanf("%d", &add_index);
				
				for(int i = n + 1; i >= add_index; i--)
				{
					arr[i + 1] = arr[i];
				}
				++n;
				
				arr[add_index] = x;
				break;
			case 8:
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
	printf("                       MENU                     \n");
	printf("\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7. Them mot phan tu vao vi tri chi dinh\n");
	printf("8. Thoat\n");
	printf("\n");
	printf("Lua chon cua ban la: ");
	scanf("%d", &chose);
	
	return chose;
}

int ktra_ngto(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


