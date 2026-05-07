// Class: MagnetShroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnetShroomProps::StaticClassInit() */

void MagnetShroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnetShroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f95b3c,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnetShroomProps::MagnetShroomProps() */

void __thiscall MagnetShroomProps::MagnetShroomProps(MagnetShroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a4d80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f8));
  *(undefined4 *)(this + 0x2b8) = 7;
  *(undefined4 *)(this + 0x2c8) = 0x41200000;
  *(undefined4 *)(this + 700) = 5;
  *(undefined4 *)(this + 0x2cc) = 6;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x447a0000;
  *(undefined4 *)(this + 0x2d0) = 0x3fc00000;
  return;
}


/* MagnetShroomProps::StaticNew() */

MagnetShroomProps * MagnetShroomProps::StaticNew(void)

{
  MagnetShroomProps *this;
  
  this = ::operator_new(0x310);
  MagnetShroomProps(this);
  return this;
}


/* MagnetShroomProps::~MagnetShroomProps() */

void __thiscall MagnetShroomProps::~MagnetShroomProps(MagnetShroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4d80;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2f8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MagnetShroomProps::~MagnetShroomProps() */

void __thiscall MagnetShroomProps::~MagnetShroomProps(MagnetShroomProps *this)

{
  ~MagnetShroomProps(this);
  AK::FreeHook(this);
  return;
}


/* MagnetShroomProps::StaticGetClass() */

long * MagnetShroomProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MagnetShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnetShroomProps::GetClass() const */

long * MagnetShroomProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MagnetShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

