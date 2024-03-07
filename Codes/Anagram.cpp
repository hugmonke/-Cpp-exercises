#include<bits/stdc++.h>

/*
Write a program that, given the original word, will find among the words on the list below its anagrams. 
The length of words on input will be at most 20. Words will consist only of lowercase letters of the English alphabet.

UNPUT
A word whose anagrams we are looking for, followed by a natural number n - the length of the word list, followed by the list of words below, line by line.

OUTPUT
A list of words that are anagrams of the given word, line by line, in the order they appeared on the input list.*/

bool isPalindrome(string s) {
    int poczatek = 0;
    int koniec = s.size() - 1;
    while (poczatek <= koniec)
    {
        if (!isalnum(s[poczatek]))
        {
            poczatek++;
        }
        if (!isalnum(s[koniec]))
        {
            koniec--;
        }
        if (tolower(s[poczatek]) != tolower(s[koniec]))
        {
            return false
        }
        else
        {
            poczatek++;
            koniec--;
        }
        return true
    }
}
int main()
{
    string piesek = kobylamamalybok
        isPalindrome()
}
