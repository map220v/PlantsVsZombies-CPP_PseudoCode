// Class: ZombossHydraLobFireballsActionHandler


/* ZombossHydraLobFireballsActionHandler::onHydraFireLobActionEnded(std::string const&) */

void ZombossHydraLobFireballsActionHandler::onHydraFireLobActionEnded(string *param_1)

{
  return;
}


/* ZombossHydraLobFireballsActionHandler::onHydraFireLobEndEnded(std::string const&) */

void ZombossHydraLobFireballsActionHandler::onHydraFireLobEndEnded(string *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraLobFireballsActionHandler::StaticClassInit() */

void ZombossHydraLobFireballsActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraLobFireballsActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f55374,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraLobFireballsActionHandler::StaticGetClass() */

long * ZombossHydraLobFireballsActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossDarkLobFireballsActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraLobFireballsActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraLobFireballsActionHandler::GetClass() const */

long * ZombossHydraLobFireballsActionHandler::GetClass(void)

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
  uVar2 = ZombossDarkLobFireballsActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraLobFireballsActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraLobFireballsActionHandler::lobFireball(Sexy::Point const&, bool) const */

void ZombossHydraLobFireballsActionHandler::lobFireball(Point *param_1,bool param_2)

{
  RtObject *this;
  ZombieZombossMech *pZVar1;
  HydraFlyingFireball *pHVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pHVar2 = GameObject::Create<HydraFlyingFireball>();
  Sexy::Point::Point(aPStack_10,(TPoint *)(ulong)param_2);
  FlyingFireball::StartEffect
            ((FlyingFireball *)0x40000000,0x44160000,0x40a00000,pHVar2,aPStack_10,pZVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraLobFireballsActionHandler::~ZombossHydraLobFireballsActionHandler() */

void __thiscall
ZombossHydraLobFireballsActionHandler::~ZombossHydraLobFireballsActionHandler
          (ZombossHydraLobFireballsActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e630;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x58));
  ZombossDarkLobFireballsActionHandler::~ZombossDarkLobFireballsActionHandler
            ((ZombossDarkLobFireballsActionHandler *)this);
  return;
}


/* ZombossHydraLobFireballsActionHandler::~ZombossHydraLobFireballsActionHandler() */

void __thiscall
ZombossHydraLobFireballsActionHandler::~ZombossHydraLobFireballsActionHandler
          (ZombossHydraLobFireballsActionHandler *this)

{
  ~ZombossHydraLobFireballsActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossHydraLobFireballsActionHandler::ZombossHydraLobFireballsActionHandler() */

void __thiscall
ZombossHydraLobFireballsActionHandler::ZombossHydraLobFireballsActionHandler
          (ZombossHydraLobFireballsActionHandler *this)

{
  ZombossDarkLobFireballsActionHandler::ZombossDarkLobFireballsActionHandler
            ((ZombossDarkLobFireballsActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e630;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* ZombossHydraLobFireballsActionHandler::StaticNew() */

ZombossHydraLobFireballsActionHandler * ZombossHydraLobFireballsActionHandler::StaticNew(void)

{
  ZombossHydraLobFireballsActionHandler *this;
  
  this = ::operator_new(0x88);
  ZombossHydraLobFireballsActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraLobFireballsActionHandler::onHydraFireLobStartEnded(std::string const&) */

void ZombossHydraLobFireballsActionHandler::onHydraFireLobStartEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHydraFireLobActionEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireAttack
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

