#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers (0-13 range assumed): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-compute 
    
    int hash[14] = {0}; 
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++; 
    }

    // Finding MAX and MIN Frequency 
    
    int max_freq = -1;
    int min_freq = n+1;
    
    int max_number = -1; 
    int min_number = -1; 

    for(int i = 0; i <= 13; i++) { 
        
        if (hash[i] > 0) {
            int current_freq = hash[i];
            
            // Maximum Frequency Check
            if (current_freq > max_freq) {
                max_freq = current_freq;
                max_number = i; 
            }
            
            // Minimum Frequency Check
            if (current_freq < min_freq) {
                min_freq = current_freq;
                min_number = i; 
            }
        }
    }
    

    cout << "Highest Frequency is " << max_freq << " (for number " << max_number << ")" << endl;
    cout << "Lowest Frequency is " << min_freq << " (for number " << min_number << ")" << endl;

    return 0;
}