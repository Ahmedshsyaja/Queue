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
node* curr = nullptr;
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
node* Deque(node *temp) {
node* temp2;
if (temp == head) {
temp2 = temp;
temp2 = temp2->next;
if (temp2 != nullptr) {
delete head;
}
else {
delete head;
head = nullptr;
curr = nullptr;
return nullptr;
}
head = temp2;
return head;
}
else if (temp->next == nullptr) {
node* temp3 = nullptr;
node* temp2 = head;
node* temp1 = nullptr;
while (temp2 != temp) {
temp1 = temp2;
temp2 = temp2->next;
}
temp1->next = nullptr;
delete temp2;
return temp1;
}
else {
node* temp3 = nullptr;
node* temp2 = head;
node* temp1 = nullptr;
while (temp2 != temp) {
temp1 = temp2;
temp2 = temp2->next;
}
temp3= temp2->next;
temp1->next = temp3;
delete temp2;
return temp3;
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
void Round_Robin() {
node* temp = head;
node* temp2 = head;
node* temp1;
int i = 0;
bool p = true;
bool k = true;
while (p!= false) {
temp = head;
while (temp != nullptr) {
if (k == true) {
temp->data = temp->data - 2;
}
k = true;
if (temp == head) {
if (temp->data <= 0) {
temp = Deque(temp);
if (temp != nullptr) {
temp->data = temp->data - 2;
}
k = false;
}
}
if (k == false) {
continue;
}
if (temp->next == nullptr) {
if (temp->data <= 0) {
temp = Deque(temp);
k = false;
}
}
if (k == false) {
continue;
}
if (temp->next != nullptr && temp != head) {
if (temp->data <= 0) {
temp = Deque(temp);
temp->data = temp->data - 2;
k = false;
}
}
if (k == false) {
continue;
}
temp = temp->next;
}
temp2 = head;
cout << endl;
cout << "Round :: " << i;
cout << endl;
if (temp2 == nullptr) {
p = false;
}
while (temp2 != nullptr) {
cout << temp2->data << " ";
temp2 = temp2->next;
}
i = i + 1;
}
}
};
int main()
{
node* temp = nullptr;
LL obj;
int in;
int data=1;
int pos;
int i = 1;
while(data!=0) {
cout << "Enter The Data Enter 0 to Break ";
cout << endl;
cout << "---------------------------";
cout << endl;
cin >> data;
if (data == 0) {
break;
}
else {
temp = obj.Enqueue(data, temp);
}
}
obj.Round_Robin();
system("pause");
return 0;
}