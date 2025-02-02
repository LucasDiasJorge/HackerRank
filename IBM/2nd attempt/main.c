#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100000

// Function to check if a character is a vowel
int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to count valid words efficiently
int* hasVowels(int strArr_count, char** strArr, int q, char** query, int* result_count) {
    *result_count = q; // Store the number of queries
    int* results = (int*)malloc(q * sizeof(int));
    if (!results) return NULL; // Handle allocation failure

    // Step 1: Precompute a prefix sum of valid vowel-start and vowel-end words
    int* prefix = (int*)calloc(strArr_count + 1, sizeof(int)); // Allocate prefix array
    if (!prefix) return NULL;

    for (int i = 0; i < strArr_count; i++) {
        int len = strlen(strArr[i]);
        prefix[i + 1] = prefix[i] + (len > 0 && isVowel(strArr[i][0]) && isVowel(strArr[i][len - 1]));
    }

    // Step 2: Process queries using the prefix sum array
    for (int i = 0; i < q; i++) {
        int l, r;
        sscanf(query[i], "%d-%d", &l, &r);
        results[i] = prefix[r] - prefix[l - 1]; // Range sum in O(1)
    }

    free(prefix); // Free allocated memory
    return results;
}

int main() {
    int strArr_count;
    scanf("%d", &strArr_count);

    char** strArr = (char**)malloc(strArr_count * sizeof(char*));
    for (int i = 0; i < strArr_count; i++) {
        strArr[i] = (char*)malloc(11 * sizeof(char)); // Max length 10 + 1 for '\0'
        scanf("%s", strArr[i]);
    }

    int query_count;
    scanf("%d", &query_count);

    char** query = (char**)malloc(query_count * sizeof(char*));
    for (int i = 0; i < query_count; i++) {
        query[i] = (char*)malloc(7 * sizeof(char)); // Max "100000-100000" (6 chars + '\0')
        scanf("%s", query[i]);
    }

    int result_count;
    int* result = hasVowels(strArr_count, strArr, query_count, query, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    // Free memory
    for (int i = 0; i < strArr_count; i++) free(strArr[i]);
    free(strArr);
    for (int i = 0; i < query_count; i++) free(query[i]);
    free(query);
    free(result);

    return 0;
}
