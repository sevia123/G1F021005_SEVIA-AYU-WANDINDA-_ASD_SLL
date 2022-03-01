#include<iostream>
using namespace std;
struct SmartPhone{
	string merk, jenis;
	int prc;
	SmartPhone *next;
};

SmartPhone *head, *tail, *cur, *newNode;

void createSingleLinkedList(string merk, string jenis, int harga){
	head = new SmartPhone();
	head->merk = merk;
	head->jenis = jenis;
	head->prc = harga;
	head->next = NULL;
	tail = head;
}

void addFirst(string merk, string jenis, int harga){
	newNode = new SmartPhone();
	newNode->merk = merk;
	newNode->jenis = jenis;
	newNode->prc = harga;
	newNode->next = head;
	head = newNode;
}

void addMiddle(string merk, string jenis, int harga, int tempat){
	newNode = new SmartPhone();
	newNode->merk = merk;
	newNode->jenis = jenis;
	newNode->prc = harga;
	cur = head;
	int NO = 1;
	while(NO < tempat - 1 ){
		cur = cur->next;
		NO++;
	}
	newNode->next = cur->next;
	cur->next = newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand SmartPhone : "<< cur->merk <<endl;
		cout << "Jenis SmartPhone : "<< cur->jenis <<endl;
		cout << "Harga SmartPhone : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("IPHONE", "XR", 6000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("IPHONE", "11 PRO MAX", 19000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("IPHONE", "6S", 3000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
} 
