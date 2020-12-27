#include "Person.h"

int Person::nextID_;
Person::Person(const std::string& name, sex sex, Person* mother, Person* father) : ID_(++nextID_) {
    if(ID_ > 2 && (mother == nullptr && father == nullptr)){
        throw std::runtime_error("Error: You must identify the parents.\n");
    }
    name_ = name;
    gender_ = sex;
    father_ = father;
    mother_ = mother;
}

Person::Person(const Person& other) : ID_(++nextID_) {
    name_ = other.name_;
    gender_ = other.gender_;
    mother_ = other.mother_;
    father_ = other.father_;
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        name_ = other.name_;
        gender_ = other.gender_;
        mother_ = other.mother_;
        father_ = other.father_;
    }
    return *this;
}

Person Person::GiveBirth(const std::string &name, sex sex) const {
    if(gender_ == Person::male){
        throw std::runtime_error("Error: Male can not be a mother of a child.\n");
    }
    return Person(name, sex, const_cast<Person *>(this), nullptr);
}

Person Person::GiveBirth(const std::string &name, sex sex, Person *father) const {
    if(gender_ == Person::male){
        throw std::runtime_error("Error: Male can not be a mother of a child.\n");
    }
    auto * ptr_mother = const_cast<Person *>(this);
    return Person(name, sex, ptr_mother, father);
}

std::ostream& operator<<(std::ostream& otp, const Person& person) {

    std::string sex_info = (person.gender_ == Person::male) ? "\n    Sex: male" : "\n    Sex: female";
    std::string mother_info =  (person.mother_) ? "\n    Mother: " + person.mother_->name_ : "\n    He/She doesn't have a mother.";
    std::string father_info =  (person.father_) ? "\n    Father: " + person.father_->name_:  "\n    He/She doesn't have a father.";

    std::string person_info = "Person:\n    Name: " + person.name_  + sex_info + mother_info + father_info;

    return otp << person_info;
}
