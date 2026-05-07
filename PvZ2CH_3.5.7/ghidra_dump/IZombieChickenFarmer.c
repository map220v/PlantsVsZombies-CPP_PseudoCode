// Class: IZombieChickenFarmer


/* IZombieChickenFarmer::onPlaceOnBoard() */

void __thiscall IZombieChickenFarmer::onPlaceOnBoard(IZombieChickenFarmer *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  (**(code **)(*(long *)this + 0xa10))(this);
  return;
}


/* IZombieChickenFarmer::~IZombieChickenFarmer() */

void __thiscall IZombieChickenFarmer::~IZombieChickenFarmer(IZombieChickenFarmer *this)

{
  *(undefined ***)this = &PTR_GetClass_06622220;
  *(undefined ***)(this + 0x10) = &PTR__IZombieChickenFarmer_06622c50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ZombieChickenFarmer::~ZombieChickenFarmer((ZombieChickenFarmer *)this);
  return;
}


/* non-virtual thunk to IZombieChickenFarmer::~IZombieChickenFarmer() */

void __thiscall IZombieChickenFarmer::~IZombieChickenFarmer(IZombieChickenFarmer *this)

{
  ~IZombieChickenFarmer(this + -0x10);
  return;
}


/* IZombieChickenFarmer::~IZombieChickenFarmer() */

void __thiscall IZombieChickenFarmer::~IZombieChickenFarmer(IZombieChickenFarmer *this)

{
  ~IZombieChickenFarmer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IZombieChickenFarmer::~IZombieChickenFarmer() */

void __thiscall IZombieChickenFarmer::~IZombieChickenFarmer(IZombieChickenFarmer *this)

{
  ~IZombieChickenFarmer(this + -0x10);
  return;
}


/* IZombieChickenFarmer::IZombieChickenFarmer() */

void __thiscall IZombieChickenFarmer::IZombieChickenFarmer(IZombieChickenFarmer *this)

{
  ZombieChickenFarmer::ZombieChickenFarmer((ZombieChickenFarmer *)this);
  *(undefined ***)this = &PTR_GetClass_06622220;
  *(undefined ***)(this + 0x10) = &PTR__IZombieChickenFarmer_06622c50;
  return;
}


/* IZombieChickenFarmer::StaticNew() */

IZombieChickenFarmer * IZombieChickenFarmer::StaticNew(void)

{
  IZombieChickenFarmer *this;
  
  this = ::operator_new(0x808);
  IZombieChickenFarmer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieChickenFarmer::StaticClassInit() */

void IZombieChickenFarmer::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieChickenFarmer");
    (*pcVar2)(plVar1,asStack_10,FUN_0341a98c,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieChickenFarmer::StaticGetClass() */

long * IZombieChickenFarmer::StaticGetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieChickenFarmer::GetClass() const */

long * IZombieChickenFarmer::GetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieChickenFarmer::onZombieDied(Zombie*, DamageInfo const*) */

void IZombieChickenFarmer::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  ZombieChickenSubsystem *this;
  
  if (param_1 != (Zombie *)param_2) {
    return;
  }
  this = Board::GetGameSubSystem<ZombieChickenSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieChickenSubsystem::Remove(this,param_1);
  return;
}


/* IZombieChickenFarmer::onZombieInitialize() */

void __thiscall IZombieChickenFarmer::onZombieInitialize(IZombieChickenFarmer *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombieStrongBronze::onZombieInitialize((ZombieStrongBronze *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<IZombieChickenFarmer,void(IZombieChickenFarmer::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieChickenFarmer::tryStartChickening() */

void __thiscall IZombieChickenFarmer::tryStartChickening(IZombieChickenFarmer *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieChickenFarmerProps *pZVar5;
  ZombieChickenSubsystem *pZVar6;
  undefined4 *puVar7;
  ZombieHydraHeadAnimRig *pZVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
  pZVar6 = Board::GetGameSubSystem<ZombieChickenSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar10 = *(code **)(*(long *)pZVar6 + 0x88);
  puVar7 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar15 = *puVar7;
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  uVar3 = FUN_0341927c(*(undefined4 *)(this + 0x24));
  uVar11 = PVZ_EOT();
  uVar12 = *(undefined4 *)(pZVar5 + 0x22c);
  uVar13 = *(undefined4 *)(pZVar5 + 0x230);
  uVar14 = *(undefined4 *)(pZVar5 + 0x234);
  cVar1 = Zombie::HasCondition(this,0x19);
  uVar9 = 0x19;
  if (cVar1 == '\0') {
    uVar9 = 0xffffffff;
  }
  uVar4 = FUN_03419280(*(undefined4 *)(this + 0x50));
  (*pcVar10)(uVar15,uVar11,uVar12,uVar13,uVar14,pZVar6,pZVar5 + 0x218,uVar2,uVar3,uVar9,uVar4,0,1,
             this);
  pZVar5 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar5 + 0x220),0.0);
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if (cVar1 != '\0') {
    pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar10 = *(code **)(*(long *)pZVar8 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar10)(pZVar8,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  std::string::string(asStack_58,"Play_ChickenAction");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

