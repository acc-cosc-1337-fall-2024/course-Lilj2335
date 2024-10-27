//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    double sum = 0;
    for (auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C') sum++;
    }
    return sum/dna.length();
}
string get_dna_complement(string dna)
{
    dna = reverse_string(dna);
    for (auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'C') dna[i] = 'G';
        else if(dna[i] == 'G') dna[i] = 'C';
        else if(dna[i] == 'A') dna[i] = 'T';
        else if(dna[i] == 'T') dna[i] = 'A';
    }
    return dna;
}
string reverse_string(string dna)
{
    string reversed = "";
    for (int i = dna.length(); i >= 0; i--)
    {
        reversed += dna[i];
    }
    return reversed;
}