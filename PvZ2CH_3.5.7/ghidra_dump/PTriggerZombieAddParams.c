// Class: PTriggerZombieAddParams


/* PTriggerZombieAddParams::PTriggerZombieAddParams() */

void __thiscall PTriggerZombieAddParams::PTriggerZombieAddParams(PTriggerZombieAddParams *this)

{
  PTrigger::PTrigger((PTrigger *)this,0x745f6170);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06948c90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PTriggerZombieAddParams::StaticNew() */

PTriggerZombieAddParams * PTriggerZombieAddParams::StaticNew(void)

{
  PTriggerZombieAddParams *this;
  
  this = ::operator_new(0x30);
  PTriggerZombieAddParams(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombieAddParams::DoTrigger() */

void __thiscall PTriggerZombieAddParams::DoTrigger(PTriggerZombieAddParams *this)

{
  bool bVar1;
  PlayerInfo *this_00;
  PlaybackController *this_01;
  Param *pPVar2;
  undefined8 local_28;
  undefined8 local_20;
  Param local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)PTrigger::GetZombieByID((PTrigger *)this,*(int *)(this + 0xc));
  if (this_00 != (PlayerInfo *)0x0) {
    this_01 = (PlaybackController *)PlayerInfo::GetPlantNewAvatarPiecesInfo(this_00);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      pPVar2 = (Param *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Param::Param(local_18,pPVar2);
      PlaybackController::SetParam(this_01,(uchar)local_18[0],asStack_10);
      PakRecord::~PakRecord((PakRecord *)local_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
    }
    (**(code **)(*(long *)this_00 + 0x9e8))(this_00,*(undefined4 *)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTriggerZombieAddParams::~PTriggerZombieAddParams() */

void __thiscall PTriggerZombieAddParams::~PTriggerZombieAddParams(PTriggerZombieAddParams *this)

{
  *(undefined ***)this = &PTR_GetClass_06948c90;
  std::vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>>::
  ~vector((vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>> *)
          (this + 0x18));
  PTrigger::~PTrigger((PTrigger *)this);
  return;
}


/* PTriggerZombieAddParams::~PTriggerZombieAddParams() */

void __thiscall PTriggerZombieAddParams::~PTriggerZombieAddParams(PTriggerZombieAddParams *this)

{
  ~PTriggerZombieAddParams(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombieAddParams::StaticClassInit() */

void PTriggerZombieAddParams::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  string *this;
  code *in_x2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Param");
    in_x2 = FUN_04ab9d64;
    (*pcVar3)(plVar2,asStack_10,FUN_04ab9d64,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PTriggerZombieAddParams");
    in_x2 = FUN_04abef58;
    (*pcVar3)(plVar2,asStack_10,FUN_04abef58,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  this = (string *)
         std::
         map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
         ::operator[]((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                       *)k_TriggerTypeToString,&TypeValue);
  std::string::append(this,"PTriggerZombieAddParams",(size_t)in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTriggerZombieAddParams::StaticGetClass() */

long * PTriggerZombieAddParams::StaticGetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerZombieAddParams",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTriggerZombieAddParams::GetClass() const */

long * PTriggerZombieAddParams::GetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerZombieAddParams",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombieAddParams::SetParams(int, std::map<unsigned char, std::string, std::less<unsigned
   char>, std::allocator<std::pair<unsigned char const, std::string > > > const&) */

void __thiscall
PTriggerZombieAddParams::SetParams(PTriggerZombieAddParams *this,int param_1,map *param_2)

{
  bool bVar1;
  PakRecord *pPVar2;
  undefined8 local_28;
  undefined8 local_20;
  PakRecord local_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x10) = param_1;
  local_8 = ___stack_chk_guard;
  std::vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>>::clear
            ((vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>>
              *)(this + 0x18));
  local_28 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::begin((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                      *)param_2);
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20), bVar1
        ) {
    pPVar2 = (PakRecord *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    local_18[0] = *pPVar2;
    FUN_05475d88(auStack_10,pPVar2 + 8);
    std::vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>>::
    push_back((vector<PTriggerZombieAddParams::Param,std::allocator<PTriggerZombieAddParams::Param>>
               *)(this + 0x18),(Param *)local_18);
    PakRecord::~PakRecord(local_18);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

