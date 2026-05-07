// Class: DangerRoomModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModuleProperties::StaticClassInit() */

void DangerRoomModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03c9b0b4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModuleProperties::StaticGetClass() */

long * DangerRoomModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomModuleProperties::GetClass() const */

long * DangerRoomModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomModuleProperties::GetModuleClass() const */

long * DangerRoomModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DangerRoomModule::sClass != (long *)0x0) {
    return DangerRoomModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DangerRoomModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomModule",uVar2,DangerRoomModule::StaticNew);
  DangerRoomModule::StaticClassInit();
  return DangerRoomModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
DangerRoomModuleProperties::GatherResourceRequirements
          (DangerRoomModuleProperties *this,set *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03c96308(*(undefined8 *)(this + 0x48));
  local_10 = FUN_03c96358(*(undefined8 *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x78))(plVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModuleProperties::DangerRoomModuleProperties() */

void __thiscall
DangerRoomModuleProperties::DangerRoomModuleProperties(DangerRoomModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0675b970;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* DangerRoomModuleProperties::StaticNew() */

DangerRoomModuleProperties * DangerRoomModuleProperties::StaticNew(void)

{
  DangerRoomModuleProperties *this;
  
  this = ::operator_new(0x60);
  DangerRoomModuleProperties(this);
  return this;
}


/* DangerRoomModuleProperties::~DangerRoomModuleProperties() */

void __thiscall
DangerRoomModuleProperties::~DangerRoomModuleProperties(DangerRoomModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b970;
  std::
  vector<Sexy::RtWeakPtr<DangerRoomLevelDesigner>,std::allocator<Sexy::RtWeakPtr<DangerRoomLevelDesigner>>>
  ::~vector((vector<Sexy::RtWeakPtr<DangerRoomLevelDesigner>,std::allocator<Sexy::RtWeakPtr<DangerRoomLevelDesigner>>>
             *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* DangerRoomModuleProperties::~DangerRoomModuleProperties() */

void __thiscall
DangerRoomModuleProperties::~DangerRoomModuleProperties(DangerRoomModuleProperties *this)

{
  ~DangerRoomModuleProperties(this);
  AK::FreeHook(this);
  return;
}

