#include<iostream>
using namespace std;

class Queue
{
	int* arr = NULL;
	int Rear;// Rear ++
	int Front;
	int count = 0;
	int size;
public:
	Queue(int size) {
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = -1;
		}
		this->Rear = -1;
		this->Front = -1;
		this->size = size;
	}
	void enqueue
	(int data) {
		if (this->Rear == this->size - 1) {
			return;
		}
		if (this->count == 0) {
			this->arr[count] = data;
			this->Front = count;
			this->Rear = count;
			this->count = this->count + 1;
		}
		else {
			this->Rear = this->count;
			this->arr[count] = data;
			this->count = this->count + 1;
		}
	}
	void dequeue() {
		if (Front == Rear || Front == -1) {
			cout << endl;
			this->count = 0;
			this->Front = 0;
			this->Rear = 0;
		}
		else {
			this->Front = this->Front + 1;
		}
	}
	bool isempty() {
		if (this->Rear == -1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isfull() {
		if (this->Rear == this->size - 1) {
			return true;
		}
		else {
			return false;
		}
	}
	void display() {
		cout << endl;
		cout << "Your Data is " << endl;
		cout << "---------------------" << endl;
		for (int i = this->Front; i < count; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};
int main() {
	cout << "Enter the Size Of The Queue " << endl;
	cout << "---------------------" << endl;
	int size;
	cin >> size;
	Queue a(size);
	while (true) {
		cout << "Enter the 1 To Enqueue\n";
		cout << "-------------------------------\n";
		cout << "Enter the 2 To Dequeue \n";
		cout << "-------------------------------------------\n";
		cout << "Enter the 3 To check is empty or not \n";
		cout << "-----------------------------------------------\n";
		cout << "Enter the 4 To Check is Full Or Not \n";
		cout << "-----------------------------------------------\n";
		cout << "Enter 5 to Display \n";
		cout << "-----------------------------------------------\n";
		cout << "Enter 6 to End the Programme \n";
		cout << "-----------------------------------------------\n";
		int in;
		cin >> in;
		if (in == 1) {
			cout << "Enter the Data you want to Insert\n";
			cout << "-----------------------------------------------\n";
			int data1;
			cin >> data1;
			a.enqueue(data1);
		}
		if (in == 2) {
			a.dequeue();
		}
		if (in == 3) {
			if (a.isempty() == true) {
				cout << "Queue is Full\n";
				cout << "-----------------------------------------------\n";
			}
			else {
				cout << "Queue is not Full\n";
				cout << "-----------------------------------------------\n";
			}
		}
		if (in == 4) {
			if (a.isfull() == true) {
				cout << "Queue is full\n";
				cout << "-----------------------------------------------\n";
			}
			else {
				cout << "Queue is not empty\n";
				cout << "-----------------------------------------------\n";
			}
		}
		if (in == 5) {
			a.display();
		}
		if (in == 6) {
			break;
		}
	}
	system("pause");
	return 0;
}
