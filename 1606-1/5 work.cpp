#include <vector>
#include <iostream>
using namespace std;


int main() {
	vector <int> a, b;
	bool alternate = true; //§á§Ö§â§Ö§Þ§Ö§ß§ß§Ñ§ñ, §Ü§à§ä§à§â§Ñ§ñ §Ú§Ù§Þ§Ö§ß§ñ§Ö§ä §ã§Ó§à§Ö §Ù§ß§Ñ§é§Ö§ß§Ú§Ö, §Ó §Ù§Ñ§Ó§Ú§ã§Ú§Þ§à§ã§ä§Ú §à§ä §ä§à§Ô§à, §é§Ö§â§Ö§Õ§å§ð§ä§ã§ñ §Ù§ß§Ñ§Ü§Ú (true) §Ú§Ý§Ú §ß§Ö§ä (false)
	int a1; //§á§Ö§â§Ó§í§Û §ï§Ý§Ö§Þ§Ö§ß§ä

	cin >> a1;
	int tester = a1; //§Ó §á§Ö§â§Ö§Þ§Ö§ß§ß§à§Û §ç§â§Ñ§ß§Ú§ä§ã§ñ §Ù§ß§Ñ§é§Ö§ß§Ú§Ö, §ã §Ü§à§ä§à§â§í§Þ §Ò§å§Õ§å§ä §ã§â§Ñ§Ó§ß§Ú§Ó§Ñ§ä§î§ã§ñ §á§à§ã§Ý§Ö§Õ§å§ð§ë§Ú§Ö
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
		if (tester*n > 0) alternate = false;  //§Ö§ã§Ý§Ú §Ó§ã§ä§â§Ö§ä§Ú§Ý§Ú §Õ§Ó§Ñ §Ù§ß§Ñ§é§Ö§ß§Ú§ñ §á§à§Õ§â§ñ§Õ §à§Õ§ß§à§Ô§à §Ù§ß§Ñ§Ü§Ñ
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
