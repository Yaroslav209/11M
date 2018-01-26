#include <iostream>
#include <vector>
using namespace std;

int main() {
	int v, r;
	// v - кол-во вершин
	// r - кол-во рёбер
	cin >> v >> r;
	bool Ep = 1;
vector <int> G(v, v);
for(int i = 0; i < v; i++){
    for(int j = 0; j < v; j++)
G[i][j] = 0;
}
for(int i = 0; i < r; i++){
	int m, n;
	cin >> m >> n;
	G[m][n] = 1;
	G[n][m] = 1;
}
// cчитывание графа с помощью матрицы смежности
for(int i = 0; i < v; i++){
	int c = 0;
	// с - степень вершины
	for(int j = 0; j < r; j++)
		c = c + G[i][j];
		int a = c / 2;
		if(a + a != c)
		Ep = 0;
}
// проверка вершин на чётность степени
if (Ep == 0) 
cout << "NONE";
else cout << "Yes";
	return 0;
}
