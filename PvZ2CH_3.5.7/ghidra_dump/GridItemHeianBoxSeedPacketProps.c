// Class: GridItemHeianBoxSeedPacketProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacketProps::StaticClassInit() */

void GridItemHeianBoxSeedPacketProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxSeedPacketProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2adc0,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSeedPacketProps::StaticGetClass() */

long * GridItemHeianBoxSeedPacketProps::StaticGetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSeedPacketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSeedPacketProps::GetClass() const */

long * GridItemHeianBoxSeedPacketProps::GetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSeedPacketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSeedPacketProps::GridItemHeianBoxSeedPacketProps() */

void __thiscall
GridItemHeianBoxSeedPacketProps::GridItemHeianBoxSeedPacketProps
          (GridItemHeianBoxSeedPacketProps *this)

{
  GridItemHeianBoxProps::GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  *(undefined ***)this = &PTR_GetClass_067676c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  return;
}


/* GridItemHeianBoxSeedPacketProps::StaticNew() */

GridItemHeianBoxSeedPacketProps * GridItemHeianBoxSeedPacketProps::StaticNew(void)

{
  GridItemHeianBoxSeedPacketProps *this;
  
  this = ::operator_new(0xf0);
  GridItemHeianBoxSeedPacketProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacketProps::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
GridItemHeianBoxSeedPacketProps::GatherResourceRequirements
          (GridItemHeianBoxSeedPacketProps *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  long *plVar4;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_03d2af94(*(undefined8 *)(this + 0xd0));
  local_18 = FUN_03d2afe4(*(undefined8 *)(this + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSeedPacketProps::~GridItemHeianBoxSeedPacketProps() */

void __thiscall
GridItemHeianBoxSeedPacketProps::~GridItemHeianBoxSeedPacketProps
          (GridItemHeianBoxSeedPacketProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067676c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  GridItemHeianBoxProps::~GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  return;
}


/* GridItemHeianBoxSeedPacketProps::~GridItemHeianBoxSeedPacketProps() */

void __thiscall
GridItemHeianBoxSeedPacketProps::~GridItemHeianBoxSeedPacketProps
          (GridItemHeianBoxSeedPacketProps *this)

{
  ~GridItemHeianBoxSeedPacketProps(this);
  AK::FreeHook(this);
  return;
}

