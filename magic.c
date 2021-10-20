#include<stdio.h>
#include<conio.h>
void displayc1();
void displayc2();
void displayc3();
void displayc4();
void displayc5();
void displayc6();
void displayc7();

void main(){
	int a, sum=0;
	
	printf("Think of a number between 1 and 100.\nIf the no. is in the table displayed bellow enter '1' else '0'.\n\n");
	
	displayc1();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 1;
	
	displayc2();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 2;
	
	displayc3();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 4;
	
	displayc4();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 8;
	
	displayc5();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 15;
	
	displayc6();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 28;
	
	displayc7();
	scanf("%d", &a);
	if (a==1)
	sum = sum + 56;
	
	printf("\n\nThe number you guessed is...... %d!!!\n\nImplemented by: Dhruv Soni", sum);
	getch();
}



void displayc1(){
	printf("\n1 3 5 7 9 11\n13 16 18 20 22 24\n26 29 31 33 35 37\n");
	printf("39 41 44 46 48 50\n52 54 57 59 61 63\n65 67 69 72 74 76\n");
	printf("78 80 82 85 87 89\n91 93 95 97 100\n\n");
}

void displayc2(){
	printf("\n2 3 6 7 10 11\n14 17 18 21 22 25\n26 30 31 34 35 38\n");
    printf("39 42 45 46 49 50\n53 54 58 59 62 63\n66 67 70 73 74 77\n");
    printf("78 81 82 86 87 90\n91 94 95 98\n\n");
}

void displayc3(){
	printf("\n4 5 6 7 12 13\n");
	printf("14 19 20 21 22 27\n");
	printf("32 33 34 35 40 41\n42 47 48 49 50 55\n");
	printf("60 61 62 63 68 69\n70 75 76 77 78 83\n");
	printf("88 89 90 91 96 97\n98\n\n");
}

void displayc4(){
	printf("\n8 9 10 11 12 13\n14 23 24 25 26 27\n");
	printf("36 37 38 39 40 41\n42 51 52 53 54 55\n");
	printf("64 65 66 67 68 69\n70 79 80 81 82 83\n");
	printf("92 93 94 95 96 97");
	printf("\n98\n\n");
}

void displayc5(){
	printf("\n15 16 17 18 19 20\n21 22 23 24 25 26\n");
	printf("27 43 44 45 46 47\n48 49 50 51 52 53\n");
	printf("54 55 71 72 73 74\n75 76 77 78 79 80\n");
	printf("81 82 83 99 100\n\n");
	
}

void displayc6(){
	printf("\n28 29 30 31 32 33\n34 35 36 37 38 39\n");
	printf("40 41 42 43 44 45\n46 47 48 49 50 51\n");
	printf("52 53 54 55 84 85\n86 87 88 89 90 91\n");
	printf("92 93 94 95 96 97\n98 99 100\n\n");
}

void displayc7(){
	printf("\n56 57 58 59 60 61\n62 63 64 65 66 67\n");
	printf("68 69 70 71 72 73\n74 75 76 77 78 79\n");
	printf("80 81 82 83 84 85\n86 87 88 89 90 91\n");
	printf("92 93 94 95 96 97\n98 99 100\n\n");
}
