#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string c) 
{
    int k=0;
    int count[26]={0},x;
    while(c[k]!='\0')
    {
        if(c[k]>='a'&&c[k]<='z')
        {
            x=c[k]-'a';
            count[x]++;
        }
        k++;
    }
    int max=count[0];
    for(int i=1;i<26;i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    bool flag=false;
    for(int i=0;i<26;i++)
    {
        if(count[i]==max||count[i]==(max-1))
            flag=true;
        else
        {
            flag=false;
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
