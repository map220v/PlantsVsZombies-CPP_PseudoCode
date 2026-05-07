// Class: S2C_DangerRoomPlantNumArray


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomPlantNumArray::StaticClassInit() */

void S2C_DangerRoomPlantNumArray::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_DangerRoomPlantNumArray");
    (*pcVar2)(plVar1,asStack_10,FUN_03237c90,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomPlantNumArray::StaticGetClass() */

long * S2C_DangerRoomPlantNumArray::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomPlantNumArray",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomPlantNumArray::GetClass() const */

long * S2C_DangerRoomPlantNumArray::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomPlantNumArray",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomPlantNumArray::ToJason(std::string&) */

void __thiscall
S2C_DangerRoomPlantNumArray::ToJason(S2C_DangerRoomPlantNumArray *this,string *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(*(long *)this + 0x40);
  std::string::string((string *)&local_10,"d");
  (*pcVar4)(this,param_1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  iVar1 = FUN_054743b0(param_1,0x5b,0);
  uVar2 = FUN_05474e7c(param_1);
  local_10 = FUN_05474e7c(param_1);
  uVar3 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                    ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,
                     (long)iVar1);
  FUN_054750b4(param_1,uVar2,uVar3);
  local_10 = FUN_05474eb0(param_1);
  uVar2 = __gnu_cxx::__normal_iterator<char*,std::string>::operator-
                    ((__normal_iterator<char*,std::string> *)&local_10,2);
  uVar3 = FUN_05474eb0(param_1);
  FUN_054750b4(param_1,uVar2,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomPlantNumArray::PlantExist(int) */

void __thiscall
S2C_DangerRoomPlantNumArray::PlantExist(S2C_DangerRoomPlantNumArray *this,int param_1)

{
  bool bVar1;
  long lVar2;
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
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0322a7ac:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(int *)(lVar2 + 0x14) == param_1) {
      bVar1 = true;
      goto LAB_0322a7ac;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* S2C_DangerRoomPlantNumArray::S2C_DangerRoomPlantNumArray() */

void __thiscall
S2C_DangerRoomPlantNumArray::S2C_DangerRoomPlantNumArray(S2C_DangerRoomPlantNumArray *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d900;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNumArray_0660d968;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_DangerRoomPlantNumArray::StaticNew() */

S2C_DangerRoomPlantNumArray * S2C_DangerRoomPlantNumArray::StaticNew(void)

{
  S2C_DangerRoomPlantNumArray *this;
  
  this = ::operator_new(0x30);
  S2C_DangerRoomPlantNumArray(this);
  return this;
}


/* S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray() */

void __thiscall
S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray(S2C_DangerRoomPlantNumArray *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d900;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomPlantNumArray_0660d968;
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray() */

void __thiscall
S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray(S2C_DangerRoomPlantNumArray *this)

{
  ~S2C_DangerRoomPlantNumArray(this + -8);
  return;
}


/* S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray() */

void __thiscall
S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray(S2C_DangerRoomPlantNumArray *this)

{
  ~S2C_DangerRoomPlantNumArray(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray() */

void __thiscall
S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray(S2C_DangerRoomPlantNumArray *this)

{
  ~S2C_DangerRoomPlantNumArray(this + -8);
  return;
}

