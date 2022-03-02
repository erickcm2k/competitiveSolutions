#include "iostream"
using namespace std;

struct Coords {
    int x1;
    int y1;
    int x2;
    int y2;
};

Coords getCoords(int x, int y) {

    Coords trianglePoints;
    trianglePoints.x1 = x;
    trianglePoints.y1 = y;
    trianglePoints.x2 = x;
    trianglePoints.y2 = y;
    
    if(x > 0 and y > 0) { // Case 1

        trianglePoints.x1 = 0;
        trianglePoints.y1 = y + x;
        trianglePoints.x2 = x + y;
        trianglePoints.y2 = 0; 

    } else if (x > 0 and y < 0) { // Case 4

        trianglePoints.x1 = 0;
        trianglePoints.y1 = y - abs(x);
        trianglePoints.x2 = x + abs(y);
        trianglePoints.y2 = 0;

    } else if (x < 0 and y < 0) { // Case 2

        trianglePoints.x1 = x - abs(y);
        trianglePoints.y1 = 0;
        trianglePoints.x2 = 0;
        trianglePoints.y2 = y - abs(x); 

    } else if (x < 0 and y > 0) { // Case 3

        trianglePoints.x1 = x - y;
        trianglePoints.y1 = 0;
        trianglePoints.x2 = 0;
        trianglePoints.y2 = y + abs(x);

    }

    return trianglePoints;
}

int main(int argc, char const *argv[]) {

    int x, y;
    int x1, y1, x2, y2;

    cin >> x >> y;

    Coords triangleCoords = getCoords(x,y);

    cout << triangleCoords.x1 << " " << triangleCoords.y1 << " " << triangleCoords.x2 << " " << triangleCoords.y2;

    return 0;
}
