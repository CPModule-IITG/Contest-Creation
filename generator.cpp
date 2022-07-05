#include<bits/stdc++.h>
using namespace std;

int rand(int  a, int b) 
{
	return a + rand() % (b - a + 1);  // returns a random number belonging to interval [a, b]
}

ifstream fin;
ofstream fout;

void generate(int file) // modify the function according to the testcase you want
{
	int testcases=1000;
	fout<<testcases<<"\n";
	for(int i=0; i<testcases; i++)
	{
		int n=i/10+1;
		fout<<n<<"\n";
		for(int j=0; j<n; j++)
			fout<<j+1<<" ";
		fout<<"\n";
	}
}

void create(int file) //don't change this function
{  
	string a = to_string(file);
	if (a.size() < 2)
		a = '0' + a;
	fout.open("input" + a + ".txt");
	generate(file);
	fout.close();
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