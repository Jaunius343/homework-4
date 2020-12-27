#include <stdio.h>
#include <stdlib.h>

#include "file.h"

int main()
{	
	Node *head = NULL;
	
    insert_first(&head, 40);
    insert_first(&head, 100);
    insert_first(&head, 20);
    insert_first(&head, 30);
	
    printf("\nList:\n");
    print_list(head);
	
    printf("\n Lowest value: %d\n", find_lowest(head));
	
    delete_element(&head, find_lowest(head));
    printf("\nList after deleting lowest value:\n");
    print_list(head);
	
    delete_list(&head);
    printf("\nList after deleting the list:\n");
    print_list(head);
	
    return 0;
}

