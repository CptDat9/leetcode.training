char findTheDifference(char* s, char* t) {
    int ans =0;
    for (int i =0; s[i]!='\0'; i++)
    {
        ans -= (int)s[i];
    }    
    for (int j =0; t[j]!='\0'; j++)
    {
        ans += (int)t[j];
    }
    return (char)ans;
}
