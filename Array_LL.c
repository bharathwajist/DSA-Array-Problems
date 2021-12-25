#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data structure for list using array
struct node
{
    int data;
    int next;
} a[10];

void main()
{
    int ans;
    int i, head, choice;
    int Create();
    void Display(int);
    void Insert();
    void Delete();
    void Search();

    do
    {
        // clrscr();
        printf("\n Main Menu");
        printf("\n1. Creation");
        printf("\n2. Display");
        printf("\n3. Insertion of element int the list");
        printf("\n4. Deletion of element from the list");
        printf("\n5. Searching of element from the list");
        printf("\n6. Exit");
        printf("\n Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 0; i < 10; i++)
            {
                a[i].data = -1;
            }
            break;
        case 2:
            Display(head);
            break;
        // case 3:
        //     Insert();
        //     break;
        // case 4:
        //     Delete();
        //     break;
        // case 5:
        //     Search();
        //     break;
        case 6:
            exit(0);
        }
        printf("\n Do you wish to go to Main menu");
        scanf("%d",&ans);
    }while(ans==1||ans >=1);
    // getch();
}


int Create(){
    int head, i;
    printf("\n Enter the index for first node : ");
    scanf("%d",&i);
    head = i;
    while (i!=-1) // Means terminate
    {
        printf("\n Enter the data and index of the first element");
        scanf("%d %d",&a[i].data, &a[i].next);
        i = a[i].next;
    }
    return head;
}

// Display

void Display(int i){
    printf("( ");
    while (i!=-1)
    {
        if (a[i].data == -1)
        {
            printf(" ");
        }else{
            printf("%d, ",a[i].data);
        }
        i = a[i].next;
    }
    printf("NULL)");
}