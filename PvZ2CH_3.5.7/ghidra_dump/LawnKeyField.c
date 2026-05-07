// Class: LawnKeyField


/* LawnKeyField::LawnKeyField() */

void __thiscall LawnKeyField::LawnKeyField(LawnKeyField *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xd;
  return;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

LawnKeyField * __thiscall LawnKeyField::operator=(LawnKeyField *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03257294(*(undefined4 *)(this + 4),param_1);
  *(undefined4 *)this = uVar1;
  return this;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

LawnKeyField * __thiscall LawnKeyField::operator+=(LawnKeyField *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 4);
  iVar1 = FUN_0329b508(uVar2,*(undefined4 *)this);
  uVar2 = FUN_0329b4e8(uVar2,param_1 + iVar1);
  *(undefined4 *)this = uVar2;
  return this;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

LawnKeyField * __thiscall LawnKeyField::operator-=(LawnKeyField *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 4);
  iVar1 = FUN_0329b508(uVar2,*(undefined4 *)this);
  uVar2 = FUN_0329b4e8(uVar2,iVar1 - param_1);
  *(undefined4 *)this = uVar2;
  return this;
}


/* LawnKeyField::operator int() */

int __thiscall LawnKeyField::operator_cast_to_int(LawnKeyField *this)

{
  int iVar1;
  
  iVar1 = FUN_0329b508(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return iVar1;
}


/* LawnKeyField::LawnKeyField(int) */

void __thiscall LawnKeyField::LawnKeyField(LawnKeyField *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0xd;
  uVar1 = FUN_032f3c64(0xd,param_1);
  *(undefined4 *)this = uVar1;
  return;
}


/* LawnKeyField::updateToAug05LawnKey() */

void __thiscall LawnKeyField::updateToAug05LawnKey(LawnKeyField *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_032f3c64(*(undefined4 *)(this + 4),*(uint *)this >> 0xd | *(uint *)this << 0x13);
  *(undefined4 *)this = uVar1;
  return;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

int __thiscall LawnKeyField::operator+(LawnKeyField *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_032f3c84(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return param_1 + iVar1;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

int __thiscall LawnKeyField::operator-(LawnKeyField *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_032f3c84(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return iVar1 - param_1;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

bool __thiscall LawnKeyField::operator<(LawnKeyField *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_032f3c84(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return iVar1 < param_1;
}


/* LawnKeyField::TEMPNAMEPLACEHOLDERVALUE(int) */

bool __thiscall LawnKeyField::operator>(LawnKeyField *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_032f3c84(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return param_1 < iVar1;
}


/* LawnKeyField::operator int() const */

int __thiscall LawnKeyField::operator_cast_to_int(LawnKeyField *this)

{
  int iVar1;
  
  iVar1 = FUN_032f3c84(*(undefined4 *)(this + 4),*(undefined4 *)this);
  return iVar1;
}

