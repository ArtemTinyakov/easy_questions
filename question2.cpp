int main()
{
    // What will happen?
    const int x = 2; {const int x[x] = { 1, 2 };}
    const int y = 2; {const int y = y;}

}