//
//  CTECBinaryTree.hpp
//  AfternoonNodes
//
//  Created by Rockne, Dylan on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp
#include "TreeNode.hpp"
namespace CTECData
{
template<class Type>
class CTECBinaryTree
{
private:
    int size;
    TreeNode<Type> * root;
    int height;
    bool balanced;
    void calculatedSize(TreeNode<Type> * currentNode);

    bool contains(Type value, CTECBinaryTree<Type> * currentTree);
    TreeNode<Type> * getRightMostChild(TreeNode<Type> * leftSubTree);
    TreeNode<Type> * getLeftMostChild(TreeNode<Type> * rightSubTree);
    void remove(TreeNode<Type> nodeToBeRemoved);
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool insert(const Type& value);
    //void remove(const Type& value);
    bool contains(Type value);
    int getSize();
    int getHeight();
    bool isBalanced();
    TreeNode<Type> * getRoot();
    void preorderTraversal(TreeNode<Type> * currentNode);
    void inorderTraversal(TreeNode<Type> * currentNode);
    void postorderTraversal(TreeNode<Type> * currentNode);

};
}


#endif /* CTECBinaryTree_hpp */
