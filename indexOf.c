#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int indexOf(char text[], char word[]) {
    int textlen = strlen(text);
    int wordlen = strlen(word);

    for (int i = 0; i <= textlen - wordlen; i++) {
        bool match = true;
        for (int j = 0; j < wordlen; j++) {
            if (text[i + j] != word[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}

int main() {
    char text[] = "the cat sat on the mat";
    char target[] = "cat";

    int index = indexOf(text, target);

    if (index != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", target, index);
    } else {
        printf("Слово \"%s\" не найдено\n", target);
    }

    return 0;
}
