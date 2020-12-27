#ifndef fileh
#define fileh

struct Node {
   int data;
   /*int key;*/
   struct Node *next;
};

typedef struct Node Node;

void insert_first(Node **head, int data);
void print_list(Node *ptr);
int find_lowest(Node *ptr);
void delete_element(Node **head, int data);
void delete_list(Node **head);

#endif