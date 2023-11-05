// trees concept creation,traversal and
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    void display()
    {
        cout << data << endl;
    }
};
class Tree
{
public:
    Node *root = NULL;
    r,
        Tree(int d)
    {
        Node *nroot = new Node(d);
        root = nroot;
    }
    Node *add_child(Node *parent, int d, int lor)
    {
        Node *child = new Node(d);
        if (lor == 0)
        {
            parent->left = child;
        }
        else
        {
            parent->right = child;
        }
        return child;
    }
    void inorder(Node *parent)
    {
        if (parent == NULL)
        {
            return;
        }
        else
        {
            inorder(parent->left);
            parent->display();
            inorder(parent->right);
            // parent->display();
        }
    }
    void preorder(Node *parent)
    {
        if (parent == NULL)
        {
            return;
        }
        else
        {
            parent->display();
            preorder(parent->left);
            // parent->display();
            preorder(parent->right);
            // parent->display();
        }
    }
    void postorder(Node *parent)
    {
        if (parent == NULL)
        {
            return;
        }
        else
        {
            postorder(parent->left);
            // parent->display();
            postorder(parent->right);
            // parent->display();
            parent->display();
        }
    }
};
/*public static int findSecondLargestValueInBST(Node root)
    {//second max element in a bst non recursive code
        int secondMax;
        Node pre = root;
        Node cur = root;
        while (cur.Right != null)
        {
            pre = cur;
            cur = cur.Right;
        }
        if (cur.Left != null)
        {
            cur = cur.Left;
            while (cur.Right != null)
                cur = cur.Right;
            secondMax = cur.Value;
        }
        else
        {
            if (cur == root && pre == root)

                //Only one node in BST
                secondMax = int.MinValue;
            else
                secondMax = pre.Value;
        }
        return secondMax;
    }*/
int main()
{
    Tree t(10);
    Node *l = t.add_child(t.root, 20, 0);
    Node *r = t.add_child(t.root, 30, 1);
    Node *ll = t.add_child(l, 40, 0);
    Node *rl = t.add_child(r, 60, 1);
    Node *lr = t.add_child(l, 40, 0);
    Node *rr = t.add_child(l, 40, 0);
    // l->display();
    t.inorder(t.root);
    cout << "pre-order" << endl;
    t.preorder(t.root);
    cout << "post-order" << endl;
    t.postorder(t.root);
}
// creation of BST
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    void display()
    {
        cout << data << endl;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
    Node *add_node(int d, Node *r)
    {
        if (r == NULL)
        {
            Node *nn = new Node(d);
            // root = r;
            return nn;
        }
        else if (r->data > d)
        {
            r->left = add_node(d, r->left);
            return r;
        }
        else
        {
            r->right = add_node(d, r->right);
            return r;
        }
    }
    void dis(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            dis(root->left);
            root->display();
            dis(root->right);
        }
    }
    int search(int d, Node *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else if (r->data == d)
        {
            return 1;
        }
        else if (r->data > d)
        {
            return search(d, r->left);
        }
        else if (r->data < d)
        {
            return search(d, r->right);
        }
        else
        {
            return -1;
        }
    }

    // deletion of node in BST. deleting node with no child,1 child and 2 children 3 diff senarioes
    Node *get_parent(Node *r, Node *child)
    {
        if (r->left == child || r->right == child)
        {
            return r;
        }
        else if (r->data > child->data)
        {
            return get_parent(r->left, child);
        }
        else
        {
            return get_parent(r->right, child);
        }
    }
    Node get_min(Node *r)
    {
        if (r->left == NULL)
        {
            return r;
        }
        else
        {
            min(r->left);
        }
    }
    void del_node(int d, Node *root)
    {
        if (root == NULL)
        {
            cout << "no node to delete" << endl;
            return;
        }
        else
        {
            Node *del = search(root, d); // searching for node to delete
            if (del != NULL)
            {
                Node *parent = get_parent(root, del); // obtaining parent of node which needs to be deleted
                if (del->left == NULL && del->right == NULL)
                { // deleting leaf node
                    if (parent->left == del)
                    {
                        parent->left = NULL;
                    }
                    else
                    {
                        parent->right = NULL;
                    }
                    delete del;
                }
                else
                {
                    // Node *parent = get_parent(root,del);//obtaining parent of node which needs to be deleted
                    if (del->left == NULL || del->right == NULL)
                    { // deleting sub parent node with 1 child
                        if (parent->left == del)
                        {
                            if (del->left != NULL)
                                parent->left = del->left;
                        }
                        else
                        {
                            if (del->right != NULL)
                                parent->right = del->right;
                        }
                        delete del;
                    }
                    else
                    { // if it has both the children
                        // if(del!=root){//if its not root node of tree
                        Node *min = get_min(del->right);
                        int min_val = min->data;
                        del_node(min_val, del);
                        del->data = min_val;
                    }
                }
            }
        }
    }
    // level order traversal requires a queue to get implemented
};
int main()
{
    BST t;
    Node *x = t.add_node(10, NULL);
    Node *l = t.add_node(7, x);
    Node *r = t.add_node(15, l);
    Node *ll = t.add_node(4, r);
    Node *lr = t.add_node(8, ll);
    Node *rl = t.add_node(12, lr);
    Node *rr = t.add_node(20, rl);
    t.dis(rr);
    cout << "searching in the BST" << endl;
    cout << bst.search(20, rr) << endl;
    return 0;
}