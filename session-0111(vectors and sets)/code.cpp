// Vector is a sequence container and also known as dynamic array.
// Its size can grow and shrink dynamically, and no need to provide size at compile time.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Creating and initializing a vector
	vector<int> vec1;
	vector<int> vec2(10);
	vector<int> vec3(5, 10);
	vector<int> vec4(vec2.begin(), vec2.end());
	vector<int> vec5{1, 2, 3, 4, 5, 6};

	// Inserting elements into vector
	vec1.push_back(1); // O(1)
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.pop_back(); // O(1)

	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1.at(i) << " ";
	}

	cout << "\n";

	// For each loop
	for (auto x : vec1)
	{
		cout << x << " ";
	}

	cout << "\n";

	vector<string> str{"Red", "Yellow", "Green"};

	str.push_back("Blue");

	for (auto x : str)
	{
		cout << x << "\n";
	}

	cout << "\n";

	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int no;
		cin >> no;
		v.push_back(no);
	}

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &x : v)
	{
		cin >> x;
	}

	// When size of the vector is not known
	vector<int> v;
	int n;
	string line;
	while (getline(cin, line))
	{
		istringstream iss(line);
		while (iss >> n)
		{
			v.push_back(n);
		}
	}

	for (auto x : v)
	{
		cout << x << " ";
	}

	cout << "\n";

	vector<int> v1;
	int input;
	while (cin >> input)
	{
		v1.push_back(input);
	}

	for (auto x : v1)
	{
		cout << x << " ";
	}

	cout << "\n";

	vector<int> d{1, 2, 3, 4, 5};

	// Inserting elements in the middle
	d.insert(d.begin() + 3, 100); // O(N)

	d.insert(d.begin() + 3, 3, 100);

	// Erasing elements in the middle
	d.erase(d.begin() + 2);

	d.erase(d.begin() + 2, d.begin() + 5);

	// Removing all elements
	// d.clear();

	// Checking if vector is empty
	if (d.empty())
	{
		cout << "Empty"
				 << "\n";
	}

	for (auto x : d)
	{
		cout << x << " ";
	}

	cout << "\n";

// Accessing first element of the vector
cout << d.front() << "\n";

// Accessing last element of the vector
cout << d.back() << "\n";

// STL Algorithms

vector<int> vec{21, 54, 19, 93, 45, 7};

// Sorting algorithm - Introsort, best possible time complexity

sort(vec.begin(), vec.end());

for (auto x : vec)
{
	cout << x << " ";
}

// Reverse algorithm

reverse(vec.begin(), vec.end());

for (auto x : vec)
{
	cout << x << " ";
}

int x1 = *max_element(vec.begin(), vec.end());
cout << x1 << "\n";

int x2 = *min_element(vec.begin(), vec.end());
cout << x2 << "\n";

int x3 = accumulate(vec.begin(), vec.end(), 0);
cout << x3 << "\n";

int x4 = count(vec.begin(), vec.end(), 19);
cout << x4 << "\n";

if (find(vec.begin(), vec.end(), 19) != vec.end())
{
	cout << "Element found"
				<< "\n";
}
else
{
	cout << "Element not found"
				<< "\n";
}

	// Set

// Set is an associative container that contains a sorted set of unique elements.
// Insertion, Removal, Search have logarithmic complexity.

	set<int> s;

	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(2);
	s.insert(2);
	s.insert(9);
	s.erase(9);

	for (auto x : s)
	{
		cout << x << " ";
	}

	// Accessing elements

	auto it = s.find(3);
	if (it == s.end())
	{
		cout << "Not found"
				 << "\n";
	}
	else
	{
		cout << "Found"
				 << "\n";
	}

	vector<int> arr{1, 2, 3, 4, 5, 6, 2, 2, 4, 4, 4, 5};

	set<int> st;
	for (int i = 0; i < arr.size(); i++)
	{
		st.insert(arr[i]);
	}

	for (auto x : st)
	{
		cout << x << " ";
	}

	return 0;
}
