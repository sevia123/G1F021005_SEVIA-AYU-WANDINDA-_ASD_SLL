#include<iostream>

using namespace std;

struct Tas{
	string merk, jenis;
	int prc;
	Tas *next;	
};

Tas *head, *tail, *cur, *newNode;

void createSingleLinkedList(string merk, string jenis, int harga){
	head = new Tas();
	head->merk = merk;
	head->jenis = jenis;
	head->prc = harga;
	head->next = NULL;
	tail = head;	
}

void addLast(string merk, string jenis, int harga){
	newNode = new Tas();
	newNode->merk = merk;
	newNode->jenis = jenis;
	newNode->prc = harga;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand Tas : "<< cur->merk <<endl;
		cout << "Jenis Tas : "<< cur->jenis <<endl;
		cout << "Harga Tas : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("LT1943 Tas Import", "Tas Selempang", 124000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addLast("BQ2965 Tas Import", "Tas Selempang", 135000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
} 
