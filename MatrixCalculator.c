#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	int islemno, i, j, k;
	int row1, colm1, row2, colm2;
	
	for (;;) {
	printf("\n\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Transpoz Alma\n5-Ekrani Temizle\n\n");
	printf("Yapmak istediginiz islemin numarasini giriniz: ");
	scanf("%d", &islemno);
	if (islemno==1) {
		printf("\nToplanacak matrislerin boyutlarini giriniz.\n");
		printf("Satir: ");
		scanf("%d", &row1);
		printf("Sutun: ");
		scanf("%d", &colm1);
		int a[row1][colm1];
		int b[row1][colm1];
		int c[row1][colm1];
		printf("\nA matrisi: \n");
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &a[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
		printf("\nB matrisi: \n");
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &b[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", b[i][j]);
			}
			printf("\n");
		}
		printf("\nBu matrislerin toplami: \n\n");

		for (i=0;i<row1;i++) {
			for(j=0;j<colm1;j++) {
				c[i][j] = 0;
				c[i][j] = a[i][j] + b[i][j];
				printf("%4d", c[i][j]);
			}
			printf("\n");
		}
	}
	else if (islemno==2) {
		printf("\nFarki alinacak matrislerin boyutlarini giriniz.\n");
		printf("Satir: ");
		scanf("%d", &row1);
		printf("Sutun: ");
		scanf("%d", &colm1);
		int a[row1][colm1];
		int b[row1][colm1];
		int c[row1][colm1];
		printf("\nA matrisi: \n");
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &a[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
		printf("\nB matrisi: \n");
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &b[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", b[i][j]);
			}
			printf("\n");
		}
		printf("\nBu matrislerin farki: \n\n");

		for (i=0;i<row1;i++) {
			for(j=0;j<colm1;j++) {
				c[i][j] = 0;
				c[i][j] = a[i][j] - b[i][j];
				printf("%4d", c[i][j]);
			}
			printf("\n");
		}
	}
	else if (islemno==3) {
		int a[row1][colm1];
		int b[row1][colm1];
		printf("\n1. matrisin boyutlarini giriniz.\n");
		printf("Satir: ");
		scanf("%d", &row1);
		printf("Sutun: ");
		scanf("%d", &colm1);
		printf("\nA matrisi: \n");
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &a[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
		printf("\n2. matrisin boyutlarini giriniz.\n");
		printf("Satir: ");
		scanf("%d", &row2);
		printf("Sutun: ");
		scanf("%d", &colm2);
		if (colm1 != row2) {
			printf("Bu matrislerin boyutlari carpmaya uygun degildir.");
		}
		else {
			printf("\nB matrisi: \n");
			for (i=0;i<row2;i++) {
				for (j=0;j<colm2;j++) {
					scanf("%d", &b[i][j]);
				}
				printf("\n");
			}
			for (i=0;i<row2;i++) {
				for (j=0;j<colm2;j++) {
					printf("%4d", b[i][j]);
				}
				printf("\n");
			}
			
			printf("\nBu matrislerin carpimi: \n\n");
			int c[row1][colm2];
			for (i=0;i<row1;i++) {
				for (j=0;j<colm2;j++) {
					c[i][j] = 0;
					for (k=0;k<colm1;k++) {
						c[i][j] += (a[i][k] * b[k][j]);
					}
					printf("%4d", c[i][j]);
				}
				printf("\n");
			}	
		}	
	}
	else if (islemno==4) {
		printf("\nMatrisin boyutlarini giriniz.\n");
		printf("Satir: ");
		scanf("%d", &row1);
		printf("Sutun: ");
		scanf("%d", &colm1);
		printf("\nA matrisi: \n");
		
		int a[row1][colm1];
		int at[colm1][row1];
		
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				scanf("%d", &a[i][j]);
			}
			printf("\n");
		}
		for (i=0;i<row1;i++) {
			for (j=0;j<colm1;j++) {
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
		printf("\nBu matrisin transpozu: \n\n");
		for (i=0;i<colm1;i++) {
			for (j=0;j<row1;j++) {
				at[i][j] = a[j][i];
				printf("%4d", at[i][j]);
			}
			printf("\n");
		}
	}
	else if (islemno==5) {
		system("cls");
	}
	else printf("\nHatali islem numarasi girdiniz.\n");
}
	system("pause");
	return 0;
}