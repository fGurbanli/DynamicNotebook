#include <stdio.h>
#include <stdlib.h>

int GetUserInput(int* ptr, int cnt);
void PrintingDatas(int* ptr, int cnt);

int main(void) {
    int capacity = 2;
    int count = 0;
    int* input;
    int* datas = calloc(capacity, sizeof(int));
    if (datas == NULL) {
        printf("\nMemory allocation failed!");
        return 1;
    }
    while (GetUserInput(input, count) != -1)
    {
        if (count >= capacity)
        {
            capacity *= 2;
            int* temp = realloc(datas, capacity * sizeof(int));
            if (temp == NULL) {
                printf("\nMemory allocation failed!");
                free(temp);
                return 1;
            }
            datas = temp;
        }
        datas[count] = *input;
        count++;
    }
    free(datas);
    return 0;
}

int GetUserInput(int* ptr, int cnt)
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
    *ptr = input;
    return input;
}


