#pragma once    // 헤더파일에 쓰는 게 좋다. 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {
private:
    string title;
    string artist;
    string album;
    int year;
public:
        // 생성자 (Constructor)
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    // 소멸자 (Destructor)
    ~Music() {}

    // Getters
    string getTitle() { return title; }
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() {
        return year;
    }
};

// MusicStreamingService class
class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList;    // 벡터를 어떤 형식으로 할 것인지 <> 안에 표현

public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year);
        musicList.push_back(newMusic);  // push_back: 뒤에다가 추가해라.
        cout << title << " by " << artist << " added to " << serviceName << endl;   //출력
    }

    // Searches for music by title
    Music* searchByTitle(string title) {                // 뮤직에 *: 포인터, 지시해주는 것, 포인터는 주소를 저장한다
        for (int i = 0; i < musicList.size(); i++) {    // 찾고자하는 노래 찾는 중
            if (musicList[i].getTitle() == title) {     // [] 대괄호로 뮤직리스트 접근(뮤직리스트 i번째)
                return &musicList[i];                   // &가 붙으면 그것의 주소값
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music>* > result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {   // 같은 거 두개 반환
                result.push_back(&musicList[i]);
            }
        }
        return result;
    }

};#pragma once
