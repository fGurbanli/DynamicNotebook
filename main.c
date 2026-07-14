#include <stdio.h>
#include <stdlib.h>

int GetUserInput();
void PrintingDatas();
void WritingDatas(int input, int cap, int *arr, int index);

int main(void) {
    int capacity = 2;
    int* datas = calloc(capacity, sizeof(int));
    if (datas == NULL) {
        printf("\nMemory allocation failed!");
        free(datas);
        return 1;
    }
    while (GetUserInput() != -1)
    {
        for (int i = 0; i < capacity; i++)
        {
            WritingDatas(GetUserInput(), capacity, datas, i);
        }
        capacity++;
        realloc(datas, capacity * sizeof(int));
    }
    free(datas);
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
void WritingDatas(int input, int cap, int* arr, int index)
{

}
