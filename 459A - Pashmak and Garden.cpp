/*   https://codeforces.com/problemset/problem/459/A   */	

#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <vector>
	#include <string>
	#include <queue>
	#include <stack>
	#include <chrono>
	#include <map>
	#include <unordered_map>
	#include <math.h>
	#include <set>
	#include <algorithm>
	#include <iostream>
	#include <fstream>

	#define IO 	std::ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	typedef long long int ll;

	#define  endl  '\n'

	//#define TIME_TEST  
	using namespace std::chrono;
	using namespace std;


	int get_size(int* s)
	{
		int size = 0;
		for (int i = 0; s[i] != '\0'; i++)
		{
			size++;
		}
		return size;
	}


	void swap(int* xp, int* yp)
	{
		int temp = *xp;
		*xp = *yp;
		*yp = temp;
	}

	int count_digits(int n)
	{
		int count = 0;
		do {
			n /= 10;
			++count;
		} while (n != 0);
		return count;
	}



	int main()
	{
	#ifdef TIME_TEST
		// Get starting timepoint
		auto start = high_resolution_clock::now();
	#endif // TIME_TEST
	#ifndef ONLINE_JUDGE
		freopen("input.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif // !ONLINE_JUDGE*/

		IO


			int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
			cout << -1 << endl;
		else if (x1 == x2)
			cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 << endl;
		else if (y1 == y2)
			cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << endl;
		else
			cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;



	#ifdef TIME_TEST	
		// Get ending timepoint
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		cout << endl;
		cout << "Time taken "
			<< duration.count()/1000.0 << " milliseconds" << endl;	
	#endif // TIME_TEST



		return 0;
	}

	
