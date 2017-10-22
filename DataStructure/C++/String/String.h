//
// Created by trafalgar on 17-10-21.
//

#ifndef DATASTRUCTURE_STRING_H
#define DATASTRUCTURE_STRING_H


class String {
public:
    String();

    String(const char *content);

    char * append(const char* chars);
    bool idEmpty();
    size_t length();
    char charAt(int index);
    int indexOf(char* pattern);
    int indexOf(const char *pattern);
    bool contain(char* pattern);
    char* subString(int pos,int endPos);
    int compare(char* comparison);
    char *replace(const char *target, const char *replacement);
    char * replaceAll(char* target, char* replacement);
    void show();
private:
    char* content;
    size_t StringLength;


};


#endif //DATASTRUCTURE_STRING_H
