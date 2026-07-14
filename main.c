#include <stdio.h>
#include <stdlib.h>

int GetUserInput(int cnt);
void PrintDatas(int* ptr, int cnt);

int main(void) {
    int capacity = 2;
    int count = 0;
    int input;
    int* datas = calloc(capacity, sizeof(int));
    if (datas == NULL) {
        printf("\nMemory allocation failed!");
        return 1;
    }
    while (1)
    {
        input = GetUserInput(count);
        if (input == -1)
        {
            break;
        }
        if (count >= capacity)
        {
            capacity *= 2;
            int* temp = realloc(datas, capacity * sizeof(int));
            if (temp == NULL) {
                printf("\nMemory allocation failed!");
                free(datas);
                return 1;
            }
            datas = temp;
        }
        datas[count] = input;
        count++;
    }
    realloc(datas, count*sizeof(int));
    PrintDatas(datas, count);
    free(datas);
    return 0;
}

int GetUserInput(int cnt)
{
    printf("Please enter a value for Data[%d]\n", cnt);
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1)
        {
            break;
        }
        while (getchar() != '\n');
        printf("Please enter valid value!\n");
    }
    return input;
}

void PrintDatas(int* ptr, int cnt)
{
    printf("Here is your datas:\n");
    for (int i = 0; i < cnt; i++)
    {
        printf(" %d",*ptr);
        ptr++;
    }
}
