#include<stdio.h>
#include<stdlib.h>

void add() {
    int flag = 1;
    char url[88];
    while(flag==1) {
        printf("Enter the URL: ");
        scanf(" %87[^\n]", url);

        FILE *fp = fopen("C:\\Windows\\System32\\drivers\\etc\\hosts", "a");
        if (!fp) {
            printf("File can't be accessed");
            return;
        }

        fprintf(fp, "\n127.0.0.1 %s", url);
        fclose(fp);
        printf("URL added: %s\n", url);
        flag = 0;
    }
}

int main() {
    int flag;
    char input;
    printf("Welcome to bloCker!\n");
    printf("To add a website to the block list, press +.\n");
    printf("To exit the program, press -.\n");

    printf("Enter your choice: ");
    scanf("%c", &input);

    switch(input) {
        case '+':
            add();
            break;
        case '-':
            printf("Bye bye");
            exit(0);
            break;
        default:
            printf("Invalid input");
            exit(1);
    }
return 0;
}
