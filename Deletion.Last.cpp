#include<iostream>
using namespace std;
struct TshirtKaos{
	string merk, jenis;
	int prc;
	TshirtKaos *next;
};

TshirtKaos *head, *tail, *cur, *newNode, *del;

void createSingleLinkedList(string merk, string jenis, int harga){
	head = new TshirtKaos();
	head->merk = merk;
	head->jenis = jenis;
	head->prc = harga;
	head->next = NULL;
	tail = head;
}

void addLast(string merk, string jenis, int harga){
	newNode = new TshirtKaos();
	newNode->merk = merk;
	newNode->jenis = jenis;
	newNode->prc = harga;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void removeLast(){
	del = tail;
	cur = head;
	while(cur->next != tail){
		cur = cur->next;
	}
	tail= cur;
	tail->next =NULL;
	delete del;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand TshirtKaos : "<< cur->merk <<endl;
		cout << "Jenis TshirtKaos : "<< cur->jenis <<endl;
		cout << "Harga TshirtKaos : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("Casual IEBE L1BI8030", "Lengan Pendek", 165000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addLast("KRO KZR 433", "Black Kelly Katun", 75000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	removeLast();
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
} 
