#pragma once
#include <iostream>     // input output 쉽게 사용
#include <string>      // 문자열
using namespace std;    // #include <vector> 사용하면 아래 std 붙여야함
                        // std 라이브러리 namespace
// SmartHome
class SmartHome {
private:
    // 클래스 변수들 (member variable, attribute, feild) - 시험출제
    string owner;   // 문자열
    int temperature;    // 정수형
    int humidity;
    bool security;  // true or false
public:
    // 클래스 함수들 (member, function, method) - 시험출제
    // 생성자
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    
    // Parameter(매개변수), Argument(인수), interface(함수), this(가르키는 것)
    //SmartHome(string o, int t, int h, bool sec)
    //    : temperature(t), humidity(h), security(sec) {
    //    strcpy(owner, o);
    //}
    

    // 소멸자
    ~SmartHome() {}

    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() {
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << "집주인: " << this->owner << endl; // cout(출력), << 순서대로 출력, endl 줄바꿈
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};