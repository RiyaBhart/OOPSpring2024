#include <iostream>
#include <cstdlib> // library used for rand(), to select random number
using namespace std;

class Image
{
private:
    int width;
    int height;
    int *data;

public:
    // Constructor
    Image(int w, int h, const int *imageData) : width(w), height(h)
    {

        data = new int[width * height];
        for (int i = 0; i < width * height; ++i)
        {
            data[i] = imageData[i];
        }
    }

    Image(const Image &other) : width(other.width), height(other.height)
    {

        data = new int[width * height];

        for (int i = 0; i < width * height; ++i)
        {
            data[i] = other.data[i];
        }
    }

    ~Image()
    {
        delete[] data;
    }

    void display()
    {
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                cout << data[i * width + j] << " ";
            }
            cout << endl;
        }
    }

    void updateData()
    {
        for (int i = 0; i < width * height; ++i)
        {
            if (data[i] <= 0)
            {
                data[i] = rand() % 255 + 1;
            }
        }
    }
};

int main()
{
    int originalData[] = {1, 2, 3, 4, 5, 6};

    Image originalImage(2, 3, originalData);

    Image copiedImage(originalImage);

    cout << "Original Image:" << endl;
    originalImage.display();

    cout << "\nCopied Image:" << endl;
    copiedImage.display();

    originalImage.updateData();
    copiedImage.updateData();

    cout << "\nAfter Updating:" << endl;

    cout << "\nOriginal Image:" << endl;
    originalImage.display();

    cout << "\nCopied Image:" << endl;
    copiedImage.display();

    return 0;
}
