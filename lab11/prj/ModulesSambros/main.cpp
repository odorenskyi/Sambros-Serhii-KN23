#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ModulesSambros.h"

vector<EducationalInstitution> registry;
void searchInstitutionByCode(int code) {
    for (const auto& institution : registry) {
        if (institution.code == code) {
            cout << "��� ������� � �����: " << institution.code << endl;
            cout << "����� ������������: " << institution.fullName << endl;
            cout << "������� �����: " << institution.shortName << endl;
            cout << "����� ������������(����.): " << institution.englishName << endl;
            cout << "����� ��������: " << institution.ownershipForm << endl;
            cout << "������������ ������, �� ����� ��������� ����� �������� ������ �����: " << institution.managementBody << endl;
            cout << "������������ ������ �������� ������� �����: " << institution.directorPosition << endl;
            cout << "�������, ��'�, �� ������� �������� ������� �����: " << institution.directorName << endl;
            cout << "̳��������������(�������� ������): " << institution.address << endl;
            cout << "�������: " << institution.phone << endl;
            cout << "���������� �����: " << institution.email << endl;
            cout << "���-����: " << institution.website << endl;
            cout << "�� <<����-������>>: " << institution.isCrimeaUkraine << endl;
            cout << "�� <<������-������>>: " << institution.isDonbasUkraine << endl;
            cout << "³������� �������: " << institution.hasMilitaryDepartment << endl;
            cout << "г� ����������: " << institution.foundationYear << endl;
            return;
        }
    }
    cout << "����� �� ������." << endl;
}

void removeInstitution(int code) {
    for (auto it = registry.begin(); it != registry.end(); ++it) {
        if (it->code == code) {
            registry.erase(it);
            return;
        }
    }
}

