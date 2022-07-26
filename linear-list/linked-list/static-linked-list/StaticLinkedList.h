/*
 * 静态链表
 */
#include <iostream>

#define MAX_SIZE 10

typedef struct SLNode {
    int data;
    int next;
} SLinkedList[MAX_SIZE]; //一个长度为 MAX_SIZE 的数组

/*
 * 初始化这个静态链表
 */
bool init(SLinkedList &L);

/*
 * 打印所有空节点
 */
void printfEmptyNode(SLinkedList L);

/*
 * 填充这个链表
 * 待补充
 */
void fullList(SLinkedList &L);