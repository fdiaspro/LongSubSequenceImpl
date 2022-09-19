#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void lcb(std::string journal, std::string spell_)
{
    int m = journal.size();
    int n = spell_.size();
    int lcs_array[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            lcs_array[i][j] = 0;


  cout << journal << endl << spell_ << endl;


for (int i = 0; i <m; i++)
{
    int last_value = 0;
   
    for (int j = 0, flag = 1; j < n ; j++)
    {

        if (journal.at(i) == spell_.at(j) )
        {
            lcs_array[i][j] = (i > 0 && j > 0 ? lcs_array[i - 1][j - 1] : 0) + 1;
        }
        else {
            lcs_array[i][j] = max( (j > 0 ? lcs_array [i ][j - 1]  : 0 ),
                (i > 0 ? lcs_array[i-1][j ] : 0) );
        }
    
         
    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
        cout << lcs_array[i][j] << " ";
    cout << endl;
}
cout << lcs_array[m-1][n-1] << endl;
}



int main()
{
    string s1 = "owXoGkyywKCOawTbAWDlwnPxpYgMRkzlshtCdUPIFPyPjRitzzhZonPHgVNzmRbjrekwaICnTeKofGlQPyIBjhSvWSZszxlXSnJpYtHhyOaymWyMNSZTlVJsxODLABTrnUKFEqpPgDHHonHxPpPXjgVQrlAUnUHdcyKdSwKcKBwVEyOSvCWEBKgpTfLUWHrHjfqQpGcOtkSknGcsYBPFHenMSswpBdIOyQhuelZbEQgugHtDSGaRYoCUuggKJTmhcGgDsMzgLhHNUKRudARFhCUnoPKECBtflftYxEbdqvloTrIrZliDmJDbJVnlYmVHyAzgTBeyRyVrklKAeYFiCDedA";
    string s2 = "akiGhSpunLiOOSkCIvAByOBlxeqEsxlKTxtiXckfYNjPMKgzFjzuqxtgaYlQPCQdHNRWlZmVTjCBrOAZlLMFAoSddbkdBaZvxHRhNYHuacvYFaYcykllCVgwxTLeTXBsSHKfdarwMslzRtAwrMHHqyPRfxWhROGBhRrBiHiBOwpvrxkWlRZrBfbkyncKbbigKyybNvNzfrCbSscYbrlkDqReezWGNxoGCBYAgpydIJFYjLtPmkfiQWbVolHUflczAygdcXbycvCVPxBrJiRasejaLPgpVzOcpyQVUjTAzrVDwkChkIpgvvcBYXJJbbvnwDBtqeOyqTFNraPvwLvnlBuPOUOLwBVWKzeItbgAgzmYsQcPQOVXhzaOxjSPusOrFOQrsoVmaZGLzSxjlNRxZKmPKSRfjJdHAnPutrGfXDHfYnHtaAfFTzszADNgwcenIlzsGlWNXACTHlUXPssSlrqgEyQcRdxFUzzVVGYbzRWIbqindjkppVqjFhTTzLCXBasqUGyxaQkyCzwfHUvN";
    string s3 = "AquaVitae ";
    string s4 = "AruTaVae";
    lcb(s1, s2);

    return 0;
}