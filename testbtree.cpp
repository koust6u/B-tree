//#pragma warning(disable:4996)
//template��  **.h�� **.cpp�� �и����� �ʰ� **.h�� ���ľ� link error�� �ذ�
//#include "btnode.h"

#include <iostream>
#include <string>
#include "btree.h"

using namespace std;

const char * keys = "CSDTAMPIBWNGURKEHOLJYQZFXV";

const int BTreeSize = 4;
int main(int argc, char * argv) {
	int result, i;
	BTree <char> bt(BTreeSize);
	cout << "input data = " << keys << endl;
	result = bt.Create("btree.dat", ios::out);
	if (!result) { 
		cout << "Please delete testbt.dat" << endl; 
		system("pause");
		return 0; 

	}
	for (i = 0; i<26; i++)
	{
		cout << "Inserting " << keys[i] << endl;
		result = bt.Insert(keys[i], i);
		bt.Print(cout);
	}
	bt.Search(1, 1);
	bt.Remove('L');//���� - redistribute�� merge�� �����Ѵ�.
	//bt.InorderTraversal();
	system("pause");
	return 1;
}