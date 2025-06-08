#pragma once
#ifndef _CONTACT_H_129847575
#define _CONTACT_H_129847575

enum gender { MAN, WOMAN };
typedef enum gender EGender;

struct contact {
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact;

int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
void printContactPtr(Contact* ct);
int isEqualContactPtr(Contact* a, Contact* b);

#endif //_CONTACT_H_129847575