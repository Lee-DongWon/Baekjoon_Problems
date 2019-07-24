#include <iostream>
#include <cstdio>
#include <queue>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <string>

using namespace std;

struct Point {
	int x, y;
	bool operator < (const Point p)const {
		if (p.x != x) {
			return p.x < x;
		}
		return p.y < y;
	}
};

struct Result {
	int who;
	double dist;
	bool operator < (const Result q)const {
		return q.dist < dist;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	double threshold = 0.01;
	int n, G;

	cin >> n >> G;
	n++;

	double min_dist[50005] = { 0 };
	map<Point, int> index;
	vector<int> canGo[50005];

	Point coordinates[50005];
	Point current;
	Result now, next;

	vector <int> destination;

	current.x = 0;
	current.y = 0;

	index[current] = 1;

	if (G == 0) {
		destination.push_back(1);
	}
	coordinates[1].x = 0;
	coordinates[1].y = 0;
	min_dist[1] = 0;

	for (int i = 2; i < n + 1; i++) {
		cin >> coordinates[i].x >> coordinates[i].y;
		min_dist[i] = -1;
		if (coordinates[i].y == G) {
			destination.push_back(i);
		}
		index[coordinates[i]] = i;
	}

	for (int i = 1; i < n + 1; i++) {
		for (int px = -2; px <= 2; px++) {
			for (int py = -2; py <= 2; py++) {
				if (px == 0 && py == 0) {
					continue;
				}
				current.x = coordinates[i].x + px;
				current.y = coordinates[i].y + py;
				if (index[current]) {
					canGo[i].push_back(index[current]);
				}
			}
		}
	}

	priority_queue <Result> pq;
	now.who = 1; now.dist = 0;
	pq.push(now);
	while (!pq.empty()) {
		now = pq.top();
		pq.pop();
		if (now.dist > min_dist[now.who] + threshold) {
			continue;
		}
		int x = now.who;
		double y = min_dist[x];
		for (auto &z : canGo[x]) {
			double dx = coordinates[x].x - coordinates[z].x;
			double dy = coordinates[x].y - coordinates[z].y;
			double cost = y + sqrt(dx * dx + dy * dy);
			if (min_dist[z] < 0 || cost < min_dist[z]) {
				next.dist = cost;
				min_dist[z] = cost;
				next.who = z;
				pq.push(next);
			}
		}
	}

	double result = -1;
	for (auto &x : destination) {
		if (min_dist[x] > 0 && (result<-threshold || result>min_dist[x])) {
			result = min_dist[x];
		}
	}


	if (result < -threshold) {

		cout << "-1\n";
	}
	else {
		long long modified_result = (result + threshold) * 10;
		int remainder = modified_result % 10;
		modified_result /= 10;
		if (remainder >= 5) {
			modified_result++;
		}


		cout << modified_result << "\n";
	}



	return 0;
}