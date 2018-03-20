// Agradeço a DEUS pelo dom do conhecimento
#include <iostream>
using namespace std;

int main(int _c, char **_v){
	int t, a, b, c, i = 0;
	cin >> t;
	while(t--, cin >> a >> b >> c) {
		if(a > b && a < c || a < b && a > c)
			cout << "Case " << ++i << ": " << a;
		else if(b > a && b < c || b < a && b > c)
			cout << "Case " << ++i << ": " << b;
		else
			cout << "Case " << ++i << ": " << c;
		if(t > 0)
			cout << "\n";
	}
}
