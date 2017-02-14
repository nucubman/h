#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>


int main() {
	int m1[2][2];
	int m2[2][2];
	int r = 0;
	int lenght = 2;
	int k = 0;
	srand(time(NULL));
	while (1) {
		for (int i = 0; i < lenght; i++) {
			for (int j = 0; j < lenght; j++) {
				m1[i][j] = rand() % 10;
				m2[i][j] = rand() % 10;

			}
		}

		k = 0;
		for (int i = 0; i < lenght; i++) {
			for (int j = 0; j < lenght; j++) {
				if (m1[i][j] == m2[i][j]) {
					k++;

				}
			}
		}

		r++;
		if (k == 4) {
			printf("%d", r);
			break;
		}
	}
	


	getchar();
}


// 2 cali 2 ganzomilebiani masivis shevseba shemtxveviti ricxvebit 10mde ! sanam am masivebis elementebi ar dametxveva ertmanets anu ramdenjer dachirdeba datrialeba ro dametxves!
