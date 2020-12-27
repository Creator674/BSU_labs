#ifndef PERSON_CLASS__PERSON_H_
#define PERSON_CLASS__PERSON_H_

#include <iostream>
#include <string>

#pragma once

class Person {
public:

    enum sex {
        male,
        female
    };

    Person(const std::string& name, sex sex, Person* mother = nullptr, Person* father = nullptr);

    Person(const Person&);
    Person& operator=(const Person&);

    Person(Person&&) = delete;
    Person& operator=(Person&&) = delete;

    [[nodiscard]] Person GiveBirth(const std::string &name, sex sex) const;
    [[nodiscard]] Person GiveBirth(const std::string &name, sex sex, Person *father) const;

    friend std::ostream& operator<<(std::ostream& otp, const Person& wallet);

    ~Person() = default;

private:
    const int ID_;
    static int nextID_;
    sex gender_;
    std::string name_;
    const Person* mother_;
    const Person* father_;
};

#endif
