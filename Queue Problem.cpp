#include <iostream>
#include <queue>
using namespace std;
void main() {
	int n;
	queue<int> lines;
	do
	{
		cin >> n;
		if (!n == 0)
			lines.push(n);
	} while (!n == 0);
	while (!lines.empty()) 
	{
		queue<int> cards;
		for (int i = 1; i <= lines.front(); i++)
			cards.push(i);
		cout << "input: " << lines.front() << endl;
		cout << "Discarded cards: ";
		while (cards.size() >= 2)
		{
			cout << cards.front() << ", ";
			cards.pop();
			cards.push(cards.front());
			cards.pop();
		}
		cout << endl << "Remaining card: " << cards.front() << endl << endl;
		lines.pop();
	}
}