#include<bits/stdc++.h>
using namespace std;

int rand(int  a, int b) 
{
	return a + rand() % (b - a + 1);  // returns a random number belonging to interval [a, b]
}

ifstream fin;
ofstream fout;

void solve() {  //The logic of the problem , just paste your solve function here and replace cin, cout with fin, fout


}


void create(int file) {  //don't change this function
	string a = to_string(file);
	if (a.size() < 2)
		a = '0' + a;

	fin.open("input" + a + ".txt");
	fout.open("output" + a + ".txt");

	int T;
	fin >> T;
	for (int i = 0; i < T; i++) {
		solve();
	}
	fout.close();
	fin.close();
}

int main() {
	srand (time (0));  // to generate different random numbers at each execution step
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int number_of_files; cin>>number_of_files;
	for (int file = 0; file <number_of_files; file++) {
		create(file);
	}
	return 0;

}