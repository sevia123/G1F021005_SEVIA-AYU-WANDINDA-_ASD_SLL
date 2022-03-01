#include<iostream>
using namespace std;
struct SmartPhone{
	string merk, jenis;
	int prc;
	SmartPhone *next;
};

SmartPhone *head, *tail, *cur, *newNode,*del, *after;

void createSingleLinkedList(string merk, string jenis, int harga){
	head = new SmartPhone();
	head->merk = merk;
	head->jenis = jenis;
	head->prc = harga;
	head->next = NULL;
	tail = head;
}

int countSingleLinkedList(){
	cur = head;
	int NO = 0;
	while(cur != NULL){
		NO++;
		cur = cur->next;
	}
	return NO;
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

void removeMiddle(int tempat){
	if ( tempat < 1 || tempat > countSingleLinkedList() ){
		cout << "Tempat Diluar Batas " << endl;
	}else if( tempat == 1 || tempat == countSingleLinkedList() ){
		cout << "Tempat Tidak Di Tengah " << endl;
	} else {
	int NO = 1;
	cur = head;
	while (NO <= tempat){
		if (NO == tempat -1){
			after = cur;
		}
		if (NO == tempat){
			del = cur;
		}
		cur = cur->next;
		NO++;
	}
	after->next = cur;
	delete del;
	}
}

void printSingleLinkedList(){
	cout << "Nomor yang Terdata : " << countSingleLinkedList() << endl;
	cur = head;
	while(cur != NULL){
		cout << "Brand SmartPhone : "<< cur->merk <<endl;
		cout << "Jenis SmartPhone : "<< cur->jenis <<endl;
		cout << "Harga SmartPhone : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("IPHONE", "X", 9000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("IPHONE", "12 PRO MAX", 21000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("IPHONE", "13", 24000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("IPHONE", "XR", 6000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	removeMiddle(2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
} 
