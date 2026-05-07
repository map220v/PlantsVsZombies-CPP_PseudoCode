// Class: ZombieSkyCityBasic


/* ZombieSkyCityBasic::onApplyCondition(ZombieConditions) */

void __thiscall ZombieSkyCityBasic::onApplyCondition(ZombieSkyCityBasic *this,int param_2)

{
  if ((param_2 == 0x37) || (param_2 - 1U < 5)) {
    this[0x818] = (ZombieSkyCityBasic)0x1;
  }
  else if (param_2 == 0x18) {
    this[0x818] = (ZombieSkyCityBasic)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::StaticClassInit() */

void ZombieSkyCityBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_04796020,0x898,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityBasic::StaticGetClass() */

long * ZombieSkyCityBasic::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityBasic::GetClass() const */

long * ZombieSkyCityBasic::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityBasic::ZombieSkyCityBasic() */

void __thiscall ZombieSkyCityBasic::ZombieSkyCityBasic(ZombieSkyCityBasic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  this[0x818] = (ZombieSkyCityBasic)0x0;
  *(undefined ***)this = &PTR_GetClass_068d9a50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityBasic_068da478;
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x820));
  this[0x811] = (ZombieSkyCityBasic)0x0;
  this[0x810] = (ZombieSkyCityBasic)0x0;
  *(undefined4 *)(this + 0x80c) = 0;
  *(undefined4 *)(this + 0x814) = 0;
  return;
}


/* ZombieSkyCityBasic::StaticNew() */

ZombieSkyCityBasic * ZombieSkyCityBasic::StaticNew(void)

{
  ZombieSkyCityBasic *this;
  
  this = ::operator_new(0x898);
  ZombieSkyCityBasic(this);
  return this;
}


/* ZombieSkyCityBasic::GetBarragePtr() */

ZombieSkyCityBasic * __thiscall ZombieSkyCityBasic::GetBarragePtr(ZombieSkyCityBasic *this)

{
  return this + 0x820;
}


/* ZombieSkyCityBasic::GetAttackEffectPosition() */

float __thiscall ZombieSkyCityBasic::GetAttackEffectPosition(ZombieSkyCityBasic *this)

{
  float *pfVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar1;
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  fVar4 = *(float *)(lVar3 + 0xc4);
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  return (fVar5 - fVar4) - 25.0;
}


/* ZombieSkyCityBasic::updateState_Glide() */

void __thiscall ZombieSkyCityBasic::updateState_Glide(ZombieSkyCityBasic *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    Effect_Barrage::Update((Effect_Barrage *)(this + 0x820));
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = std::operator==("skycity_armor2",(string *)(lVar3 + 8));
  if (!bVar2) {
    return;
  }
  Zombie::updateState_Glide((Zombie *)this);
  return;
}


/* ZombieSkyCityBasic::updateState_Attack() */

void __thiscall ZombieSkyCityBasic::updateState_Attack(ZombieSkyCityBasic *this)

{
  bool bVar1;
  RtObject *this_00;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    (**(code **)(*(long *)this + 0x260))(this);
    return;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
  if (bVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,2);
  return;
}


/* ZombieSkyCityBasic::onEnterState_Glide(ZombieState) */

void __thiscall ZombieSkyCityBasic::onEnterState_Glide(ZombieSkyCityBasic *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = std::operator==("skycity_armor1",(string *)(lVar3 + 8));
  if (bVar2) {
    cVar1 = Effect_Barrage::IsInitlized((Effect_Barrage *)(this + 0x820));
    if (cVar1 != '\0') {
      Effect_Barrage::StartBasicBarrage((Effect_Barrage *)(this + 0x820));
      nop();
      return;
    }
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = std::operator==("skycity_armor2",(string *)(lVar3 + 8));
  if (bVar2) {
    lVar3 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0xd8));
    if (lVar3 == 0) {
      Zombie::AddBarrageXItem((Zombie *)this,5,0x14);
      Zombie::AddBarrageXItem((Zombie *)this,6,0x19);
    }
    lVar3 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0x108));
    if (lVar3 == 0) {
      Zombie::AddBarrageYItem((Zombie *)this,0,0xf);
      Zombie::AddBarrageYItem((Zombie *)this,1,0x14);
      Zombie::AddBarrageYItem((Zombie *)this,2,0x19);
      Zombie::AddBarrageYItem((Zombie *)this,3,0x14);
      Zombie::AddBarrageYItem((Zombie *)this,4,0xf);
    }
  }
  nop();
  return;
}


/* ZombieSkyCityBasic::updateState_Eat() */

void __thiscall ZombieSkyCityBasic::updateState_Eat(ZombieSkyCityBasic *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
    if (bVar1) {
      Zombie::setZombieState((Zombie *)this,3,0);
      return;
    }
    bVar1 = Sexy::RtObject::IsA<GridItemArmrack>(this_00);
    if (!bVar1) {
      bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_00);
      if (bVar1) {
        return;
      }
      (**(code **)(*(long *)this + 0x958))(this,this_00);
      return;
    }
  }
  cVar2 = Zombie::IsSuspended((Zombie *)this);
  if (cVar2 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::PlayAttackEndEffect() */

void ZombieSkyCityBasic::PlayAttackEndEffect(void)

{
  int iVar1;
  ZombieSkyCityBasic *in_x0;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  PopAnimRig *this_00;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = GetAttackEffectPosition(in_x0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBIE_ATTACK_FIRE");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  std::string::string((string *)aRStack_20,"attack_off");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  iVar1 = (**(code **)(*(long *)in_x0 + 0x170))();
  FUN_04794a04(this + 0x1c,iVar1 + 1);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  PopAnimRig::SetDrawScale(this_00,0.4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityBasic::onEnterState_Die(ZombieState) */

void ZombieSkyCityBasic::onEnterState_Die(void)

{
  Zombie::onEnterState_Die();
  PlayAttackEndEffect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::onEnterState_Attack(ZombieState) */

void ZombieSkyCityBasic::onEnterState_Attack(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x818] = (Zombie)0x0;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"attack_pre");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAttackPrepareStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::preShoot() */

void __thiscall ZombieSkyCityBasic::preShoot(ZombieSkyCityBasic *this)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"shoot1");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAttackPrepareStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityBasic::updateState_Walk() */

void __thiscall ZombieSkyCityBasic::updateState_Walk(ZombieSkyCityBasic *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  RtObject *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
    if (this_00 != (RtObject *)0x0) {
      bVar2 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
      uVar6 = 2;
      if (bVar2) {
        uVar6 = 3;
      }
LAB_047957a0:
      Zombie::setZombieState((Zombie *)this,uVar6,0);
      return;
    }
  }
  else {
    lVar4 = Zombie::GetAnimRig((Zombie *)this);
    if ((lVar4 != 0) && (this[0x811] != (ZombieSkyCityBasic)0x0)) {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar9 = *pfVar5;
      lVar4 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if (fVar9 < *(float *)(lVar4 + 0x10)) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        bVar2 = std::operator==("skycity_armor2",(string *)(lVar4 + 8));
        if ((bVar2) && (this[0x810] == (ZombieSkyCityBasic)0x0)) {
          this[0x810] = (ZombieSkyCityBasic)0x1;
          Effect_Barrage::StartBasicBarrage((Effect_Barrage *)(this + 0x820));
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          bVar2 = std::operator!=("skycity_armor2",(string *)(lVar4 + 8));
          if ((bVar2) &&
             (fVar7 = (float)PVZ_T(), *(float *)(this + 0x814) < fVar7 - *(float *)(this + 0x80c)))
          {
            uVar8 = PVZ_T();
            *(undefined4 *)(this + 0x80c) = uVar8;
            preShoot(this);
          }
        }
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        bVar2 = std::operator==("skycity_armor1",(string *)(lVar4 + 8));
        if (!bVar2) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          bVar2 = std::operator==("skycity_armor2",(string *)(lVar4 + 8));
          if (!bVar2) {
            return;
          }
        }
        iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(5);
        if (fVar9 < (float)iVar3) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          bVar2 = std::operator==("skycity_armor1",(string *)(lVar4 + 8));
          if ((bVar2) && (this[0x810] == (ZombieSkyCityBasic)0x0)) {
            this[0x810] = (ZombieSkyCityBasic)0x1;
            uVar6 = 0x11;
          }
          else {
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            bVar2 = std::operator==("skycity_armor2",(string *)(lVar4 + 8));
            if (!bVar2) {
              return;
            }
            uVar6 = 0x11;
          }
          goto LAB_047957a0;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::takeShoot() */

void __thiscall ZombieSkyCityBasic::takeShoot(ZombieSkyCityBasic *this)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Projectile *this_00;
  Board *pBVar5;
  undefined4 uVar4;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"PooyanSkyCityBasic");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar5._0_4_ = *puVar3;
    uVar4 = *(undefined4 *)((long)puVar3 + 4);
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    this_00 = (Projectile *)Board::AddProjectile(pBVar5._0_4_,uVar4,0,uVar2,aRStack_18,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Projectile::SetShadow(this_00,false);
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_00,0xf0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::findTarget() */

void __thiscall ZombieSkyCityBasic::findTarget(ZombieSkyCityBasic *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RealObject *pRVar4;
  RealObject *extraout_x0;
  RtObject *this_00;
  Plant *extraout_x0_00;
  long lVar5;
  PlantGroup *this_01;
  undefined8 *puVar6;
  PlantGroup *pPVar7;
  GridItemAirship *pGVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pRVar4 = (RealObject *)Zombie::GetForcedTarget((Zombie *)this);
    (**(code **)(*(long *)this + 0x3a0))(local_30,this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,2,local_30,iVar3,iVar3 + local_38._4_4_ + -1);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
      if (((((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar1 == '\0')) &&
           (cVar1 = Zombie::HasCondition(extraout_x0,0x27), cVar1 == '\0')) &&
          ((cVar1 = Zombie::HasCondition(extraout_x0,0x25), cVar1 == '\0' &&
           (cVar1 = Zombie::HasCondition(extraout_x0,0x65), cVar1 == '\0')))) &&
         ((pPVar7 = (PlantGroup *)extraout_x0, pRVar4 == extraout_x0 ||
          (pPVar7 = (PlantGroup *)extraout_x0, pRVar4 == (RealObject *)0x0)))) goto LAB_04795c38;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    pGVar8 = (GridItemAirship *)0x0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,4,local_30,iVar3,iVar3 + local_38._4_4_ + -1);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00);
      if (((cVar1 != '\0') &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x218))(this_00,this), cVar1 != '\0')) &&
         ((pRVar4 == (RealObject *)this_00 || (pRVar4 == (RealObject *)0x0)))) {
        bVar2 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
        pPVar7 = (PlantGroup *)this_00;
        if (!bVar2) goto LAB_04795c38;
        pGVar8 = Sexy::RtObject::Cast<GridItemAirship>(this_00);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,1,local_30,iVar3,iVar3 + local_38._4_4_ + -1);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      nop();
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      bVar2 = std::operator==((string *)(lVar5 + 8),"saucer");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      if (((!bVar2) &&
          (cVar1 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0_00), cVar1 != '\0')) &&
         ((pRVar4 == (RealObject *)extraout_x0_00 || (pRVar4 == (RealObject *)0x0)))) {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38)
        ;
        bVar2 = std::operator==((string *)(lVar5 + 8),"smallChestnut");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        if (bVar2) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          pPVar7 = (PlantGroup *)extraout_x0_00;
          goto LAB_04795aa8;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,0x10,local_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      nop();
      cVar1 = Zombie::CanNormalDamagePlantGroup((Zombie *)this,this_01,false);
      if ((cVar1 != '\0') && ((pRVar4 == (RealObject *)this_01 || (pRVar4 == (RealObject *)0x0)))) {
        std::string::string((string *)&local_38,"saucer");
        cVar1 = PlantGroup::HasPlant(this_01,(string *)&local_38);
        std::string::~string((string *)&local_38);
        nop();
        pPVar7 = this_01;
        if (cVar1 == '\0') goto LAB_04795c38;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    pPVar7 = (PlantGroup *)pGVar8;
    if (pGVar8 == (GridItemAirship *)0x0) {
      local_30[0] = local_30[0] + -10;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
      EntityFinder::GetEntitiesTouchingRectangle
                (avStack_20,4,local_30,iVar3,iVar3 + local_38._4_4_ + -1);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        bVar2 = Sexy::RtObject::IsA<GridItemAirship>((RtObject *)*puVar6);
        if ((bVar2) &&
           (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)*puVar6),
           cVar1 != '\0')) {
          pPVar7 = (PlantGroup *)Sexy::RtObject::Cast<GridItemAirship>((RtObject *)*puVar6);
          break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
    }
LAB_04795c38:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    pPVar7 = (PlantGroup *)0x0;
  }
LAB_04795aa8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::onAttackAnimStopped(std::string const&) */

void __thiscall ZombieSkyCityBasic::onAttackAnimStopped(ZombieSkyCityBasic *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  RtObject *this_01;
  code *pcVar3;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onAttackAnimStopped((Zombie *)this,param_1);
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if ((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,3), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x938))(avStack_20,this);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        this_01 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        bVar2 = Sexy::RtObject::IsA<GridItemAirship>(this_01);
        if (bVar2) {
          pcVar3 = *(code **)(*(long *)this + 0x980);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
          (*pcVar3)(this,aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::PlayAttackEffect(bool) */

void ZombieSkyCityBasic::PlayAttackEffect(bool param_1)

{
  char cVar1;
  int iVar2;
  ZombieSkyCityBasic *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  char in_w1;
  float fVar4;
  float fVar5;
  float local_98;
  float local_94;
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  undefined4 local_78;
  RtWeakPtr aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (ZombieSkyCityBasic *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (this[0x818] == (ZombieSkyCityBasic)0x0) {
    cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      local_78 = GetAttackEffectPosition(this);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_80,"POPANIM_EFFECTS_ZOMBIE_ATTACK_FIRE");
      GetPAMByName(asStack_80);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_80);
      nop();
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,118.0,135.0);
      fVar4 = (float)FUN_04794ab8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                  *(undefined4 *)(this + 0x20));
      fVar5 = *(float *)(this + 0x1c);
      FUN_04794ab8(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(fVar4 - local_98) - 55.0,(fVar5 + 22.0) - local_94,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_68);
      if (in_w1 != '\0') {
        std::string::string(asStack_80,"attack_pre");
        AnimationSequence::AddSingleAnimation(aRStack_68,asStack_80,0);
        std::string::~string(asStack_80);
        nop();
      }
      std::string::string(asStack_80,"attack");
      AnimationSequence::AddSingleAnimation(aRStack_68,asStack_80,0);
      std::string::~string(asStack_80);
      nop();
      Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_68);
      iVar2 = (**(code **)(*(long *)this + 0x170))(this);
      FUN_04794a04(this_00 + 0x1c,iVar2 + 1);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string(asStack_80,"onAttackEffectEnd");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_88,
                 asStack_80);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_80);
      nop();
      Sexy::RtId::~RtId(aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      cVar1 = Zombie::IsControlled((Zombie *)this);
      if (cVar1 != '\0') {
        StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
      }
      std::string::string(asStack_80,"Play_Plant_FireGourd_Attack");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_80,0.0);
      std::string::~string(asStack_80);
      nop();
      AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::onAttackPrepareStopped(std::string const&) */

void __thiscall ZombieSkyCityBasic::onAttackPrepareStopped(ZombieSkyCityBasic *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  PopAnimRig *pPVar4;
  code *pcVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("shoot1",param_1);
  if (bVar1) {
    takeShoot(this);
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar3 + 0x170);
    std::string::string(asStack_58,"shoot2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAttackPrepareStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    (*pcVar5)(plVar3,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    bVar1 = std::operator==("shoot2",param_1);
    if (bVar1) {
      plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
      pcVar5 = *(code **)(*plVar3 + 0x170);
      std::string::string(asStack_58,"shoot3");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAttackPrepareStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      (*pcVar5)(plVar3,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      bVar1 = std::operator==("shoot3",param_1);
      if (bVar1) {
        pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_58,"walk");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                  ((DummyInit *)aRStack_50);
        PopAnimRig::PlayAndContinue(pPVar4,asStack_58,0,(DummyInit *)aRStack_50);
        std::string::~string(asStack_58);
        nop();
      }
    }
  }
  cVar2 = Zombie::isInState((Zombie *)this,3);
  if (cVar2 != '\0') {
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar3 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
    std::string::string(asStack_58,"onAttackAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)asStack_60,asStack_58);
    (*pcVar5)(plVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    PlayAttackEffect(SUB81(this,0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityBasic::onEndCondition(ZombieConditions) */

void __thiscall ZombieSkyCityBasic::onEndCondition(ZombieSkyCityBasic *this,int param_2)

{
  char cVar1;
  
  if ((((param_2 == 0x37) || (param_2 - 1U < 5)) || (param_2 == 0x18)) &&
     ((cVar1 = Zombie::isInState((Zombie *)this,3), cVar1 != '\0' &&
      (this[0x818] != (ZombieSkyCityBasic)0x0)))) {
    this[0x818] = (ZombieSkyCityBasic)0x0;
    PlayAttackEffect(SUB81(this,0));
    return;
  }
  return;
}


/* ZombieSkyCityBasic::onAttackEffectEnd(StandaloneEffect*) */

void ZombieSkyCityBasic::onAttackEffectEnd(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,3), cVar1 == '\0')) {
    return;
  }
  PlayAttackEffect(SUB81(param_1,0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::findAttackTargets() */

void ZombieSkyCityBasic::findAttackTargets(void)

{
  bool bVar1;
  long *in_x0;
  RtObject *this;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this = (RtObject *)(**(code **)(*in_x0 + 0x228))();
  if ((this != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this), bVar1)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityBasic::GetPooyanPrepared() */

void __thiscall ZombieSkyCityBasic::GetPooyanPrepared(ZombieSkyCityBasic *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  std::string::string(asStack_20,"shoot1");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_20);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  std::string::string(asStack_18,"shoot2");
  fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_18);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  std::string::string(asStack_10,"shoot3");
  fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if ((cVar1 != '\0') && (this[0x811] == (ZombieSkyCityBasic)0x0)) {
    this[0x811] = (ZombieSkyCityBasic)0x1;
    lVar3 = ProbabilitySet<float>::GetSize((ProbabilitySet<float> *)&DAT_06b25400);
    if (lVar3 == 0) {
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,4.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,4.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,5.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,5.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,6.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,6.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,7.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,7.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,8.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,8.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,9.0,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,9.5,1);
      ProbabilitySet<float>::AddItem((ProbabilitySet<float> *)&DAT_06b25400,10.0,1);
    }
    fVar7 = (float)ProbabilitySet<float>::PickItem((ProbabilitySet<float> *)&DAT_06b25400);
    *(float *)(this + 0x814) = fVar5 + fVar4 + fVar6 + fVar7;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityBasic::~ZombieSkyCityBasic() */

void __thiscall ZombieSkyCityBasic::~ZombieSkyCityBasic(ZombieSkyCityBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068d9a50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityBasic_068da478;
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x820));
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityBasic::~ZombieSkyCityBasic() */

void __thiscall ZombieSkyCityBasic::~ZombieSkyCityBasic(ZombieSkyCityBasic *this)

{
  ~ZombieSkyCityBasic(this + -0x10);
  return;
}


/* ZombieSkyCityBasic::~ZombieSkyCityBasic() */

void __thiscall ZombieSkyCityBasic::~ZombieSkyCityBasic(ZombieSkyCityBasic *this)

{
  ~ZombieSkyCityBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityBasic::~ZombieSkyCityBasic() */

void __thiscall ZombieSkyCityBasic::~ZombieSkyCityBasic(ZombieSkyCityBasic *this)

{
  ~ZombieSkyCityBasic(this + -0x10);
  return;
}

