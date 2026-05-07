// Class: ZombieFairyTaleArmedGargantuar


/* ZombieFairyTaleArmedGargantuar::onInitialized() */

void __thiscall ZombieFairyTaleArmedGargantuar::onInitialized(ZombieFairyTaleArmedGargantuar *this)

{
  Zombie::onInitialized((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0xffffffff;
  return;
}


/* ZombieFairyTaleArmedGargantuar::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombieFairyTaleArmedGargantuar::onTakeFatalDamage
          (ZombieFairyTaleArmedGargantuar *this,DamageInfo *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x1000);
  if ((!bVar1) && (bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x80), !bVar1)) {
    (**(code **)(*(long *)this + 0x240))(this);
  }
  return;
}


/* ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar() */

void __thiscall
ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar
          (ZombieFairyTaleArmedGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069f9f60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleArmedGargantuar_069fa9b8;
  ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar((ZombieFairyTaleGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar() */

void __thiscall
ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar
          (ZombieFairyTaleArmedGargantuar *this)

{
  ~ZombieFairyTaleArmedGargantuar(this + -0x10);
  return;
}


/* ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar() */

void __thiscall
ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar
          (ZombieFairyTaleArmedGargantuar *this)

{
  ~ZombieFairyTaleArmedGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar() */

void __thiscall
ZombieFairyTaleArmedGargantuar::~ZombieFairyTaleArmedGargantuar
          (ZombieFairyTaleArmedGargantuar *this)

{
  ~ZombieFairyTaleArmedGargantuar(this + -0x10);
  return;
}


/* ZombieFairyTaleArmedGargantuar::ZombieFairyTaleArmedGargantuar() */

void __thiscall
ZombieFairyTaleArmedGargantuar::ZombieFairyTaleArmedGargantuar(ZombieFairyTaleArmedGargantuar *this)

{
  ZombieFairyTaleGargantuar::ZombieFairyTaleGargantuar((ZombieFairyTaleGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069f9f60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleArmedGargantuar_069fa9b8;
  return;
}


/* ZombieFairyTaleArmedGargantuar::StaticNew() */

ZombieFairyTaleArmedGargantuar * ZombieFairyTaleArmedGargantuar::StaticNew(void)

{
  ZombieFairyTaleArmedGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieFairyTaleArmedGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleArmedGargantuar::StaticClassInit() */

void ZombieFairyTaleArmedGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleArmedGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed3a64,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleArmedGargantuar::StaticGetClass() */

long * ZombieFairyTaleArmedGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieFairyTaleGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleArmedGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleArmedGargantuar::GetClass() const */

long * ZombieFairyTaleArmedGargantuar::GetClass(void)

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
  uVar2 = ZombieFairyTaleGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleArmedGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleArmedGargantuar::playDeathAnimation() */

void ZombieFairyTaleArmedGargantuar::playDeathAnimation(void)

{
  Zombie *in_x0;
  
  Zombie::playDeathAnimation(in_x0);
  ZombieFairyTaleGargantuar::dropShield((ZombieFairyTaleGargantuar *)in_x0);
  return;
}


/* ZombieFairyTaleArmedGargantuar::onZombieInitialize() */

void __thiscall
ZombieFairyTaleArmedGargantuar::onZombieInitialize(ZombieFairyTaleArmedGargantuar *this)

{
  ZombieFairyTaleGargantuarProps *pZVar1;
  undefined1 auVar2 [16];
  
  Zombie::onZombieInitialize((Zombie *)this);
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,this,0x69,1);
  pZVar1 = Zombie::GetProps<ZombieFairyTaleGargantuarProps>((Zombie *)this);
  ZombieFairyTaleGargantuar::showAmmoLayers((ZombieFairyTaleGargantuar *)this,(bool)pZVar1[0x268]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleArmedGargantuar::dropImp() */

void ZombieFairyTaleArmedGargantuar::dropImp(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zombie *in_x0;
  long lVar4;
  ZombieFairyTaleArmedGargantuarProps *pZVar5;
  ulong uVar6;
  string *psVar7;
  Zombie *pZVar8;
  SexyVector3 *this;
  long *extraout_x0;
  ZombieHydraHeadAnimRig *this_00;
  Board *pBVar9;
  code *pcVar10;
  undefined4 in_s1;
  undefined4 in_s2;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar4 != 0)) {
    pZVar5 = Zombie::GetProps<ZombieFairyTaleArmedGargantuarProps>(in_x0);
    uVar6 = FUN_04ed2528(*(undefined8 *)(pZVar5 + 0x210),*(undefined8 *)(pZVar5 + 0x218));
    if (*(uint *)(in_x0 + 0x800) < uVar6) {
      pZVar5 = Zombie::GetProps<ZombieFairyTaleArmedGargantuarProps>(in_x0);
      FUN_05475d88(asStack_28,pZVar5 + 0x250);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
      pZVar8 = (Zombie *)
               Board::AddZombie(pBVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,
                                *(undefined4 *)(in_x0 + 0x50),0,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      cVar1 = Zombie::HasCondition();
      if (cVar1 != '\0') {
        PVZ_EOT();
        in_s1 = 0;
        Zombie::ApplyCondition(pZVar8,0x19,1);
      }
      cVar1 = Zombie::HasCondition();
      if (cVar1 != '\0') {
        PVZ_EOT();
        in_s1 = 0;
        Zombie::ApplyCondition(pZVar8,0x90,1);
        Zombie::SetFacing(pZVar8,1);
      }
      cVar1 = Zombie::HasCondition();
      if (cVar1 != '\0') {
        PVZ_EOT();
        in_s1 = 0;
        Zombie::ApplyCondition(pZVar8,0x77,1);
      }
      pcVar10 = *(code **)(*(long *)pZVar8 + 0x78);
      this = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)in_x0);
      pZVar5 = Zombie::GetProps<ZombieFairyTaleArmedGargantuarProps>(in_x0);
      local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)(pZVar5 + 0x238));
      local_14 = in_s1;
      local_10 = in_s2;
      (*pcVar10)(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      uVar2 = FUN_04ed24f8(*(undefined4 *)(in_x0 + 0x24));
      RealObject::JoinTeam((RealObject *)pZVar8,uVar2);
      uVar2 = Zombie::GetFacing(in_x0);
      Zombie::SetFacing(pZVar8,uVar2);
      if (*(code **)(*(long *)pZVar8 + 0x270) != Zombie::LaunchedByGargantuar) {
        (**(code **)(*(long *)pZVar8 + 0x270))(pZVar8);
      }
      pZVar5 = Zombie::GetProps<ZombieFairyTaleArmedGargantuarProps>(in_x0);
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x0);
      iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar3,*(float *)(this + 4),0.0);
      nop();
      (**(code **)(*extraout_x0 + 0xa08))
                (local_18,local_14,local_10,*(undefined4 *)(pZVar5 + 0x244),
                 *(undefined4 *)(pZVar5 + 0x234));
      this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
      lVar4 = FUN_04ed2520(*(undefined8 *)(pZVar5 + 0x210),*(undefined4 *)(in_x0 + 0x800));
      ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
                ((ZombieAnimRig_Gargantuar *)this_00,(vector *)(lVar4 + 8),false);
      *(int *)(in_x0 + 0x800) = *(int *)(in_x0 + 0x800) + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::~string(asStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleArmedGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieFairyTaleArmedGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"spawn_imp");
  if (bVar1) {
    dropImp();
  }
  ZombieGargantuar::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

