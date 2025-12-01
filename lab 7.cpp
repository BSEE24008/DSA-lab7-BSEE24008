
#include <iostream>
using namespace std;
//genenral node class
class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
};
//  actula list class
class list {
	node* head;
	node* tail;
public:
	list() {
		head = tail = NULL;
	}
	//insert at head 
	void inhead(int val) {
		node* newnode = new node(val);
		if (head == NULL) {
			head = tail = newnode;
			return;
		}
		else {
			newnode->next = head;
			head = newnode;
		}
	}
	//delete from start 
	void delstart() {
		node* temp = head;
		head = head->next;
		temp->next = NULL;
	}
    //display
	void display() {
		node* temp = head;
		if (temp != NULL) {
			cout << temp->data << " ";
		}
		else {
			cout << "this stack is empty"<<endl;
		}
		cout << endl;
	}
	// for checkg empty
	void isemp() {
		if (head == NULL) {
			cout << "this is empty" << endl;
		}
		else {
			cout << "this is not empty"<<endl;
		}
	}
};



int main() {


	list s1;
	int ch = 0;
	int val;
	while (ch != 6) {
		cout << "Press 1  Push element" << endl;
		cout << "Press 2  Pop element" << endl;
		cout << "Press 3  View top element" << endl;
		cout << "Press 4  Check if empty" << endl;
		cout << "Press 6  Exit" << endl;
		cin >> ch;
		switch (ch) {
		case 1:
		{
			cout << "enter the value you want to push" << endl;
			cin >> val;
			s1.inhead(val);
		}break;
		case 2:
		{
			s1.delstart();
		}
		break;
		case 3: {
			s1.display();
		}
			  break;
		case 4:
		{
			s1.isemp();

		}
		break;
		case 6: {
			cout << "good bye";
		}
			  break;
		default:cout << "you entered the invalid  choice";
			break;
		}



	}
}
