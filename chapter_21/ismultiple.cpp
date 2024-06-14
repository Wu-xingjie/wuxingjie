template<typename T>
struct IsMultiple
{
    T Divisor;
    IsMultiple(const T& divisor)
    {
        Divisor = divisor;
    }

    bool operator() (const T& divisor) const
    {
        return (Divisor % divisor == 0); 
    }
};

int main()
{

    return 0;
}