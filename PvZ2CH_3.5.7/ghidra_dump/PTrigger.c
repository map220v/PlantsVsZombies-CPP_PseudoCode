// Class: PTrigger


/* PTrigger::StaticNew() */

undefined8 PTrigger::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTrigger::StaticClassInit() */

void PTrigger::StaticClassInit(void)

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
    std::string::string(asStack_10,"PTrigger");
    (*pcVar2)(plVar1,asStack_10,FUN_04abae58,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTrigger::StaticGetClass() */

long * PTrigger::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PTrigger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTrigger::GetClass() const */

long * PTrigger::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PTrigger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTrigger::PTrigger(unsigned int) */

void __thiscall PTrigger::PTrigger(PTrigger *this,uint param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(uint *)(this + 8) = param_1;
  *(undefined ***)this = &PTR_GetClass_06948bd0;
  return;
}


/* PTrigger::~PTrigger() */

void __thiscall PTrigger::~PTrigger(PTrigger *this)

{
  *(undefined ***)this = &PTR_GetClass_06948bd0;
  nop();
  return;
}


/* PTrigger::~PTrigger() */

void __thiscall PTrigger::~PTrigger(PTrigger *this)

{
  ~PTrigger(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTrigger::GetZombieByID(int) */

void __thiscall PTrigger::GetZombieByID(PTrigger *this,int param_1)

{
  bool bVar1;
  int iVar2;
  PlayerInfo *this_00;
  long lVar3;
  PlayerInfo *pPVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    pPVar4 = (PlayerInfo *)0x0;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      if (this_00 != (PlayerInfo *)0x0) {
        lVar3 = PlayerInfo::GetPlantNewAvatarPiecesInfo(this_00);
        iVar2 = FUN_04ab9c1c(*(undefined4 *)(lVar3 + 0x30));
        pPVar4 = this_00;
        if (iVar2 == param_1) goto LAB_04abca04;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    pPVar4 = (PlayerInfo *)0x0;
LAB_04abca04:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTrigger::CreateByType(unsigned int) */

void PTrigger::CreateByType(uint param_1)

{
  bool bVar1;
  CRefSymbolDb *this;
  TRefNamedSymbolCollection<Reflection::RClass> *this_00;
  string *psVar2;
  long lVar3;
  RtObject *this_01;
  PTrigger *pPVar4;
  uint local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
             ::find((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                     *)k_TriggerTypeToString,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)k_TriggerTypeToString);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
    this_00 = (TRefNamedSymbolCollection<Reflection::RClass> *)
              Reflection::CRefSymbolDb::GetClasses(this);
    psVar2 = (string *)
             std::
             map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
             ::operator[]((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                           *)k_TriggerTypeToString,local_24);
    lVar3 = Reflection::TRefNamedSymbolCollection<Reflection::RClass>::GetNamed(this_00,psVar2,true)
    ;
    if (lVar3 != 0) {
      lVar3 = FUN_04ab9b10(*(undefined8 *)(lVar3 + 0x90));
      this_01 = (RtObject *)FUN_04ab9ac4(*(undefined8 *)(lVar3 + 0x18));
      pPVar4 = Sexy::RtObject::Cast<PTrigger>(this_01);
      goto LAB_04abe968;
    }
  }
  pPVar4 = (PTrigger *)0x0;
LAB_04abe968:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}

