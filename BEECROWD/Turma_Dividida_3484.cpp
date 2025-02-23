#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node *left, *right;
    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

// Insere um novo valor na árvore BST
void insert(Node *&root, int x) {
    if (!root) {
        root = new Node(x);
        return;
    }
    if (x < root->value)
        insert(root->left, x);
    else
        insert(root->right, x);
}

// Encontra o menor valor em cada nível da árvore (BFS)
vector<int> getAns(Node *root) {
    vector<int> levels;
    if (!root) return levels;

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        if (levels.size() == level)
            levels.push_back(301); // Inicializa com um valor grande

        levels[level] = min(levels[level], node->value);

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }
    return levels;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    Node *root = nullptr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(root, x);
    }

    vector<int> ans = getAns(root);
    
    for (int i = 0; i < ans.size(); i++)
        cout << i << ' ' << ans[i] << '\n';

    return 0;
}