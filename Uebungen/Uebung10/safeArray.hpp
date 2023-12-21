#ifndef SAFE
#define SAFE
class safeArray
{
    private:
    int array[100];
    public:
    safeArray();
    safeArray(int value);
    bool setAt(unsigned int pos, int val);
    int getAt(unsigned int pos);
    int getMinimum();
    bool fill(unsigned int pos1, unsigned int pos2, int value);
};
#endif