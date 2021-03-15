#ifndef MULTIFILE_63_HEAD_H_INCLUDED
#define MULTIFILE_63_HEAD_H_INCLUDED
typedef struct dNode
{
  int vId;
  char Vocab[15];
  char Meaning[40];
  struct dNode *next;
} dictNode;
extern dictNode *Head;
extern dictNode *Cur;
void addFirst(dictNode *new, char newVocab[20], char meaning[40], int id);
void addNode(dictNode *new, char *newVocab, char *meaning, int id);
void printDict();
#endif // MULTIFILE_63_HEAD_H_INCLUDED