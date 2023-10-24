#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define menuColor 15
#define HighlightColor 4

typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;

int c=0;

struct student
{
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};
struct student s[100];

char menu[3][20] = {"New", "Display", "Exit"};

void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

void displayMenu(char menu[3][20], int choice)
{
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        if (i == choice)
        {
            SetColor(HighlightColor);
        }
        else
        {
            SetColor(menuColor);
        }
        printf("%s\n", menu[i]);
    }
}

int getUserChoice(char menu[3][20], int choice)
{
    int key = getch();
    if (key == 13)
    {
        system("cls");
        SetColor(15);
        choice_result(choice);
        if (choice == 2){
            system("cls");
            exit(0);
        }
    }
    if (key == 72 && choice > 0)
    {
        return choice - 1;
    }
    else if (key == 80 && choice < 2)
    {
        return choice + 1;
    }
    return choice;
}



void scan_struct_Students(struct student s[],int size)
{
    char add = 'y';
    int i=0;
    while((i<size) && (add != 'n')){
        printf("Enter name [%d]",c+1);
        scanf("%s",s[i].name);
        printf("Enter age [%d]",c+1);
        scanf("%d",&s[i].age);
        printf("Enter ID [%d]",c+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d]",c+1);
        scanf(" %c",&s[i].gender);
        c++;
        printf("do you want to add new student ( if you don't want press n) : ");
        scanf(" %c", &add);
        i++;
    }
}




void print_struct_Students(struct student s[] )
{
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<c; i++)
    {
        printf("name[%d] = %s \n",i+1,s[i].name);
        printf("gender[%d] = %c \n",i+1,s[i].gender);
        printf("age [%d]=  %d \n",i+1,s[i].age);
        printf("id [%d] =  %d \n",i+1,s[i].id);
    }
    getch();

}
int main()
{
    int choice = 0;
    while (1)
    {
        displayMenu(menu, choice);
        choice = getUserChoice(menu, choice);
    }
    return 0;
}
void choice_result(int choice)
{

    if (choice == 0 )
    {
        scan_struct_Students(s,100);
    }
    if (choice == 1)
    {
        print_struct_Students(s);
    }
}

