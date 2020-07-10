#include<stdio.h>
#include<string.h>

// INPALPHABET is the number of characters in the input alphabet
#define INPALPHABET 256

/**
 * @param pat -> pattern
 * @param txt -> text
 * @param q -> A prime number
 */
void search(char pat[], char txt[], int q) {
    int patternLen = strlen(pat);
    int textLen = strlen(txt);
    int i, j;
    int hashPattern = 0; // hash value for pattern
    int hashText = 0; // hash value for txt
    int h = 1;

    // The value of h would be "pow(INPALPHABET, patternLen-1)%q"
    for (i = 0; i < patternLen - 1; i++) {
        h = (h * INPALPHABET) % q;

    }

    // Calculate the hash value of pattern and first 
    // window of text 
    for (i = 0; i < patternLen; i++) {
        hashPattern = (INPALPHABET * hashPattern + pat[i]) % q;
        hashText = (INPALPHABET * hashText + txt[i]) % q;
    }

    // Slide the pattern over text one by one 
    for (i = 0; i <= textLen - patternLen; i++) {

        // Check the hash values of current window of text 
        // and pattern. If the hash values match then only 
        // check for characters on by one 
        if (hashPattern == hashText) {
            /* Check for characters one by one */
            for (j = 0; j < patternLen; j++) {
                if (txt[i + j] != pat[j])
                    break;
            }

            // if hashPattern == hashText and pat[0...patternLen-1] = txt[i, i+1, ...i+patternLen-1]
            if (j == patternLen) {
                printf("Pattern found at index %d \n", i);

            }
        }

        // Calculate hash value for next window of text: Remove 
        // leading digit, add trailing digit 
        if (i < textLen - patternLen) {
            hashText = (INPALPHABET * (hashText - txt[i] * h) + txt[i + patternLen]) % q;

            // We might get negative value of hashText, converting it
            // to positive 
            if (hashText < 0) {
                hashText = (hashText + q);
            }
        }
    }
}

/* Driver program to test above function */
int main() {
    char txt[] = "Hello World!";
    char pat[] = "!";
    int q = 101; // A prime number 
    search(pat, txt, q);
    return 0;
} 