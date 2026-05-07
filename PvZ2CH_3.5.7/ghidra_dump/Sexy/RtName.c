// Class: Sexy::RtName


/* Sexy::RtName::~RtName() */

void __thiscall Sexy::RtName::~RtName(RtName *this)

{
  RtNameTable *this_00;
  
  this_00 = (RtNameTable *)RtNameTable::GetNameTable();
  RtNameTable::TableReleaseString(this_00,*(uint *)this);
  return;
}


/* Sexy::RtName::StaticIndexForString(wchar_t const*) */

void Sexy::RtName::StaticIndexForString(wchar_t *param_1)

{
  RtNameTable *this;
  
  this = (RtNameTable *)RtNameTable::GetNameTable();
  RtNameTable::TableIndexForString(this,param_1);
  return;
}


/* Sexy::RtName::RtName(wchar_t const*) */

void __thiscall Sexy::RtName::RtName(RtName *this,wchar_t *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = StaticIndexForString(param_1);
  *(undefined4 *)this = uVar1;
  FUN_0325d644(this);
  uVar2 = FUN_0325d620(this);
  *(undefined8 *)(this + 8) = uVar2;
  return;
}


/* Sexy::RtName::RtName(std::wstring const&) */

void __thiscall Sexy::RtName::RtName(RtName *this,wstring *param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  
  pwVar2 = (wchar_t *)FUN_054766ec(param_1);
  uVar1 = StaticIndexForString(pwVar2);
  *(undefined4 *)this = uVar1;
  FUN_0325d644(this);
  uVar3 = FUN_0325d620(this);
  *(undefined8 *)(this + 8) = uVar3;
  return;
}


/* Sexy::RtName::RtName(Sexy::RtName const&) */

void __thiscall Sexy::RtName::RtName(RtName *this,RtName *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_0329b2a0();
  uVar1 = FUN_0329b27c(this);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


/* Sexy::RtName::RtName(unsigned int) */

void __thiscall Sexy::RtName::RtName(RtName *this,uint param_1)

{
  undefined8 uVar1;
  
  *(uint *)this = param_1;
  FUN_033fa1d8();
  uVar1 = FUN_033fa1b4(this);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


/* Sexy::RtName::GetString() const */

void Sexy::RtName::GetString(void)

{
  RtNameTable *this;
  uint *in_x0;
  
  this = (RtNameTable *)RtNameTable::GetNameTable();
  RtNameTable::TableStringForIndex(this,*in_x0);
  return;
}


/* Sexy::RtName::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) */

RtName * __thiscall Sexy::RtName::operator=(RtName *this,wchar_t *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_03718b48();
  uVar1 = StaticIndexForString(param_1);
  *(undefined4 *)this = uVar1;
  FUN_03718b24(this);
  uVar2 = FUN_03718b00(this);
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}


/* Sexy::RtName::RtName() */

void __thiscall Sexy::RtName::RtName(RtName *this)

{
  *(undefined4 *)this = 0;
  *(undefined **)(this + 8) = &DAT_056f11a8;
  return;
}

