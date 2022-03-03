#include <stdio.h>
#include <windows.h>

int main(void) {

    HDC hcd = GetWindowDC(GetForegroundWindow());
    Rectangle(hcd, 100, 100, 200, 200);
    Ellipse(hcd, 100, 100, 200, 200);

    return 0;
}