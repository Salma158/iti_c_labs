#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x+1);
}

int main() {
    char input[100];
    int position = 0;
    int length = 0;
    int x = 0;

    while (1) {
        system("cls");
        printf("%s", input);
        gotoxy(x + position, 0);

        int ch = getch();

        if (ch == 224) {
            ch = getch();

            if (ch == 75 && position > 0) {
                position--;
            } else if (ch == 77 && position < length) {
                position++;
            }
        } else if (ch == 13) {
            input[length] = '\0';
            printf("\nthe string: %s\n", input);
            break;
        } else if (ch == 8) {
            if (position > 0 && length > 0) {
                for (int i = position - 1; i < length; i++) {
                    input[i] = input[i + 1];
                }
                position--;
                length--;
            }
        } else if (length < 99) {
            for (int i = length; i >= position; i--) {
                input[i + 1] = input[i];
            }
            input[position] = ch;
            position++;
            length++;
        }

    }

    return 0;
}
