#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);

    char cmd[1];
    while (true)
    {
        std::cin >> cmd;

        switch (cmd[0])
        {
        case 'q':
            return 0;
        
        default:
            break;
        }
    
    }
    




    return 0;
}