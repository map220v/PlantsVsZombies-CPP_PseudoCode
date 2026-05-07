// Class: ZombieZombossExplosiveProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosiveProps::StaticClassInit() */

void ZombieZombossExplosiveProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossExplosiveImp");
    (*pcVar3)(plVar2,asStack_10,FUN_04707170,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossExplosiveStage");
    (*pcVar3)(plVar2,asStack_10,FUN_04707418,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieZombossExplosiveProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04709a88,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossExplosiveProps::StaticGetClass() */

long * ZombieZombossExplosiveProps::StaticGetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossExplosiveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossExplosiveProps::GetClass() const */

long * ZombieZombossExplosiveProps::GetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossExplosiveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossExplosiveProps::ZombieZombossExplosiveProps() */

void __thiscall
ZombieZombossExplosiveProps::ZombieZombossExplosiveProps(ZombieZombossExplosiveProps *this)

{
  ZombossProps::ZombossProps((ZombossProps *)this);
  *(undefined ***)this = &PTR_GetClass_068bc670;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  ZombossExplosiveImp::ZombossExplosiveImp((ZombossExplosiveImp *)(this + 0x230));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x250));
  return;
}


/* ZombieZombossExplosiveProps::StaticNew() */

ZombieZombossExplosiveProps * ZombieZombossExplosiveProps::StaticNew(void)

{
  ZombieZombossExplosiveProps *this;
  
  this = ::operator_new(600);
  ZombieZombossExplosiveProps(this);
  return this;
}


/* ZombieZombossExplosiveProps::~ZombieZombossExplosiveProps() */

void __thiscall
ZombieZombossExplosiveProps::~ZombieZombossExplosiveProps(ZombieZombossExplosiveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068bc670;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)(this + 0x230));
  std::vector<ZombossExplosiveStage,std::allocator<ZombossExplosiveStage>>::~vector
            ((vector<ZombossExplosiveStage,std::allocator<ZombossExplosiveStage>> *)(this + 0x218));
  ZombossProps::~ZombossProps((ZombossProps *)this);
  return;
}


/* ZombieZombossExplosiveProps::~ZombieZombossExplosiveProps() */

void __thiscall
ZombieZombossExplosiveProps::~ZombieZombossExplosiveProps(ZombieZombossExplosiveProps *this)

{
  ~ZombieZombossExplosiveProps(this);
  AK::FreeHook(this);
  return;
}

