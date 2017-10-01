#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        int numPersons, area, numAnimals, enviroFriend, sum = 0;
        scanf("%d", &numPersons);
        for(int j = 0; j < numPersons; j++)
        {
            scanf("%d%d%d", &area, &numAnimals, &enviroFriend);
            sum += area * enviroFriend;
        }
        printf("%d\n", sum);
    }
    return 0;
}
