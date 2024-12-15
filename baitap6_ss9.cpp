#include<stdio.h>
#include<math.h>
#include<iostream>

int show_menu();

int cnt[1000001] = {0};

int main()
{
	int n = 0;
	int m = 0;
	int arr[100][100];
	int sum = 0;
	long long tich = 1;
	
	int row_sum[n];
	int row_max_sum = row_sum[0];
	int row_index = 0;
	
	while(true)
	{
		int chose = show_menu();
		system("cls");
		switch(chose)
		{
			case 1:
				int n;
				printf("Nhap vao so hang: ");
				scanf("%d", &n);
				int m;
				printf("Nhap vao so cot: ");
				scanf("%d", &m);
				printf("Nhap mang: \n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						scanf("%d", &arr[i][j]);
					}
				}
				break;
			case 2:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				printf("Gia tri phan tu cua mang theo ma tran: \n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				
				printf("Mang hien tai la:\n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				sum = 0;
				printf("Cac phan tu le la: ");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						if(arr[i][j] % 2 != 0)
						{
							printf("%d ", arr[i][j]);
							sum += arr[i][j];
						}
					}
				}
				printf("\n");
				printf("Tong cac phan tu le la: %d", sum);
				
				break;
			case 4:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				
				printf("Mang hien tai la:\n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				printf("Cac phan tu tren duong bien la: ");
				for(int j = 0; j < m; j++)
				{
					printf("%d ", arr[0][j]);
					tich *= arr[0][j];
				}
				
				for(int i = 1; i < n - 1; i++)
				{
					printf("%d ", arr[i][m - 1]);
					tich *= arr[i][m - 1];
				}
				
				for(int j = m - 1; j >= 0; j--)
				{
					printf("%d ", arr[n - 1][j]);
					tich *= arr[n - 1][j];
				}
				
				for(int i = n - 2; i > 0; i--)
				{
					printf("%d ", arr[i][0]);
					tich *= arr[i][0];
				}
				
				printf("\n");
				printf("Tich tren duong bien = %lld\n", tich);
				
				break;
			case 5:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				
				printf("Mang hien tai la:\n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				printf("Day la cac phan tu tren duong cheo chinh(luu y nen xai ma tran vuong): ");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						if(i == j)
						{
							printf("%d ", arr[i][j]);
						}
					}
				}
				
				break;
			case 6:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				
				printf("Mang hien tai la:\n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				printf("Day la cac phan tu tren duong cheo phu(luu y nen xai ma tran vuong): ");
				for(int i = 0; i < n; i++)
				{
					printf("%d ", arr[i][n - 1 - i]);
				}
				break;
			case 7:
				if(n == 0 || m == 0)
				{
					printf("Mang chua duoc khoi tao: ");
					break;
				}
				
				printf("Mang hien tai la:\n");
				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				for(int i = 0; i < n; i++)
				{
					sum = 0;
					for(int j = 0; j < m; j++)
					{
						sum += arr[i][j];
					}
					row_sum[i] += sum;
				}
				
				for(int i = 0; i < n; i++)
				{
					if(row_sum[i] > row_max_sum)
					{
						row_max_sum = row_sum[i];
						row_index = i;
					}
				}
				
				printf("Hang co tong gia tri lon nhat la: ");
				for(int j = 0; j < m; j++)
				{
					printf("%d ", arr[row_index][j]);
				}
				
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
	printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
	printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
	printf("3. In gia tri cac phan tu la le va tinh tong\n");
	printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
	printf("5. In ra cac phan tu tren duong cheo chinh\n");
	printf("6. In ra cac phan tu nam tren duong cheo phu\n");
	printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
	printf("8. Thoat\n");
	printf("\n");
	printf("Lua chon cua ban la: ");
	scanf("%d", &chose);
	
	return chose;
}

