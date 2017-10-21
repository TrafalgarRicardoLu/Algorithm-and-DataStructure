//
// Created by trafalgar on 17-10-21.
//

#include <cstring>
#include "String.h"
#include <iostream>
using namespace std;
char * String::append(char *chars) {
    char *temp = content;

    while (*temp)
        temp++;
    while ((*temp++ = *chars++) != '\0')
        ;

    return content;
}

String::String() {

}

bool String::idEmpty() {
    return StringLength==0;
}

size_t String::length() {
    size_t Length=0;
    char* temp=content;
    while(*temp){
        Length++;
        temp++;
    }
    return Length;
}

char String::charAt(int index) {
    char* temp=content;
    int count=0;
    while(*temp && count!=index){
        temp++;
        count++;
    }
    return *(temp);
}

int String::indexOf(char *pattern) {
    int length = strlen(pattern),j=0;
    int* next = new int[length];
    int t=next[0] = -1;
    while (j < length -1) {
        if (t < 0 || pattern[j] == pattern[t]) {
            j++; t++;
            pattern[j] != pattern[t] ? t : pattern[t];
        }
        else {
            t = next[t];
        }
    }
    int length_t = this->length(),target=0,p=0;
    while (target < length_t && p < length) {
        if (pattern[p] == this->charAt(target) || p < 0) {
            p++; target++;
        }
        else {
            p = next[p];
        }
    }
    return target - p;
}

bool String::contain(char *pattern) {
    return indexOf(pattern)>=0;
}

char *String::subString(int pos, int endPos) {
    char* temp = content;
    int count=0;
    while(*(temp)&& count!=pos) {
        count++;
        temp++;
    }
    char* ans;
    char* ansTemp=ans;
    while ((*ans++ = *temp++) && count!=endPos)
        count++;
    return  ansTemp;
}

int String::compare(char *comparison) {
    char* temp =content;
    int length_c =strlen(comparison);
    int length=this->length();
    while (*(temp)==*(comparison)){
        temp++;
        comparison++;
    }
    if(temp== nullptr && comparison!= nullptr){
        return -1;
    }
    if(temp== nullptr && comparison== nullptr){
        return 0;
    }
    if(temp!= nullptr && comparison== nullptr){
        return 1;
    }
    if(*(temp)>*(comparison)){
        return 1;
    }
    return -1;
}

char* String::replace(char *target, char *replacement) {
    int pos = this->indexOf(target);
    char* ans = subString(0,pos);
    char* last = subString(pos+strlen(target),this->length());
    ans=strcat(ans,replacement);
    ans=strcat(ans,last);
    return ans;
}

char * String::replaceAll(char *target, char *replacement) {
    int num;
    char * ans;
    while ((num=indexOf(target))!=-1){
        ans=replace(target,replacement);
    }
    return ans;
}

void String::show() {
    char* temp = content;
    while (*(temp)){
        cout<<*(temp);
        temp++;
    }
}
