#ifndef __TRANS_H__
#define __TRANS_H__
#include <./bitcoin.h>

Transact *tarnsfer(UserList *sender, UserList *reciver, double amt);
void initilize_bal(UserList *user, double deposit);
double capital_value(UserList *user);

#endif __TRANS_H__