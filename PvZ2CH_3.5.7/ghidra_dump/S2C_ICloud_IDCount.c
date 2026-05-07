// Class: S2C_ICloud_IDCount


/* S2C_ICloud_IDCount::S2C_ICloud_IDCount() */

void __thiscall S2C_ICloud_IDCount::S2C_ICloud_IDCount(S2C_ICloud_IDCount *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660caf0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_IDCount_0660cb58;
  return;
}


/* S2C_ICloud_IDCount::TEMPNAMEPLACEHOLDERVALUE(S2C_ICloud_IDCount const&) */

S2C_ICloud_IDCount * __thiscall
S2C_ICloud_IDCount::operator=(S2C_ICloud_IDCount *this,S2C_ICloud_IDCount *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}


/* S2C_ICloud_IDCount::~S2C_ICloud_IDCount() */

void __thiscall S2C_ICloud_IDCount::~S2C_ICloud_IDCount(S2C_ICloud_IDCount *this)

{
  *(undefined ***)this = &PTR_GetClass_0660caf0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_IDCount_0660cb58;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_IDCount::~S2C_ICloud_IDCount() */

void __thiscall S2C_ICloud_IDCount::~S2C_ICloud_IDCount(S2C_ICloud_IDCount *this)

{
  ~S2C_ICloud_IDCount(this + -8);
  return;
}


/* S2C_ICloud_IDCount::~S2C_ICloud_IDCount() */

void __thiscall S2C_ICloud_IDCount::~S2C_ICloud_IDCount(S2C_ICloud_IDCount *this)

{
  ~S2C_ICloud_IDCount(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_IDCount::~S2C_ICloud_IDCount() */

void __thiscall S2C_ICloud_IDCount::~S2C_ICloud_IDCount(S2C_ICloud_IDCount *this)

{
  ~S2C_ICloud_IDCount(this + -8);
  return;
}


/* S2C_ICloud_IDCount::StaticNew() */

S2C_ICloud_IDCount * S2C_ICloud_IDCount::StaticNew(void)

{
  S2C_ICloud_IDCount *this;
  
  this = ::operator_new(0x20);
  S2C_ICloud_IDCount(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_IDCount::StaticClassInit() */

void S2C_ICloud_IDCount::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ICloud_IDCount");
    (*pcVar2)(plVar1,asStack_10,FUN_03218078,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_IDCount::StaticGetClass() */

long * S2C_ICloud_IDCount::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_IDCount",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_IDCount::GetClass() const */

long * S2C_ICloud_IDCount::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_IDCount",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_IDCount::Find(std::vector<S2C_ICloud_IDCount, std::allocator<S2C_ICloud_IDCount> >
   const&, int, int) */

void S2C_ICloud_IDCount::Find(vector *param_1,int param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0322982c(*(undefined8 *)param_1);
  local_10 = FUN_0322987c(*(undefined8 *)(param_1 + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0322995c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar2 + 0x14) == param_2) && (*(int *)(lVar2 + 0x18) == param_3)) {
      bVar1 = true;
      goto LAB_0322995c;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* S2C_ICloud_IDCount::S2C_ICloud_IDCount(S2C_ICloud_IDCount&&) */

void __thiscall
S2C_ICloud_IDCount::S2C_ICloud_IDCount(S2C_ICloud_IDCount *this,S2C_ICloud_IDCount *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660caf0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_IDCount_0660cb58;
  return;
}

