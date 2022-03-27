// this is a polybius square cipher program
#include <iostream>
#include <string>
using namespace std ;
// the function used to cipher letter
void cipher(string letter, char arr[6][6] )
{
    char row, column ;
    for (int p = 0; p< letter.length(); p++)
    {
        for (int i = 0; i< 6 ; i++)
        {
            for (int j = 0; j <6 ; j++)
            {
                if (letter[p]== 'j')
                {
                    letter[p]= 'i' ;
                }
                if (letter[p]== arr[i][j]  )
                {
                    row = arr[i][0] ;
                    column = arr[0][j] ;
                    cout<<row<<column ;
                }
            }
        }
    }
}
// this is a function to decipher numbers back to letters
void decipher(string numbers, char arr[6][6])
{
    int row2, column2 ;
    for (int p = 0, j = 1; p <(numbers.length()),j<(numbers.length()); p+=2,j+=2) {
        for (int i = 0; i < 6; i++) {
            for (int s = 0; s < 6; s++) {
                if (numbers[p] == arr[i][0] && numbers[j] == arr[0][s]&& numbers[p]!= ' ') {
                    row2 = i;
                    column2 = s;
                    cout << arr[row2][column2];
                }
            }
        }
    }
}

// main program body
int main()
{
string letter, dummy ;
int choose ;
char n1, n2, n3, n4, n5 ;
cout<<"enter1 for cipher or 2 for decipher " ;
cin>>choose ;
cout<<"enter your cipher table form in numbers " ;
cin>>n1>>n2>>n3>>n4>>n5 ;
char arr[6][6] = {{' ',n1,n2,n3,n4,n5},
                  {n1,'a','b','c','d','e'},
                  {n2,'f','g','h','i','k'},
                  { n3,'l','m','n','o','p'},
                  {n4,'q','r','s','t','u'},
                  {n5,'v','w','x','y','z'}} ;
getline(cin,dummy);
cout<<"enter your letter " ;
getline(cin, letter);
if (choose==1)
    cipher(letter,arr) ;
else
    decipher(letter, arr) ;
}