// Class: Throttles


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Throttles::GetDeltaIntervalInS() */

void __thiscall Throttles::GetDeltaIntervalInS(Throttles *this)

{
  char cVar1;
  char *__nptr;
  long *plVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)this;
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x10);
  std::string::string(asStack_18,"DeltaIntervalMS");
  fVar5 = 30.0;
  std::string::string(asStack_10,"");
  (*pcVar3)(asStack_20,plVar2,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  cVar1 = FUN_0547419c(asStack_20);
  if (cVar1 == '\0') {
    __nptr = (char *)FUN_0547429c(asStack_20);
    dVar4 = atof(__nptr);
    fVar5 = (float)(dVar4 * 0.001);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Throttles::SetDeltaIntervalInMS(int) */

void __thiscall Throttles::SetDeltaIntervalInMS(Throttles *this,int param_1)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  plVar2 = *(long **)this;
  pcVar3 = *(code **)(*plVar2 + 0x20);
  std::string::string(asStack_180,"DeltaIntervalMS");
  FUN_05462824(asStack_188,auStack_178);
  (*pcVar3)(plVar2,asStack_180,asStack_188);
  std::string::~string(asStack_188);
  std::string::~string(asStack_180);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Throttles::~Throttles() */

void __thiscall Throttles::~Throttles(Throttles *this)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Throttles::WorldIsDisabled(std::string const&) */

void __thiscall Throttles::WorldIsDisabled(Throttles *this,string *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find
                       ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                        (this + 0x28),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x28));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Throttles::Throttles(UserPrefsWrapper&) */

void __thiscall Throttles::Throttles(Throttles *this,UserPrefsWrapper *param_1)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  *(UserPrefsWrapper **)this = param_1;
  std::string::string((string *)(this + 8),"");
  nop();
  this[0x10] = (Throttles)0x0;
  this[0x11] = (Throttles)0x1;
  std::string::string((string *)(this + 0x18),"");
  nop();
  this[0x20] = (Throttles)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  std::string::string(asStack_10,"prehistoric");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)this_00,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"coming_soon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)this_00,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Throttles::GetInstance() */

undefined * Throttles::GetInstance(void)

{
  int iVar1;
  UserPrefsWrapper *pUVar2;
  
  if (((DAT_06b0c630 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b0c630), iVar1 != 0)) {
    pUVar2 = (UserPrefsWrapper *)UserPrefsWrapper::GetInstance();
    Throttles((Throttles *)&DAT_06b0c5b0,pUVar2);
    __cxa_guard_release(&DAT_06b0c630);
    __cxa_atexit(~Throttles,&DAT_06b0c5b0,&DAT_06a88000);
    return &DAT_06b0c5b0;
  }
  return &DAT_06b0c5b0;
}


/* Throttles::SetWorldDisabled(std::string const&, bool) */

void __thiscall Throttles::SetWorldDisabled(Throttles *this,string *param_1,bool param_2)

{
  if (!param_2) {
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::erase
              ((string *)(this + 0x28));
    WorldMapUtils::LoadWorldMapData();
    return;
  }
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x28),
             param_1);
  WorldMapUtils::LoadWorldMapData();
  return;
}

