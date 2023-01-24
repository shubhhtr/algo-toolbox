#include <iostream>
#include <vector>

using namespace std;

int carfu(int d, int t, vector<int>& stops) {
	if (d <= t){
        return 0;
    } 
	int i = 0;
	int count = 0;
	int pos = 0;
	int dis = 0;
	bool f = false;

	stops.push_back(d);

	while (dis < d) {
		while (i < stops.size() and stops[i] - pos <= t) {
			i++;
			f = true;
		}
		if (f) {
			if (i == stops.size()) break;
			pos = stops[i - 1];
			dis = pos;
			count += 1;
		} else {
			return -1;
		}
		f = false;
	}
	return count;
}

int main() {
	int d,m,n;
    cin>>d>>m>>n;
	vector<int> v(n);
	for (size_t i = 0; i < n; ++i){
        cin >> v[i];
    } 
	cout << carfu(d, m, v) << "\n";
	return 0;
}