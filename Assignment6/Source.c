#include <stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4) {
	int num = c1;
	
	num <<= 8; num |= c2; 
	num <<= 8; num |= c3; 
	num <<= 8; num |= c4;

	return num;
}

int checkEvenParity(short input) {
	char count = 0;

	for (int i = 0; i < 8 * sizeof(short); i++)
		if (input >> i & 1)
			count++;	

	return !(count % 2);
}

void main() {
	int res = pack4Chars2Int('a', 'b', 'c', 'd');
	
	printf("%d\n", checkEvenParity(0b1100011100001100));
	printf("%d\n", checkEvenParity(0b0000000000011000));
}
