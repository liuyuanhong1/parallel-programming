#include <vector>
#include <iostream>
using namespace std;


int main() {
	vector <int> a, b;
	bool alternate = true; //��֧�֧ާ֧ߧߧѧ�, �ܧ����ѧ� �ڧ٧ާ֧ߧ�֧� ��ӧ�� �٧ߧѧ�֧ߧڧ�, �� �٧ѧӧڧ�ڧާ���� ��� ���ԧ�, ��֧�֧է����� �٧ߧѧܧ� (true) �ڧݧ� �ߧ֧� (false)
	int a1; //��֧�ӧ�� ��ݧ֧ާ֧ߧ�

	cin >> a1;
	int tester = a1; //�� ��֧�֧ާ֧ߧߧ�� ���ѧߧڧ��� �٧ߧѧ�֧ߧڧ�, �� �ܧ������ �ҧ�է�� ���ѧӧߧڧӧѧ���� ����ݧ֧է���ڧ�
	if (a1 > 0) {
		b.push_back(a1);
	}
	else if (a1 < 0) {
		a.push_back(a1);
		b.push_back(a1);
	}

	int n;
	while (cin >> n) {
		if (n > 0) {
			b.push_back(n);
		}
		if (n < 0) {
			a.push_back(n);
			b.push_back(n);
		}
		if (tester*n > 0) alternate = false;  //�֧�ݧ� �ӧ���֧�ڧݧ� �էӧ� �٧ߧѧ�֧ߧڧ� ���է��� ��էߧ�ԧ� �٧ߧѧܧ�
		tester = n;
	}
	if (alternate == true) {
		for (int i = 0; i < b.size(); i++) {
			cout << b[i] << " ";
		}
	}
	if (alternate == false) {
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
