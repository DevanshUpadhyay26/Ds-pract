

/*

1. if statements
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else
        std::cout << "The value is zero\n";

1.1. If no Conditional Stmt---
    if (0) // nonsensical, but for the sake of example...
        std::cout << "hi\n";
    else
        std::cout << "bye\n";


1.2. Early Return-----------------
bool isPrime(int x){
    if (x == 2 || x == 3 || x ==5 || x==7)
        return true;
    return false;
}
int main()
{
    int x{};
    std::cin>>x;   
    if(isPrime(x))std::cout<<x<<"is the prime number";
    else std::cout<<x<<"is not prime number";
    
}

*/
