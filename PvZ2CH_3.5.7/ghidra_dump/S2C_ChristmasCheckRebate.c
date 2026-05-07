// Class: S2C_ChristmasCheckRebate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ChristmasCheckRebate::StaticClassInit() */

void S2C_ChristmasCheckRebate::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ChristmasCheckRebate");
    (*pcVar2)(plVar1,asStack_10,FUN_0321fc50,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ChristmasCheckRebate::StaticGetClass() */

long * S2C_ChristmasCheckRebate::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_ChristmasCheckRebate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasCheckRebate::GetClass() const */

long * S2C_ChristmasCheckRebate::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_ChristmasCheckRebate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasCheckRebate::S2C_ChristmasCheckRebate() */

void __thiscall S2C_ChristmasCheckRebate::S2C_ChristmasCheckRebate(S2C_ChristmasCheckRebate *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660aad0;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasCheckRebate_0660ab38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_ChristmasCheckRebate::StaticNew() */

S2C_ChristmasCheckRebate * S2C_ChristmasCheckRebate::StaticNew(void)

{
  S2C_ChristmasCheckRebate *this;
  
  this = ::operator_new(0x30);
  S2C_ChristmasCheckRebate(this);
  return this;
}


/* S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate() */

void __thiscall S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate(S2C_ChristmasCheckRebate *this)

{
  *(undefined ***)this = &PTR_GetClass_0660aad0;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasCheckRebate_0660ab38;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate() */

void __thiscall S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate(S2C_ChristmasCheckRebate *this)

{
  ~S2C_ChristmasCheckRebate(this + -8);
  return;
}


/* S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate() */

void __thiscall S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate(S2C_ChristmasCheckRebate *this)

{
  ~S2C_ChristmasCheckRebate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate() */

void __thiscall S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate(S2C_ChristmasCheckRebate *this)

{
  ~S2C_ChristmasCheckRebate(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ChristmasCheckRebate::CanGetReward() */

void __thiscall S2C_ChristmasCheckRebate::CanGetReward(S2C_ChristmasCheckRebate *this)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar2 == 1)) break;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

