/**
 * Copyright 2017 7kachika
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int exit = 0;
		int i, j;
		char *order[] = {"麵包", "漢堡", "蛋糕", "紅茶", "果汁", "咖啡"};
		int price[] = {25, 35, 40, 20, 30, 45};
		// 32 * 20
		for (i = 1; i < 18; i++) {
			printf("|");
			switch (i) {
				case 7:
					printf("  主菜 | %s $%d ... [A] |   ", order[0], price[0]);
					break;
				case 8:
					printf("       | %s $%d ... [B] |   ", order[1], price[1]);
					break;
				case 9:
					printf("       | %s $%d ... [C] |   ", order[2], price[2]);
					break;
				case 11:
					printf("  ");
					for (j = 3; j < 28; j++) {
						printf("-");
					}
					printf("   ");
					break;
				case 13:
					printf("  飲料 | %s $%d ... [1] |   ", order[3], price[3]);
					break;
				case 14:
					printf("       | %s $%d ... [2] |   ", order[4], price[4]);
					break;
				case 15:
					printf("       | %s $%d ... [3] |   ", order[5], price[5]);
					break;
				case 3:
					for (j = 1; j < 12; j++) {
						printf(" ");
					}
					printf("簡易菜單");
					for (j = 20; j < 31; j++) {
						printf(" ");
					}
					break;
				case 1:
				case 5:
					for (j = 1; j < 31; j++) {
						printf("=");
					}
					break;
				case 17:
					for (j = 1; j < 31; j++) {
						printf(".");
					}
					break;
				default:
					for (j = 1; j < 31; j++) {
						printf(" ");
					}
					break;
			}
			printf("|\n");
		}
	do {
		char input, drink;
		int orderIndex, drinkIndex;
		printf("\n請輸入想要的主菜: ");
		input = getche();
		switch (input) {
			case 'a':
			case 'A':
				orderIndex = 0;
				break;
			case 'b':
			case 'B':
				orderIndex = 1;
				break;
			case 'c':
			case 'C':
				orderIndex = 2;
				break;
			default:
				printf("\n\n       | \n       | 輸入錯誤，請確認菜單編號。");
				printf("\n       | \n\n");
				continue;
				break;
		}
		printf("\n\n       | \n       | 主菜選擇 %s", order[orderIndex]);
		printf("\n       | \n");
		printf("\n請輸入想要的飲料: ");
		drink = getche();
		switch (drink) {
			case '1':
				drinkIndex = 3;
				break;
			case '2':
				drinkIndex = 4;
				break;
			case '3':
				drinkIndex = 5;
				break;
			default:
				printf("\n\n       | \n       | 輸入錯誤，請確認菜單編號。");
				printf("\n       | \n\n");
				continue;
				break;
		}
		printf("\n\n       | \n       | 飲料選擇 %s", order[drinkIndex]);
		printf("\n       | \n");

		printf("\n");
		// 32 * 20
		time_t t;
		t = time(NULL);
		for (i = 1; i < 17; i++) {
			switch (i) {
				case 7:
					printf("    %s", ctime(&t));
					break;
				case 9:
					printf("|  | 品名    數量 ... 金額 |   |\n");
					break;
				case 10:
				case 13:
					printf("|  ");
					for (j = 3; j < 28; j++) {
						printf("-");
					}
					printf("   |\n");
					break;
				case 11:
					printf("|  | %s       1 ... $ %d |   |\n", order[orderIndex], price[orderIndex]);
					break;
				case 12:
					printf("|  | %s       1 ... $ %d |   |\n", order[drinkIndex], price[drinkIndex]);
					break;
				case 14:


					printf("|  | 合計             $%3d |   |\n", (price[orderIndex] + price[drinkIndex]));
			break;
				case 3:
					printf("|");
					for (j = 1; j < 12; j++) {
						printf(" ");
					}
					printf("交易明細");
					for (j = 20; j < 31; j++) {
						printf(" ");
					}
					printf("|\n");
					break;
				case 1:
				case 5:
					printf("|");
					for (j = 1; j < 31; j++) {
						printf("=");
					}
					printf("|\n");
					break;
				case 16:
					printf("|");
					for (j = 1; j < 31; j++) {
						printf(".");
					}
					printf("|\n");
					break;
				default:
					printf("|");
					for (j = 1; j < 31; j++) {
						printf(" ");
					}
					printf("|\n");
					break;
			}
		}
		do {
			exit = 2;
			printf("\n是否要再來一次? (y/n): ");
			input = getche();
			switch (input) {
				case 'y':
				case 'Y':
					exit = 0;
					break;
				case 'n':
				case 'N':
					exit = 1;
					break;
				default:
					printf("輸入錯誤，請重新輸入。");
					break;
			}
			printf("\n");
		} while (exit != 0 && exit != 1);
	} while (exit != 1);
	return 0;
}
