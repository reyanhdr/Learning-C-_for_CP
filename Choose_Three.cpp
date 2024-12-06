#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, m;  // n is the size of the array, m is the target number
        cin >> n >> m;

        // Declare the array to store elements
        int arr[1000];  // Assuming max size of array is 1000 (adjust as needed)

        // Input array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Declare a boolean array to track remainder mod m
        bool dp[1000] = {false};  // Array of size m, all initialized to false
        dp[0] = true;  // Sum of the empty subset is 0, which is divisible by m

        // Process each element in the array
        for (int i = 0; i < n; i++) {
            // Temporary array to store updated states
            bool temp[1000] = {false};

            // Update the temp dp array based on the current element arr[i]
            for (int j = 0; j < m; j++) {
                if (dp[j]) {
                    temp[(j + arr[i]) % m] = true;
                }
            }

            // Update dp with the new values from temp
            for (int j = 0; j < m; j++) {
                dp[j] = temp[j];
            }
        }

        // If dp[0] is true, we found a subset whose sum is divisible by m
        if (dp[0]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
