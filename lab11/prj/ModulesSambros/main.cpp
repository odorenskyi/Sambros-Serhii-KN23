#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ModulesSambros.h"

vector<EducationalInstitution> registry;
void searchInstitutionByCode(int code) {
    for (const auto& institution : registry) {
        if (institution.code == code) {
            cout << "Код закладу в ЄДЕБО: " << institution.code << endl;
            cout << "Повне найменування: " << institution.fullName << endl;
            cout << "Коротка назва: " << institution.shortName << endl;
            cout << "Повне найменування(англ.): " << institution.englishName << endl;
            cout << "Форма власності: " << institution.ownershipForm << endl;
            cout << "Найменування органу, до сфери управління якого належить заклад освіти: " << institution.managementBody << endl;
            cout << "Найменування посади керівника закладу освіти: " << institution.directorPosition << endl;
            cout << "Прізвище, ім'я, по батькові керівника закладу освіти: " << institution.directorName << endl;
            cout << "Місцезнаходження(юридична адреса): " << institution.address << endl;
            cout << "Телефон: " << institution.phone << endl;
            cout << "Електронна пошта: " << institution.email << endl;
            cout << "Веб-сайт: " << institution.website << endl;
            cout << "ОЦ <<Крим-Україна>>: " << institution.isCrimeaUkraine << endl;
            cout << "ОЦ <<Донбас-Україна>>: " << institution.isDonbasUkraine << endl;
            cout << "Військова кафедра: " << institution.hasMilitaryDepartment << endl;
            cout << "Рік заснування: " << institution.foundationYear << endl;
            return;
        }
    }
    cout << "Реєстр не найден." << endl;
}

void removeInstitution(int code) {
    for (auto it = registry.begin(); it != registry.end(); ++it) {
        if (it->code == code) {
            registry.erase(it);
            return;
        }
    }
}

