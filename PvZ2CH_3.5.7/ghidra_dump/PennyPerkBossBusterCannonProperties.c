// Class: PennyPerkBossBusterCannonProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannonProperties::GetDescriptionForLevel(int) */

void PennyPerkBossBusterCannonProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int in_w1;
  long lVar5;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(uVar1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  lVar5 = (long)in_w1;
  pfVar2 = (float *)FUN_036c50b0(*(undefined8 *)(uVar1 + 0x60),lVar5);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_18,L"{TIME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  piVar3 = (int *)FUN_036c50b8(*(undefined8 *)(uVar1 + 0x78),lVar5);
  piVar4 = (int *)FUN_036c50b8(*(undefined8 *)(uVar1 + 0x90),lVar5);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(*piVar3 * *piVar4));
  TodReplaceString(awStack_20,L"{DAMAGE}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannonProperties::StaticClassInit() */

void PennyPerkBossBusterCannonProperties::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PennyPerkBossBusterCannonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c5a70,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkBossBusterCannonProperties::StaticGetClass() */

long * PennyPerkBossBusterCannonProperties::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkBossBusterCannonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkBossBusterCannonProperties::GetClass() const */

long * PennyPerkBossBusterCannonProperties::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkBossBusterCannonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkBossBusterCannonProperties::PennyPerkBossBusterCannonProperties() */

void __thiscall
PennyPerkBossBusterCannonProperties::PennyPerkBossBusterCannonProperties
          (PennyPerkBossBusterCannonProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681a30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  return;
}


/* PennyPerkBossBusterCannonProperties::StaticNew() */

PennyPerkBossBusterCannonProperties * PennyPerkBossBusterCannonProperties::StaticNew(void)

{
  PennyPerkBossBusterCannonProperties *this;
  
  this = ::operator_new(200);
  PennyPerkBossBusterCannonProperties(this);
  return this;
}


/* PennyPerkBossBusterCannonProperties::~PennyPerkBossBusterCannonProperties() */

void __thiscall
PennyPerkBossBusterCannonProperties::~PennyPerkBossBusterCannonProperties
          (PennyPerkBossBusterCannonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681a30;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkBossBusterCannonProperties::~PennyPerkBossBusterCannonProperties() */

void __thiscall
PennyPerkBossBusterCannonProperties::~PennyPerkBossBusterCannonProperties
          (PennyPerkBossBusterCannonProperties *this)

{
  ~PennyPerkBossBusterCannonProperties(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkBossBusterCannonProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkBossBusterCannonProperties::GatherResourceRequirements
          (PennyPerkBossBusterCannonProperties *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_036c5648(*(undefined8 *)(this + 0xb0));
  uVar2 = FUN_036c5698(*(undefined8 *)(this + 0xb8));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar1,
             uVar2);
  return;
}

