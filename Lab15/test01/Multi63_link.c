#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "multiFile_63_Head.h"
void addFirst(dictNode *new, char newVocab[20], char meaning[40], int id)
{
  dictNode *newNode = (dictNode *)malloc(sizeof(dictNode));
  newNode->vId = id;
  strcpy(newNode->Vocab, newVocab);
  strcpy(newNode->Meaning, meaning);
  //newNode->next = Head;
  Head = newNode;
  Cur = Head;
}
void addNode(dictNode *new, char *newVocab, char *meaning, int id)
{
  dictNode *newNode = (dictNode *)malloc(sizeof(dictNode));
  newNode->vId = id;
  strcpy(newNode->Vocab, newVocab);
  strcpy(newNode->Meaning, meaning);
  newNode->next = NULL;
  Cur->next = newNode;
  Cur = newNode;
}
void printDict()
{
  dictNode *prt;
  prt = Head;
  while (prt != NULL)
  {
    printf("%d %-15s %-40s\n", prt->vId, prt->Vocab, prt->Meaning);
    prt = prt->next;
  };
}