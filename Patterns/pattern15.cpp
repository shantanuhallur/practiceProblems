#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cin >> n;
    while (row<=n)
    {
        //print space
        int space =n-row;
        while (space--)
        {
            cout<<" ";
        }
        //print first triangle
        int col=1;
        while (col<=row)
        {
            cout<<col;
            col++;
        }
        //print second triangle
        int start=row-1;
        while (start--)
        {
            cout<<start+1;

        }
        
        row++;
        cout<<"\n";
        
    }

    return 0;
}