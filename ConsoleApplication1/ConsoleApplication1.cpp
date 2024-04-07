#include <iostream>
using namespace std;

//comlexity O(N)

int minimum(int arr[100],int n) {

	int mini = arr[0];
	for (int i = 1; i < n; i++) {
		if (mini > arr[i]) {
			mini = arr[i];
		}
		
	}
	return mini;

}
void task1() {

	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << minimum(arr,n);
}
float average(int arr[100], float n) {
	float sum = 0;

	for(int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum / n;
}
void task2() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << average(arr, n);

}

string isprime(int n) {
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0) {
			return "NO";
		}
	return "YES";
}

void task3() {
	int n;
	cin >> n;
	cout << isprime(n);
}

int factorial(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		return factorial(n - 1) * n;
	}
}

void task4() {
	int n;
	cin >> n;
	cout << factorial(n);
}

int fibonacci(int n) {
	if (n <= 1)
		return n;
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	
}

void task5() {
	int n;
	cin >> n;
	cout << fibonacci(n);
}

int power(int a, int n) {
	int sum = 1;
	if (n == 0) {
		return 1;
	}
	else
		for (int i = 0; i < n; i++) {
		sum *= a;
		}
	return sum;
}

void task6() {
	int a, n;
	cin >> a >> n;
	cout << power(a, n);
}


string allvariants(string word){




}


int main() {

	
	task6();

	return 0;



}
