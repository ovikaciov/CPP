#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void PrintStruct(Node* head) {

	while (head != NULL) {
		cout << head->data << endl;
		head = head->next;
	}

}

int main() {

	int n;
	cout << "How many numbers : ";
	cin >> n;
	Node* head = new Node;

	for (int i = 0; i < n; i++) {
		cout << "Give the element : ";
		int x; cin >> x;
		head->data = x;
		head = head->next;
	}

	PrintStruct(head);
	return 0;
}