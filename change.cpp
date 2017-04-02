#include <iostream>
#include<vector>
#include<list>
int get_change(int m) {
	//write your code here
	int tens = m / 10;
	int fifes = (m - tens * 10) / 5;
	int ones = (m - tens * 10 - fifes * 5) / 1;
	int n = tens + fifes + ones;
	//std::cout << "tens: " << tens << " fifes: " << fifes << " ones: " << ones << "\n";
	return n;
}

int main() {
	int m;
	std::cin >> m;
	std::cout << get_change(m) << '\n';
	/*for (int i = 0; i < 10;++i){
	int n = rand() % 1000;
	std::cout << n << "  \n";
	std::cout << get_change(n) << '\n';
	}*/
	//system("pause");
}
