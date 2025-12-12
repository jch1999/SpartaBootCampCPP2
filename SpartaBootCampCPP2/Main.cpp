// Copyright 2025 <SpartaClub>
#include <iostream>
#include <string>
#include <Windows.h>
#include "./player.h"
#include "./warrior.h"
#include "./magician.h"
#include "./thief.h"
#include "./archer.h"
#include "./Monster.h"

using namespace std;    // NOLINT

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    string mobs[] = { "고불린", "슬라임", "렛맨", "페어리" };
    int mob_choice = 0;
    Monster* monster = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    while (true) {
        cout << "* 상대하실 몬스터을 선택해주세요." << endl;

        for (int i = 0; i < 4; i++) {
            cout << (i + 1) << ". " << mobs[i] << endl;
        }
        cout << "선택: ";
        cin >> mob_choice;
        if (mob_choice <= 4 && mob_choice >= 1) {
            monster = new Monster(mobs[mob_choice - 1]);
            break;
        } else {
            cout << "잘못된 입력입니다.\n\n";
        }
    }

    while (monster->getHP() > 0 && player->getHP() > 0) {
        Sleep(300);
        player->attack(monster);

        Sleep(300);
        if (monster->getHP() > 0)  {
            monster->attack(player);
        }
    }

    delete player;

    return 0;
}
