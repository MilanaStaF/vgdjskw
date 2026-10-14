#include <iostream>

int main() {

    int coin;
    int total_gold = 0;

    while (std :: cin >> coin && coin != 0) {
        total_gold += coin;
    }
    
    std :: cout << total_gold << std :: endl;

    return 0;
}
