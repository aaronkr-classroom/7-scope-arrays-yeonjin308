//encrypt.c
#include <stdio.h>
int shift = 5; // A -> D (4 shift)

void encrypt(char* msg) {
	char ch;
	int i = 0;

	while (msg[i] != '\0') {
		ch = msg[i];

		//�ҹ��� ��ȣȭ
		if (ch >= 'a' && ch <= 'z') {
			ch = (ch - 'a' + shift) % 26 + 'a';
		}
		//�빮�� ��ȣȭ
		else if (ch >= 'A' && ch <= 'Z') {
			ch = (ch - 'A' + shift) % 26 + 'A';
		}
		
		msg[i] = ch;
		i++;
	}
	
}