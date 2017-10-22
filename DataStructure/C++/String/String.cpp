//
// Created by trafalgar on 17-10-21.
//

#include <cstring>
#include "String.h"
#include <iostream>

using namespace std;

char *String::append( const char* chars) {
    char * cp = content;
    while( *cp )
        cp++;                       /* find end of dst */
    while( *cp++ = *chars++ ) ;       /* Copy src to end of dst */
    return( content );                /* Copy src over dst */
}

String::String() {
    StringLength = 0;
    content = new char[1];
    *content = '\0';;
}

String::String(const char *string1) {
    if (!string1)
    {
        StringLength = 0;
        content = new char[1];
        *content = '\0';
    }
    else
    {
        StringLength = strlen(string1);
        content = new char[StringLength + 1];
        strcpy(content, string1);
    }
}

bool String::idEmpty() {
    return StringLength == 0;
}

size_t String::length() {
    return StringLength;
}

char String::charAt(int index) {
    char *temp = content;
    int count = 0;
    while (*temp && count != index) {
        temp++;
        count++;
    }
    return *(temp);
}

int String::indexOf(char *pattern) {
    int length = strlen(pattern), j = 0;
    int *next = new int[length];
    int t = next[0] = -1;
    while (j < length - 1) {
        if (t < 0 || pattern[j] == pattern[t]) {
            j++;
            t++;
            pattern[j] != pattern[t] ? t : pattern[t];
        } else {
            t = next[t];
        }
    }
    int length_t = this->length(), target = 0, p = 0;
    while (target < length_t && p < length) {
        if (pattern[p] == this->charAt(target) || p < 0) {
            p++;
            target++;
        } else {
            p = next[p];
        }
    }
    return target - p;
}

int String::indexOf(const char *pattern) {
    int length = strlen(pattern), j = 0;
    int *next = new int[length];
    int t = next[0] = -1;
    while (j < length - 1) {
        if (t < 0 || pattern[j] == pattern[t]) {
            j++;
            t++;
            pattern[j] != pattern[t] ? t : pattern[t];
        } else {
            t = next[t];
        }
    }
    int length_t = this->length(), target = 0, p = 0;
    while (target < length_t && p < length) {
        if (pattern[p] == this->charAt(target) || p < 0) {
            p++;
            target++;
        } else {
            p = next[p];
        }
    }
    return target - p;
}

bool String::contain(char *pattern) {
    return indexOf(pattern) >= 0;
}

char *String::subString(int pos, int endPos) {
    char *temp = content;
    int count = 0;
    while (*(temp) && count != pos) {
        count++;
        temp++;
    }
    char *ans = new char[StringLength+1];
    char *ansTemp = ans;
    while (count != endPos && count!=endPos) {
        *ans++=*temp++;
        count++;
    }
    return ansTemp;
}

int String::compare(char *comparison) {
    char *temp = content;
    int length_c = strlen(comparison);
    int length = this->length();
    while (*(temp) == *(comparison) && length != 0) {
        temp++;
        comparison++;
        length--;
    }
    if (*(temp) == *(comparison)) {
        return 0;
    } else if (*(temp) < *(comparison)) {
        return 1;
    } else {
        return -1;
    }
}

char *String::replace(const char *target,const char *replacement) {
    int pos = this->indexOf(target);
    char *ans = subString(0, pos);
    char *last = subString(pos + strlen(target), this->length()+1);
    ans = strcat(ans, replacement);
    ans = strcat(ans, last);
    content=ans;
    StringLength += strlen(replacement) - strlen(target);
    return content;
}

char *String::replaceAll(char *target, char *replacement) {
    char* temp = content;
    int count=0;
    while (this->indexOf(target) != StringLength) {
        temp = this->replace(target, replacement);
        count++;
        if(count>5){
            return temp;
        }
    }
    return temp;
}

void String::show() {
    char *temp = content;
    while (*(temp)) {
        cout << *(temp);
        temp++;
    }
}

