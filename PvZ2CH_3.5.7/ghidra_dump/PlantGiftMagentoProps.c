// Class: PlantGiftMagentoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGiftMagentoProps::StaticClassInit() */

void PlantGiftMagentoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGiftMagentoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e95a6c,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGiftMagentoProps::~PlantGiftMagentoProps() */

void __thiscall PlantGiftMagentoProps::~PlantGiftMagentoProps(PlantGiftMagentoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06790530;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  MagentoProductProps::~MagentoProductProps((MagentoProductProps *)this);
  return;
}


/* PlantGiftMagentoProps::~PlantGiftMagentoProps() */

void __thiscall PlantGiftMagentoProps::~PlantGiftMagentoProps(PlantGiftMagentoProps *this)

{
  ~PlantGiftMagentoProps(this);
  AK::FreeHook(this);
  return;
}


/* PlantGiftMagentoProps::PlantGiftMagentoProps() */

void __thiscall PlantGiftMagentoProps::PlantGiftMagentoProps(PlantGiftMagentoProps *this)

{
  MagentoProductProps::MagentoProductProps((MagentoProductProps *)this);
  *(undefined ***)this = &PTR_GetClass_06790530;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* PlantGiftMagentoProps::StaticNew() */

PlantGiftMagentoProps * PlantGiftMagentoProps::StaticNew(void)

{
  PlantGiftMagentoProps *this;
  
  this = ::operator_new(0x100);
  PlantGiftMagentoProps(this);
  return this;
}


/* PlantGiftMagentoProps::StaticGetClass() */

long * PlantGiftMagentoProps::StaticGetClass(void)

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
  uVar2 = MagentoProductProps::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGiftMagentoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGiftMagentoProps::GetClass() const */

long * PlantGiftMagentoProps::GetClass(void)

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
  uVar2 = MagentoProductProps::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGiftMagentoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

