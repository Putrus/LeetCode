#include "Solution.h"

bool Solution::isSameTree(TreeNode* p, TreeNode* q) {
   if (p == nullptr && q == nullptr) {
      return true;
   }
   if (p == nullptr || q == nullptr) {
      return false;
   }
   if (p->val != q->val || (p->left == nullptr && q->left != nullptr) ||
      (q->left == nullptr && p->left != nullptr) || (p->right == nullptr && q->right != nullptr) ||
      (q->right == nullptr && p->right != nullptr)) {
      return false;
   }
   if (p->left != nullptr && p->right != nullptr) {
      return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
   }
   else if (p->left != nullptr) {
      return isSameTree(p->left, q->left);
   }
   else if (p->right != nullptr) {
      return isSameTree(p->right, q->right);
   }
   return true;
}