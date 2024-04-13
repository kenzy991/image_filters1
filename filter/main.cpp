#include "Image_Class.h"
using namespace std;

int main() {
    Image image("samurai.jpg");
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            image(i, j, 0) = 255;
            int temp = 255 - image(i, j, 2); // Store the calculated value in temp
            image(i, j, 2) = 255 - image(i, j, 1); // Use the calculated value from temp
            image(i, j, 1) = temp; // Assign the stored value from temp to the green channel
        }
    }
    image.saveImage("image100.png");
    return 0;
}
