//#include <iostream>
//#include <vector>
//using namespace std;
//struct Node {
//	char ch;
//	Node* left;
//	Node* right;
//
//	Node(char ch, Node* left, Node* right) {
//		this->ch = ch;
//		this->left = left;
//		this->right = right;
//	}
//};
//
//void pre(Node* root) {
//	if (root == nullptr || root->ch == '.')
//		return;
//	cout << root->ch;
//	pre(root->left);
//	pre(root->right);
//}
//void in(Node* root) {
//	if (root == nullptr || root->ch == '.')
//		return;
//	in(root->left);
//	cout << root->ch;
//	in(root->right);
//}
//void post(Node* root) {
//	if (root == nullptr || root->ch == '.')
//		return;
//	post(root->left);
//	post(root->right);
//	cout << root->ch;
//}
//Node* find(Node* root, char ch) {
//	if (root == nullptr)
//		return nullptr;
//	if (root->ch == ch)
//		return root;
//	Node* node = find(root->left, ch);
//	if (node != nullptr)
//		return node;
//	else
//		return find(root->right, ch);
//}
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//
//	int n;
//	cin >> n;
//	Node* root = new Node('A', nullptr, nullptr);
//
//	for (int i = 1; i <= n; i++) {
//		char p, c1, c2;
//		cin >> p >> c1 >> c2;
//		Node* node = find(root, p);
//		node->left = new Node(c1, nullptr, nullptr);
//		node->right = new Node(c2, nullptr, nullptr);
//	}
//
//	pre(root);
//	cout << "\n";
//	in(root);
//	cout << "\n";
//	post(root);
//}
//
