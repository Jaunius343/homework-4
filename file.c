#ifndef filec
#define filec

#include "file.h"

#include <stdio.h>
#include <stdlib.h>

void delete_list(Node **head)
{
    while((*head) != NULL) {
        *head = (*head)->next;
    }
}

void delete_element(Node **head, int data)
{
    /*start from the first link*/
    Node* current = (*head);
    Node* previous = NULL;

    /*if list is empty*/
    if((*head) == NULL) {
        return NULL;
    }

    /*navigate through list*/
    while(current->data != data) {

    /*if it is last node*/
        if(current->next == NULL) {
            return NULL;
        } else {
            /*store reference to current link*/
            previous = current;
            /*move to next link*/
            current = current->next;
        }
    }

    /*found a match, update the link*/
    if(current == (*head)) {
        /*change first to point to next link*/
        (*head) = (*head)->next;
    } else {
        /*bypass the current link*/
        previous->next = current->next;
    }

    /*return current;*/
}



int find_lowest(Node *ptr)
{
    int /*lowest_value_key,*/ lowest_value;
    /*Node *ptr = head;*/
    /*printf("\n[ ");*/
    if(ptr != NULL){
        lowest_value = ptr->data;
        /*lowest_value_key = ptr->key;*/
        ptr = ptr->next;
    } else {
        return 0;
    }

    /*start from the beginning*/
    while(ptr != NULL) {
        if (ptr->data < lowest_value){
            lowest_value = ptr->data;
           /* lowest_value_key = ptr->key;*/
        }
        /*printf("(%d,%d) ",ptr->key,ptr->data);*/
        ptr = ptr->next;
    }
    return lowest_value;/*lowest_value_key;*/
    /*printf(" ]\n");*/
}



void print_list(Node *ptr)
{
   /*Node *ptr = head;*/
   printf("[ ");

   /*start from the beginning*/
   while(ptr != NULL) {
      printf("(%d) "/*,ptr->key*/,ptr->data);
      ptr = ptr->next;
   }

   printf(" ]\n");
}



void insert_first(Node **head, int data)
{
   /*create a link*/
   Node *link = (Node*) malloc(sizeof(Node));

   /*link->key = key;*/
   link->data = data;

   /*point it to old first node*/
   link->next = (*head);

   /*point first to new first node*/
   (*head) = link;
}


#endif