#include<iostream>

using namespace std;

struct Tas{
	string jenis, merk;
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

void addFirst(string merk, string jenis, int harga){
	newNode = new Tas();
	newNode->merk = merk;
	newNode->jenis = jenis;
	newNode->prc = harga;
	newNode->next = head;
	head = newNode;
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

int main()
{	
	createSingleLinkedList("Tas Guess", "Tas Selempang", 345000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("LT1892 Tas Import", "Tas Selempang", 137000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
} 
