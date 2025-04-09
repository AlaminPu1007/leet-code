class ProductOfNumbers
{
    vector<int> prefixProducts;
    int n;

public:
    ProductOfNumbers()
    {
        prefixProducts = {1};
        n = 0;
    }

    void add(int num)
    {
        if (num == 0)
        {
            prefixProducts = {1};
            n = 0;
        }
        else
        {
            prefixProducts.push_back(prefixProducts[n] * num);
            n++;
        }
    }

    int getProduct(int k)
    {
        if (k > n)
            return 0;

        return prefixProducts[n] / prefixProducts[n - k];
    }
};