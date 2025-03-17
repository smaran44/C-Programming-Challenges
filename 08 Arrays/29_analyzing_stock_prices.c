#include <stdio.h>

// Function Prototypes
void findmaxmin(int n, int prices[]);
void findtrend(int n, int prices[]);
void finddrops(int n, int prices[]);
void sort(int n, int prices[]);
void findkheighest(int n, int prices[], int k);
void findmaxprofit(int n, int prices[]);

int main() {
    int prices[] = {100, 120, 90, 130, 80, 140, 110, 150, 95, 160};
    int n = sizeof(prices) / sizeof(prices[0]); // Get number of elements
    
    findmaxmin(n, prices);
    findtrend(n, prices);
    finddrops(n, prices);
    sort(n, prices);
    
    int k;
    printf("Enter k to find k-th highest price: ");
    scanf("%d", &k);
    findkheighest(n, prices, k);
    
    findmaxprofit(n, prices);
    
    return 0;
}

// -------------------------------
// Function to Find Max & Min Stock Prices
// -------------------------------
void findmaxmin(int n, int prices[]) {
    int max_price = prices[0], min_price = prices[0];
    int max_day = 1, min_day = 1;  // Tracking days

    for (int i = 1; i < n; i++) {
        if (prices[i] > max_price) {  
            max_price = prices[i];
            max_day = i + 1;  // Convert index to 1-based day number
        } 
        if (prices[i] < min_price) {  
            min_price = prices[i];
            min_day = i + 1;
        }
    }
    printf("Highest price: %d on day %d\n", max_price, max_day);
    printf("Lowest price: %d on day %d\n", min_price, min_day);
}

// -------------------------------
// Function to Find Longest Increasing Trend
// -------------------------------
void findtrend(int n, int prices[]) {
    // Variables to track the longest increasing trend
    int max_length = 1;      // Stores the maximum length of increasing sequence found
    int current_length = 1;  // Stores the length of the current increasing sequence

    // Variables to store the start and end indices of the longest increasing trend
    int start = 1, end = 1;  
    int temp_start = 1;  // Temporary variable to track potential new start of an increasing sequence

    // Loop through the array from the second element (index 1) to the last element
    for (int i = 1; i < n; i++) {
        // If the current price is greater than the previous price, it's part of an increasing sequence
        if (prices[i] > prices[i - 1]) {  
            current_length++;  // Increase the length of the current increasing sequence

            // If the current increasing sequence is longer than the previously recorded max length
            if (current_length > max_length) {  
                max_length = current_length;  // Update max_length
                start = temp_start;  // Update the start of the longest increasing sequence
                end = i + 1;  // Update the end index (1-based index)
            }
        } else {  
            // If the sequence is not increasing, reset the current sequence length
            current_length = 1;
            temp_start = i + 1;  // Mark the next element as the potential new start
        }
    }

    // Print the longest increasing trend found
    printf("Longest increasing trend: Start day %d to End day %d\n", start, end);
}

// -------------------------------
// Function to Find Sudden Drops (>10% drop)
// -------------------------------
void finddrops(int n, int prices[]) {
    // Print a header message to indicate the output
    printf("Sudden drops occur on:\n");

    // Loop through the array starting from the second element (index 1)
    for (int i = 1; i < n; i++) {
        // Check if the price drops by more than 10% compared to the previous day
        if (prices[i] < prices[i - 1] * 0.9) {  
            // Print the day (1-based index) and the price on that day
            printf("Day %d: %d\n", i + 1, prices[i]);
        }
    }
}

// -------------------------------
// Function to Sort Stock Prices (Bubble Sort)
// -------------------------------
void sort(int n, int prices[]) {
    // Create an array to store the sorted prices
    int sorted_prices[100];  

    // Copy original prices into the sorted_prices array
    for (int i = 0; i < n; i++) {
        sorted_prices[i] = prices[i];  
    }

    // Implementing Bubble Sort to sort the prices in ascending order
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparisons
            // Swap if the current element is greater than the next element
            if (sorted_prices[j] > sorted_prices[j + 1]) {  
                int temp = sorted_prices[j];
                sorted_prices[j] = sorted_prices[j + 1];
                sorted_prices[j + 1] = temp;
            }
        }
    }

    // Print the sorted prices
    printf("Sorted prices: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sorted_prices[i]);
    }
    printf("\n");
}

// -------------------------------
// Function to Find k-th Highest Stock Price
// -------------------------------
void findkheighest(int n, int prices[], int k) {
    // Create an array to store the sorted prices
    int sorted_prices[100];

    // Copy original prices into the sorted_prices array
    for (int i = 0; i < n; i++) {
        sorted_prices[i] = prices[i];
    }

    // Sorting the array in descending order using Bubble Sort
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparisons
            // Swap if the current element is smaller than the next element
            if (sorted_prices[j] < sorted_prices[j + 1]) {  
                int temp = sorted_prices[j];
                sorted_prices[j] = sorted_prices[j + 1];
                sorted_prices[j + 1] = temp;
            }
        }
    }

    // Check if k is within a valid range
    if (k > n) {
        printf("Invalid value of k\n");  // Print an error message if k is too large
    } else {
        // Print the k-th highest price (1-based index)
        printf("%d-th highest price: %d\n", k, sorted_prices[k - 1]);
    }
}

// -------------------------------
// Function to Find Best Buy & Sell Days for Max Profit
// -------------------------------
void findmaxprofit(int n, int prices[]) {
    // Initialize minimum price to the first day's price and store its day
    int min_price = prices[0], min_day = 1;

    // Initialize max profit to 0 and set initial buy/sell days
    int max_profit = 0, buy_day = 1, sell_day = 1;

    // Loop through the price array starting from the second day
    for (int i = 1; i < n; i++) {
        // Update minimum price if a lower price is found
        if (prices[i] < min_price) {  
            min_price = prices[i];
            min_day = i + 1;  // Store the day of the new minimum price
        }

        // Calculate profit if selling on the current day
        int profit = prices[i] - min_price;

        // If the current profit is the highest so far, update max_profit and store the buy/sell days
        if (profit > max_profit) {  
            max_profit = profit;
            buy_day = min_day;  // Buy at the lowest price encountered so far
            sell_day = i + 1;   // Sell on the current day
        }
    }

    // If a profitable transaction is found, print the result
    if (max_profit > 0) {
        printf("Buy on day %d and sell on day %d for max profit of %d\n", buy_day, sell_day, max_profit);
    } else {
        // If no profit is possible, print the appropriate message
        printf("No profitable transactions possible\n");
    }
}
