#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
class LL
{
	node* head = nullptr;
	node* curr=nullptr;
public:
	LL()
	{
		head = nullptr;
		curr = nullptr;
	}
	node* Enqueue(int value, node* temp) {
		
		if (head == nullptr)
		{
			temp = nullptr;
			temp = new node;
			temp->data = value;
			curr = temp;
			head = temp;
			temp->next = nullptr;
		}
		else {
			curr = temp;
			temp = new node;
			temp->data = value;
			curr->next = temp;
			temp->next = nullptr;
		}
		return temp;
	}
	void Deque() {
		node* temp;
		if (head == nullptr) {

			cout << "Qeue Is Empty";
		}
		else if  (head->next == nullptr) {
			delete head;
			head = nullptr;
			curr = nullptr;
			
		}
		else {
			temp = head;
			temp = temp->next;
			delete head;
			head = temp;
		}
	}
	void is_Empty() {
		if (curr == nullptr && head == nullptr) {
			cout << "Queue is Empty\n";
			cout << "---------------\n";
		}
		else {
			cout << "Qeue is not Emty\n";
			cout << "----------------\n";
		}
	}
	void display() {
		node* temp = head;
		while (temp != nullptr) {
			cout << "Your Data is ::" << temp->data;
			cout << endl;
			temp = temp->next;
		}
	}
};
int main()
{
	node* temp = nullptr;
	LL obj;
	int in;
	int data;
	int pos;
	while (true) {
		cout << "Enter 1 for Enquque\n";
		cout << "----------------------------------";
		cout << "\n";
		cout << "Enter 2 for Deque\n";
		cout << "------------------------------------------";
		cout << "\n";
		cout << "Enter 3 For The Check is Empty or not\n";
		cout << "----------------------------------";
		cout << "\n";
		cout << "Enter 4 To Display\n";
		cout << "----------------------------------";
		cout << "\n";
		cout << "Enter 5 To Break\n";
		cout << "----------------------------------";
		cout << "\n";
		cin >> in;
		if (in == 1) {
			cout << "Enter The Data ";
			cout << endl;
			cout << "---------------------------";
			cout << endl;
			cin >> data;
			temp = obj.Enqueue(data, temp);
		}
		if (in == 2) {
			obj.Deque();
		}
		if (in == 3) {
			obj.is_Empty();
		}
		if (in == 4) {
			obj.display();
		}
		if (in == 5) {
			break;
		}
	}
	system("pause");
	return 0;
}
