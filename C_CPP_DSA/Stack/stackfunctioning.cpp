#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

    int a[9], i, j, n, op, pe, insert;

    printf("Enter the number of element you want in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < 4; j++)
    {

        printf("\nEnter the operation you want to perform: \n->1. push\n->2. pop\n->3. peep\n->4. Traversal\n\n==>>");
        scanf("%d", &op);

        if (op == 1)
        {

            if (n >= 9)
            {

                printf("\noverflow: Stack is full\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
            }

            else
            {

                n++;

                printf("\nEnter the element you want to add: ");
                scanf("%d", &insert);
                a[n - 1] = insert;
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
            }
        }

        if (op == 2)
        {

            if (n == 0)
            {

                printf("\nUnderflow : Stack is empty ");
            }

            else

            {

                n = n - 1;
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
            }
        }

        if (op == 3)
        {

            printf("\nEnter the element you want to peep: ");
            scanf("%d", &pe);

            for (i = 0; i < n; i++)
            {

                if (pe == a[i])
                {

                printf("\nEnter number is at %d position that is %d position fromtop",i+1,n-i);
                }
            }
        }

        if (op == 4)
        {

            printf("Elements are(According to stack): \n");
            for (i = n - 1; i >= 0; i--)
            {
                printf("%d\n", a[i]);
            }
        }

        printf("\n\n=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n\n\n");
    }

    return 0;
}
