#include "multiFile_63_Head.h"
#include <stdio.h>
#include <stdlib.h>

dictNode *Head = NULL;
dictNode *Cur = NULL;

int main()
{
  dictNode *vNode = NULL;
  addFirst(vNode, "Computer", "electronic device", 1);
  addNode(vNode, "HardDisk", "Storage Device", 2);
  addNode(vNode, "Printer ", "Output Device", 3);
  addNode(vNode, "RAM", "Memory", 3);
  printDict();
  return 0;
}