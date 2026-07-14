#include <stdio.h>
#include <stdlib.h>

int GetUserInput();
void PrintingDatas();
void WritingDatas(int input, int cap, int *arr);

int main(void) {
    int capacity = 2;
    int* datas = calloc(capacity, sizeof(int));
    while (GetUserInput() == -1)
    {
        WritingDatas(GetUserInput(), capacity, datas);
    }
    return 0;
}

int GetUserInput()
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1)
        {
            break;
        }
        while (getchar() != '\n');
        printf("Please enter valid value!");
    }
    return input;
}
void WritingDatas(int input, int cap, int* arr)
{

}
