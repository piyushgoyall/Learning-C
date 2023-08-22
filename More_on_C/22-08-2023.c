// enum

#include <stdio.h>
// enum month
// {
//     jan,
//     feb,
//     mar,
//     apr,
//     may,
//     jun,
//     jul,
//     aug,
//     sep,
//     oct,
//     nov,
//     dec
// } m;

// int main()
// {
//     for (int m = jan; m <= dec; m++)
//         printf("%d\n", m + 1);
//     return 0;
// }

enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
enum day today;
int main()
{
    printf("%d\n",today+5);
    return 0;
}