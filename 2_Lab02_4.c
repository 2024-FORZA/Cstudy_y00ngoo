#include <stdio.h>

int main() {
	char word[101];
	char* cambridge = "CAMBRIDGE";
	int i;

	scanf("%s", word);

	for (i = 0; i < strlen(word); i++) {
		if (strchr(cambridge, word[i]) == NULL) {
			printf("%c", word[i]);
		}
	}
	return 0;
}