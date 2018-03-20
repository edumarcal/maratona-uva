// Agradeço a DEUS pelo dom do conhecimento
#include <iostream>
using namespace std;

int main(int _c, char **_v){
	int t, a, b;
	cin >> t;
	while(t--, cin >> a >> b) {
		if(a > b)
			cout << ">";
		else if(a < b)
			cout << "<";
		else if(a == b)
			cout << "=";
		if(t > 0)
			cout << "\n";
	}
}
