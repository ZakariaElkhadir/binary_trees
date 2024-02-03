# Binary Trees

## Overview

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. The binary tree structure allows for efficient searching, insertion, and deletion of elements. Binary trees are widely used in computer science and are the foundation for many important data structures and algorithms.

## Key Concepts

1. **Root**: The topmost node in a binary tree is called the root. It serves as the starting point for traversing the tree.

2. **Node**: Each element in a binary tree is called a node. Nodes contain a piece of data and references (or pointers) to their left and right children.

3. **Leaf Node**: A leaf node is a node with no children, i.e., both the left and right child pointers are NULL.

4. **Parent Node**: A parent node is a node that has at least one child.

5. **Child Node**: A child node is a node that is a descendant of another node. Nodes can have zero, one, or two children.

6. **Depth**: The depth of a node in a tree is the number of edges on the path from the root to that node.

7. **Height**: The height of a tree is the length of the longest path from the root to a leaf. It is the maximum depth of any node in the tree.

## Types of Binary Trees

1. **Full Binary Tree**: A binary tree in which every node has either 0 or 2 children.

2. **Complete Binary Tree**: A binary tree in which all levels are completely filled except possibly for the last level, which is filled from left to right.

3. **Perfect Binary Tree**: A binary tree in which all the leaf nodes are at the same depth, and every parent has exactly two children.

4. **Balanced Binary Tree**: A binary tree in which the depth of the left and right subtrees of any node differ by at most one.

## Operations

Common operations on binary trees include:

- **Insertion**: Adding a new node to the tree.
- **Deletion**: Removing a node from the tree.
- **Traversal**: Visiting all the nodes in the tree in a specific order (e.g., in-order, pre-order, post-order).
- **Search**: Finding a specific node in the tree.

## Implementation in C

Binary trees can be implemented in various programming languages. Here is a simple example of a binary tree implemented in C:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
```

This is a basic structure for a binary tree node and a function to create a new node.

## References

- [GeeksforGeeks - Binary Tree](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- [Wikipedia - Binary Tree](https://en.wikipedia.org/wiki/Binary_tree)

## Further Reading

- [Binary Tree Traversal Explained](https://www.freecodecamp.org/news/all-you-need-to-know-about-tree-data-structures-bceacb85490c/)
- [Understanding Recursion in Binary Trees](https://medium.com/basecs/how-to-solve-a-binary-tree-interview-question-recursive-edition-ccb19d57fa22)
