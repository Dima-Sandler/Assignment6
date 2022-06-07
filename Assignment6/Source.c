#include <stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4) {
	int num = c1;
	
	num <<= 8; num |= c2; 
	num <<= 8; num |= c3; 
	num <<= 8; num |= c4;

	return num;
}

void main() {
	int res = pack4Chars2Int('a', 'b', 'c', 'd');
	





}