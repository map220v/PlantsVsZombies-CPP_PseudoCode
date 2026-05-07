// Class: PlantNightcap


/* PlantNightcap::CancelPlantfood() */

void __thiscall PlantNightcap::CancelPlantfood(PlantNightcap *this)

{
  if (this[8] == (PlantNightcap)0x0) {
    return;
  }
  Plant::DisablePlantfoodAnimation(*(Plant **)(this + 0x10));
  return;
}


/* PlantNightcap::CanBeRangeTargeted() */

byte __thiscall PlantNightcap::CanBeRangeTargeted(PlantNightcap *this)

{
  return (byte)this[0x28] ^ 1;
}


/* PlantNightcap::onDestroy() */

void __thiscall PlantNightcap::onDestroy(PlantNightcap *this)

{
  char cVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x18) + 0x230))(*(long **)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x20));
    }
  }
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantDestroyed,*(Plant **)(this + 0x10));
  return;
}


/* PlantNightcap::BlockRailcartMovement() const */

void __thiscall PlantNightcap::BlockRailcartMovement(PlantNightcap *this)

{
  (**(code **)(*(long *)this + 0x180))();
  return;
}


/* PlantNightcap::FindTargetAndFire(PlantWeapon) */

undefined8 __thiscall PlantNightcap::FindTargetAndFire(PlantNightcap *this,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') &&
     (cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x1a0))(this);
    return 1;
  }
  return 0;
}


/* PlantNightcap::PlantNightcap() */

void __thiscall PlantNightcap::PlantNightcap(PlantNightcap *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantNightcap)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_069de1d0;
  return;
}


/* PlantNightcap::StaticNew() */

PlantNightcap * PlantNightcap::StaticNew(void)

{
  PlantNightcap *this;
  
  this = ::operator_new(0x40);
  PlantNightcap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::StaticClassInit() */

void PlantNightcap::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantNightcap");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3f274,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightcap::StaticGetClass() */

long * PlantNightcap::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNightcap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNightcap::GetClass() const */

long * PlantNightcap::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNightcap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::WhetherCanBePulled(Plant const*, int) */

void PlantNightcap::WhetherCanBePulled(Plant *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  Plant *this;
  int iVar6;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar6 = *(int *)(param_1 + 0x114);
  local_8 = ___stack_chk_guard;
  if (iVar6 < *(int *)(this_00 + 0xf8) + -1) {
    iVar1 = *(int *)(param_1 + 0x110);
    iVar4 = Board::GetGridSquareType(this_00,iVar6,iVar1);
    uVar5 = Board::GetGridSquareType(this_00,iVar6 + 1,iVar1);
    if (((iVar4 != 6) && (uVar5 != 1)) && ((uVar5 & 0xfffffff7) != 4)) {
LAB_04e3f6e4:
      bVar3 = 0;
      goto LAB_04e3f6e8;
    }
  }
  iVar6 = iVar6 + 1;
  if (iVar6 <= param_2) {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x110);
      std::string::string(asStack_10,"");
      this = (Plant *)Board::GetPlantAt(this_00,iVar6,iVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((this != (Plant *)0x0) && (cVar2 = Plant::IsIgnoreControlAndDmg(this), cVar2 != '\0'))
      goto LAB_04e3f6e4;
      iVar6 = iVar6 + 1;
      if (param_2 < iVar6) break;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
    }
  }
  bVar3 = Plant::IsIgnoreControlAndDmg(param_1);
  bVar3 = bVar3 ^ 1;
LAB_04e3f6e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::WhetherCanBePushed(Plant const*, int) */

void PlantNightcap::WhetherCanBePushed(Plant *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  Plant *this;
  undefined8 uVar3;
  int iVar4;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = param_2 + -1;
  if (-1 < iVar4) {
    do {
      iVar1 = *(int *)(param_1 + 0x110);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      this = (Plant *)Board::GetPlantAt(this_00,iVar4,iVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((this != (Plant *)0x0) && (cVar2 = Plant::IsIgnoreControlAndDmg(this), cVar2 != '\0')) {
        uVar3 = 0;
        goto LAB_04e3f834;
      }
    } while ((iVar4 != param_2 + -2) && (iVar4 = iVar4 + -1, iVar4 != -1));
  }
  uVar3 = 1;
LAB_04e3f834:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* PlantNightcap::~PlantNightcap() */

void __thiscall PlantNightcap::~PlantNightcap(PlantNightcap *this)

{
  *(undefined ***)this = &PTR_GetClass_069de1d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantNightcap::~PlantNightcap() */

void __thiscall PlantNightcap::~PlantNightcap(PlantNightcap *this)

{
  ~PlantNightcap(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::getDamageInfo(PlantWeapon) */

void PlantNightcap::getDamageInfo(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_04e3e654(*(undefined8 *)(lVar1 + 0x70),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_2 + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantNightcap::CanTargetZombie(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  Zombie *this;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar3 = FUN_04e3e57c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
      cVar1 = RealObject::IsOnTeam(uVar5,uVar3);
      if (cVar1 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = FUN_04e3fd40(*(undefined4 *)(lVar6 + 0xcc));
        if (cVar1 == '\0') {
          this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::IsIgnoringAllDamage(this);
          if (cVar1 == '\0') {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            pcVar7 = *(code **)(*plVar4 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
            uVar2 = (*pcVar7)(plVar4,aRStack_10,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            goto LAB_04e3fd94;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_04e3fd94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::ApplyPlantfood() */

void __thiscall PlantNightcap::ApplyPlantfood(PlantNightcap *this)

{
  RealObject *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Plant_Nightcap_Plantfood");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightcap::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantNightcap::onAnimStoppedCallback(PlantNightcap *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = std::operator==(param_1,"plant");
  if (bVar1) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::updateNightEffect() */

void __thiscall PlantNightcap::updateNightEffect(PlantNightcap *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  Effect_AngerFlame *this_00;
  float fVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04e3ff80(this[0x28],this + 0x34);
  if (cVar1 != '\0') {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    fVar4 = (float)PopAnimRig::GetCurrentFrameInAnimation(pPVar3);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PopAnimRig::CalcPlayingAnimLabelName();
    std::operator+(asStack_40,"_ready");
    std::string::~string(asStack_40);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar1 = PopAnimRig::DoesAnimationLabelExist(pPVar3,asStack_48);
    if (cVar1 != '\0') {
      this_00 = (Effect_AngerFlame *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
      if (iVar2 == 1) {
        pPVar3 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar3,asStack_48,0,aDStack_38);
      }
      else {
        pPVar3 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar3,asStack_48,0,aDStack_38);
      }
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetCurrentFrameInAnimation(pPVar3,fVar4 + 1.0);
    }
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightcap::UpdateActions() */

void __thiscall PlantNightcap::UpdateActions(PlantNightcap *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  long *plVar2;
  float fVar3;
  
  if (*(float *)(this + 0x38) <= 0.0) {
    if (this[0x28] != (PlantNightcap)0x0) {
      this[0x28] = (PlantNightcap)0x0;
      this_00 = (Effect_AngerFlame *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
      if (iVar1 == 1) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar2 + 0x118))();
      }
    }
    updateNightEffect(this);
    return;
  }
  fVar3 = (float)PVZ_Dt();
  *(float *)(this + 0x38) = *(float *)(this + 0x38) - fVar3;
  updateNightEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::createProjectile(std::string const&, int, Sexy::SexyVector3 const&) */

void __thiscall
PlantNightcap::createProjectile
          (PlantNightcap *this,string *param_1,int param_2,SexyVector3 *param_3)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"POPANIM_EFFECTS_NIGHTCAP_PROJECTILE");
  GetPAMByName(asStack_18);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  uVar1 = Board::MakeRenderOrder(0x64960,param_2,0);
  FUN_04e3e580(this_00 + 0x1c,uVar1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,param_3,-1);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::pushZombieAway(Zombie*) */

void __thiscall PlantNightcap::pushZombieAway(PlantNightcap *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ZombieTosserSubSystem *pZVar4;
  float fVar5;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar5 = *pfVar3;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((200.0 < fVar5) && (fVar5 <= (float)(iVar1 * iVar2 + 200))) {
    BoardConstants::GRIDSQUARE_WIDTH();
    pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombieHorizontal
              ((ZombieTosserSubSystem *)(float)iVar1,0x41200000,0x3f000000,pZVar4,param_1,aRStack_50
               ,1);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::GetPlantAttackGridRect(PlantWeapon) */

void PlantNightcap::GetPlantAttackGridRect(Insets *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_04e3e654(*(undefined8 *)(lVar1 + 0x70),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (param_3 == 0) {
    lVar2 = FUN_04e40ca0(*(undefined8 *)(param_2 + 0x10));
    Sexy::Insets::Insets
              (param_1,*(int *)(*(long *)(param_2 + 0x10) + 0x114) + *(int *)(lVar1 + 0x58),
               *(int *)(*(long *)(param_2 + 0x10) + 0x110) + *(int *)(lVar1 + 0x5c),
               (int)((float)*(int *)(param_2 + 0x2c) + *(float *)(lVar2 + 700)),
               *(int *)(lVar1 + 100));
  }
  else {
    PlantFramework::GetPlantAttackGridRect(param_1,param_2,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantNightcap::GetPlantAttackRect(PlantWeapon) */

int * PlantNightcap::GetPlantAttackRect(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    lVar3 = FUN_04e40ca0(*(undefined8 *)(param_2 + 0x10));
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = *(int *)(param_2 + 0x2c);
    fVar4 = *(float *)(lVar3 + 700);
    *param_1 = *param_1 + iVar1;
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    param_1[2] = (int)((float)iVar1 * ((float)iVar2 + fVar4));
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *param_1 = (int)((float)*param_1 - (float)iVar2 * 0.5);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::setNightMode() */

void __thiscall PlantNightcap::setNightMode(PlantNightcap *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined8 uVar6;
  Effect_PopAnim *this_00;
  PopAnim *pPVar7;
  SexyVector3 *this_01;
  Effect_AngerFlame *this_02;
  RealObject *this_03;
  float fVar8;
  undefined4 uVar9;
  string asStack_60 [8];
  string asStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x28] = (PlantNightcap)0x1;
  lVar4 = FUN_04e40ca0(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar4 + 0x2c8);
  fVar8 = (float)PVZ_T();
  *(float *)(this + 0x34) = *(float *)(this + 0x30) + *(float *)(this + 0x38) + fVar8;
  pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  fVar8 = (float)PopAnimRig::GetCurrentFrameInAnimation(pPVar5);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::CalcPlayingAnimLabelName();
  uVar6 = FUN_054744a4(asStack_60,"_ready",0xffffffffffffffff);
  FUN_05475ffc(asStack_58,asStack_60,0,uVar6);
  std::operator+(asStack_58,"_stealth");
  FUN_05474278(asStack_60,(string *)&local_48);
  std::string::~string((string *)&local_48);
  std::string::~string(asStack_58);
  pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  cVar1 = PopAnimRig::DoesAnimationLabelExist(pPVar5,asStack_60);
  if (cVar1 != '\0') {
    this_02 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar3 = Effect_AngerFlame::GetFlameCol(this_02);
    if (iVar3 == 1) {
      pPVar5 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar5,asStack_60,0,aDStack_38);
    }
    else {
      pPVar5 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar5,asStack_60,0,aDStack_38);
    }
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetCurrentFrameInAnimation(pPVar5,fVar8 + 1.0);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_58,"POPANIM_EFFECTS_NIGHTCAP_TRIGGER");
  GetPAMByName(asStack_58);
  pPVar7 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  std::string::~string(asStack_58);
  nop();
  uVar2 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_04e3e580(this_00 + 0x1c,uVar2);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  uVar2 = 0xc2dc0000;
  uVar9 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_58,-90.0,-110.0,0.0);
  local_48 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_58);
  local_44 = uVar2;
  local_40 = uVar9;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_48,-1);
  std::string::string((string *)&local_48,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_48,0);
  std::string::~string((string *)&local_48);
  nop();
  this_03 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_48,"Plant_Nightcap_Stealth");
  RealObject::PlayPositionalSound(this_03,(string *)&local_48,0.0);
  std::string::~string((string *)&local_48);
  nop();
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightcap::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantNightcap::TakeSmashAttack(PlantNightcap *param_1)

{
  float fVar1;
  
  if (param_1[0x28] != (PlantNightcap)0x0) {
    return;
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(param_1 + 0x34)) {
    Plant::KillPlant(*(Plant **)(param_1 + 0x10),0,0,1);
    return;
  }
  setNightMode(param_1);
  return;
}


/* PlantNightcap::onApplyCondition(PlantConditions) */

void __thiscall PlantNightcap::onApplyCondition(PlantNightcap *this,uint param_2)

{
  char cVar1;
  
  if ((((param_2 - 1 < 2) || (param_2 - 6 < 5)) || (param_2 - 0x23 < 3)) ||
     ((((param_2 & 0xfffffffd) == 0x10 || (param_2 - 0x27 < 2)) ||
      ((param_2 == 0x17 || (param_2 == 0xe)))))) {
    cVar1 = FUN_04e3ff80(this[0x28],this + 0x34);
    if (cVar1 != '\0') {
      setNightMode(this);
    }
    if (this[0x28] != (PlantNightcap)0x0) {
      Plant::EndCondition(*(Plant **)(this + 0x10),param_2);
      return;
    }
  }
  return;
}


/* PlantNightcap::CanBeConvertedByCondition() */

undefined8 __thiscall PlantNightcap::CanBeConvertedByCondition(PlantNightcap *this)

{
  float fVar1;
  
  if (this[0x28] != (PlantNightcap)0x0) {
    return 0;
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x34)) {
    return 1;
  }
  setNightMode(this);
  return 0;
}


/* PlantNightcap::IsIgnoreControlAndDmg() */

ulong __thiscall PlantNightcap::IsIgnoreControlAndDmg(PlantNightcap *this)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = FUN_04e3ff80(this[0x28],this + 0x34);
  if (bVar1 == 0) {
    uVar2 = FUN_04e3e644(this[0x28]);
    return uVar2;
  }
  setNightMode(this);
  return (ulong)bVar1;
}


/* PlantNightcap::onSleeped(bool) */

void __thiscall PlantNightcap::onSleeped(PlantNightcap *this,bool param_1)

{
  char cVar1;
  
  if (param_1) {
    cVar1 = FUN_04e3ff80(this[0x28],this + 0x34);
    if (cVar1 != '\0') {
      setNightMode(this);
    }
    if (this[0x28] != (PlantNightcap)0x0) {
      Plant::SetIsSleepping(*(Plant **)(this + 0x10),false,-1.0);
      return;
    }
  }
  return;
}


/* PlantNightcap::TakeDamage(DamageInfo const&) */

void PlantNightcap::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  Zombie *this;
  long lVar2;
  string *psVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar4;
  
  if (*(RtObject **)in_x1 != (RtObject *)0x0) {
    this = Sexy::RtObject::Cast<Zombie>(*(RtObject **)in_x1);
    lVar2 = operator&(*(undefined8 *)(in_x1 + 0x10),2);
    if ((lVar2 != 0) && (this != (Zombie *)0x0)) {
      psVar3 = (string *)Zombie::GetTypeName(this);
      bVar1 = std::operator==(psVar3,"dark_cavalry");
      if (bVar1) goto LAB_04e41730;
    }
  }
  if (param_1[0x28] == (DamageInfo)0x0) {
    fVar4 = (float)PVZ_T();
    if (fVar4 <= *(float *)(param_1 + 0x34)) {
LAB_04e41730:
      DamageInfo::DamageInfo(in_x8,in_x1);
      return;
    }
    setNightMode((PlantNightcap *)param_1);
  }
  DamageInfo::DamageInfo(in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::findTargets(PlantWeapon, std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall
PlantNightcap::findTargets
          (PlantNightcap *this,int param_2,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  RtObject *local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,param_2);
  iVar7 = *(int *)(*(long *)(this + 0x10) + 0x110);
  uVar3 = operator|(4,2);
  if (param_2 == 1) {
    iVar8 = iVar7 + 1;
    iVar7 = iVar7 + -1;
  }
  else {
    iVar8 = iVar7;
    if (param_2 == 2) {
      uVar3 = 2;
    }
  }
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,auStack_30,iVar7,iVar8);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    local_58 = (RtObject *)*puVar4;
    pZVar5 = Sexy::RtObject::Cast<Zombie>(local_58);
    if (pZVar5 != (Zombie *)0x0) {
      pcVar9 = *(code **)(*(long *)this + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar1 = (*pcVar9)(this,aRStack_38,param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar1 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_3,(BoardEntity **)&local_58);
      }
    }
    pGVar6 = Sexy::RtObject::Cast<GridItem>(local_58);
    if ((pGVar6 != (GridItem *)0x0) &&
       (cVar1 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar1 != '\0')) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                (param_3,(BoardEntity **)&local_58);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::RepelledZombies() */

void __thiscall PlantNightcap::RepelledZombies(PlantNightcap *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  findTargets(this,1,avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (((((RtObject *)*puVar4 != (RtObject *)0x0) &&
         (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4), this_00 != (Zombie *)0x0)) &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x380))(this_00,0), cVar2 != '\0')) &&
       ((iVar3 = Zombie::GetSizeType(this_00), iVar3 < 2 &&
        (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))) {
      pushZombieAway(this,this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::damageTargets(PlantWeapon) */

void __thiscall PlantNightcap::damageTargets(PlantNightcap *this,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long *extraout_x0;
  undefined8 *puVar4;
  undefined8 uVar5;
  RtObject *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04e40ca0(*(undefined8 *)(this + 0x10));
  getDamageInfo(aDStack_68,this,param_2);
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar3 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x198))(this,param_2);
  }
  uVar5 = 0;
  operator|=(auStack_58,uVar3);
  operator|=(auStack_58,0x800000000000);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  findTargets(this,param_2,avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = (RtObject *)*puVar4;
    if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<Zombie>(this_00), !bVar1)) {
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    }
    else {
      nop();
      fVar8 = *(float *)(lVar2 + 0x2c0);
      fVar6 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
      fVar7 = (float)FUN_04e3e634(*(undefined4 *)(*(long *)(this + 0x10) + 0x3bc));
      (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aDStack_68);
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(lVar2 + 0x2c4),0,extraout_x0,0x30,1);
      Zombie::SetConditionTracker(fVar6 * fVar7 * fVar8,extraout_x0,0x30);
    }
    uVar5 = 1;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantNightcap::poisonDamage() */

void __thiscall PlantNightcap::poisonDamage(PlantNightcap *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x3c)) {
    return;
  }
  cVar1 = damageTargets(this,2);
  if ((cVar1 != '\0') && (cVar1 = FUN_04e3ff80(this[0x28],this + 0x34), cVar1 != '\0')) {
    setNightMode(this);
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x3c) = fVar2 + 0.5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::pfDamageTargets(bool, bool) */

void __thiscall PlantNightcap::pfDamageTargets(PlantNightcap *this,bool param_1,bool param_2)

{
  bool bVar1;
  long *extraout_x0;
  undefined8 *puVar2;
  long lVar3;
  RtObject *this_00;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  findTargets(this,1,avStack_80);
  uVar4 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)0x0,(undefined4)local_88,local_88._4_4_,aDStack_68,0x800000000000,uVar4,
             (Point *)&local_90,0);
  if (param_1) {
    local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    local_60 = local_60 * 400.0;
  }
  else {
    local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    local_60 = local_60 * 333.33334;
  }
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = (RtObject *)*puVar2;
    if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<Zombie>(this_00), !bVar1)) {
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    }
    else {
      nop();
      (**(code **)(*extraout_x0 + 0x110))();
      if (param_2) {
        lVar3 = FUN_04e40ca0(*(undefined8 *)(this + 0x10));
        fVar7 = *(float *)(lVar3 + 0x2c0);
        fVar5 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
        fVar6 = (float)FUN_04e3e634(*(undefined4 *)(*(long *)(this + 0x10) + 0x3bc));
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x2c4),0,extraout_x0,0x30,1);
        Zombie::SetConditionTracker(fVar5 * fVar6 * fVar7,extraout_x0,0x30);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantNightcap::Fire(PlantNightcap *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4
                   )

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  PopAnimRig *pPVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  Plant *pPVar10;
  RealObject *this_00;
  UIEasyButtonWidget *this_01;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  string asStack_50 [8];
  Vec3 aVStack_48 [16];
  string asStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar5 = FUN_04e3e654(*(undefined8 *)(lVar5 + 0x70),param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3
            (aVStack_48,*(float *)(lVar5 + 0x68) + *pfVar6,*(float *)(lVar5 + 0x6c) + pfVar6[1],0.0)
  ;
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_18,"Plant_Nightcap_Attack");
    RealObject::PlayPositionalSound(this_00,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_18;
    std::string::string(asStack_50,"attack");
    nop();
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar3 = FUN_04e3e63c(this_01);
    if (iVar3 == 2) {
      std::string::append(asStack_50,"attack02",(size_t)pRVar9);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    }
    else if (2 < iVar3) {
      std::string::append(asStack_50,"attack03",(size_t)pRVar9);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    }
    pPVar7 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
    std::string::string(asStack_38,"attack_lv5");
    cVar2 = PopAnimRig::IsAnimStringActive(pPVar7,asStack_38);
    if (cVar2 == '\0') {
      pPVar7 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_28,"attack_lv5_ready");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar7,asStack_28);
      if (cVar2 == '\0') {
        pPVar7 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string((string *)&local_18,"attack_lv5_stealth");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar7,(string *)&local_18);
        std::string::~string((string *)&local_18);
        nop();
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_38);
        nop();
        if (cVar2 == '\0') {
          uVar8 = 0;
          uVar12 = 0xc2a00000;
          uVar14 = 0;
          iVar3 = *(int *)(*(long *)(this + 0x10) + 0x110);
          EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-90.0,-80.0,0.0);
          local_18 = Sexy::SexyVector3::operator+
                               ((SexyVector3 *)aVStack_48,(SexyVector3 *)asStack_28);
          local_14 = uVar12;
          local_10 = uVar14;
          createProjectile(this,asStack_50,iVar3,(SexyVector3 *)&local_18);
          damageTargets(this,param_4);
          std::string::~string(asStack_50);
          goto LAB_04e42974;
        }
      }
      else {
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_38);
        nop();
      }
    }
    else {
      std::string::~string(asStack_38);
      nop();
    }
    pPVar10 = *(Plant **)(this + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    uVar8 = Plant::Fire(pPVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_50);
  }
  else {
    pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_18;
    std::string::string(asStack_50,"pf_attack");
    nop();
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') {
      std::string::append(asStack_50,"pf02_attack",(size_t)pRVar9);
    }
    uVar14 = 0xc2a00000;
    uVar15 = 0;
    iVar3 = *(int *)(*(long *)(this + 0x10) + 0x110);
    uVar12 = uVar14;
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-90.0,-80.0,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_48,(SexyVector3 *)asStack_28);
    local_14 = uVar12;
    local_10 = uVar15;
    createProjectile(this,asStack_50,iVar3,(SexyVector3 *)&local_18);
    iVar1 = *(int *)(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(this + 0x10) + 0x110);
    iVar3 = iVar1 + 1;
    iVar1 = iVar1 + -1;
    if (iVar3 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar13 = *(float *)(lVar5 + 0x6c);
      fVar11 = *(float *)(lVar5 + 0x68);
      fVar16 = *pfVar6;
      fVar17 = pfVar6[1];
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_38,fVar11 + fVar16,fVar13 + fVar17 + (float)iVar4,0.0);
      uVar15 = 0;
      uVar12 = uVar14;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-90.0,-80.0,0.0);
      local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_38,(SexyVector3 *)asStack_28);
      local_14 = uVar12;
      local_10 = uVar15;
      createProjectile(this,asStack_50,iVar3,(SexyVector3 *)&local_18);
    }
    if (-1 < iVar1) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar13 = *(float *)(lVar5 + 0x6c);
      fVar16 = *pfVar6;
      fVar11 = *(float *)(lVar5 + 0x68);
      fVar17 = pfVar6[1];
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_38,fVar11 + fVar16,(fVar13 + fVar17) - (float)iVar3,0.0);
      uVar12 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-90.0,-80.0,0.0);
      local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_38,(SexyVector3 *)asStack_28);
      local_14 = uVar14;
      local_10 = uVar12;
      createProjectile(this,asStack_50,iVar1,(SexyVector3 *)&local_18);
    }
    uVar8 = 0;
    pfDamageTargets(this,false,false);
    std::string::~string(asStack_50);
  }
LAB_04e42974:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* PlantNightcap::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantNightcap::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action_2");
  if (bVar1) {
    pfDamageTargets((PlantNightcap *)param_1,false,false);
    return 0;
  }
  bVar1 = std::operator==(param_2,"use_action_3");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"use_action_4");
    if (bVar1) {
      pfDamageTargets((PlantNightcap *)param_1,true,false);
    }
    return 0;
  }
  pfDamageTargets((PlantNightcap *)param_1,false,true);
  RepelledZombies((PlantNightcap *)param_1);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::onPlantPlanted() */

void __thiscall PlantNightcap::onPlantPlanted(PlantNightcap *this)

{
  char cVar1;
  AttachedEffect *pAVar2;
  PlantAnimRig_Nightcap *extraout_x0;
  RealObject *this_00;
  RtMixedPtr aRStack_c0 [8];
  RtId aRStack_b8 [8];
  string asStack_b0 [8];
  Vec3 aVStack_a8 [24];
  AttachedEffect aAStack_90 [64];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_a8,0.0,-30.0,0.0);
  pAVar2 = (AttachedEffect *)
           Plant::AddAttachedEffect
                     (*(Plant **)(this + 0x10),"nightcap_poison","POPANIM_EFFECTS_NIGHTCAP_POOL",
                      "plant",(SexyVector3 *)aVStack_a8,
                      *(int *)(*(Plant **)(this + 0x10) + 0x110) + -0x1b53,false);
  AttachedEffect::AttachedEffect(aAStack_90,pAVar2);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aVStack_a8);
  std::string::string(asStack_b0,"plant");
  AnimationSequence::AddSingleAnimation(aVStack_a8,asStack_b0,0);
  std::string::~string(asStack_b0);
  nop();
  std::string::string(asStack_b0,"idle");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aVStack_a8,asStack_b0,0);
  std::string::~string(asStack_b0);
  nop();
  AttachedEffect::PlayAnimSequence(aAStack_90,(AnimationSequence *)aVStack_a8);
  this_00 = *(RealObject **)(this + 0x10);
  if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState((Plant *)this_00);
  }
  else {
    cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
    this_00 = *(RealObject **)(this + 0x10);
  }
  if (cVar1 == '\0') {
    UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c0);
    std::string::string(asStack_b0,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_b8,
               asStack_b0);
    PlantAnimRig_Nightcap::PlayLandingAnimation(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_b0);
    nop();
    Sexy::RtId::~RtId(aRStack_b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
    this_00 = *(RealObject **)(this + 0x10);
  }
  std::string::string(asStack_b0,"Plant_Nightcap_Land");
  RealObject::PlayPositionalSound(this_00,asStack_b0,0.0);
  std::string::~string(asStack_b0);
  nop();
  AnimationSequence::~AnimationSequence((AnimationSequence *)aVStack_a8);
  AttachedEffect::~AttachedEffect(aAStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightcap::Initialize() */

void __thiscall PlantNightcap::Initialize(PlantNightcap *this)

{
  int iVar1;
  long lVar2;
  NightPoisonSubSystem *pNVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_04e40ca0(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar2 + 0x2cc);
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar4;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar4;
  iVar1 = FUN_04e3e63c(*(undefined8 *)(this + 0x10));
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x2c) = 1;
    *(float *)(this + 0x30) = *(float *)(this + 0x30) - 2.5;
  }
  else if (2 < iVar1) {
    *(undefined4 *)(this + 0x2c) = 2;
    *(float *)(this + 0x30) = *(float *)(this + 0x30) - 5.0;
  }
  pNVar3 = Board::GetGameSubSystem<NightPoisonSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  NightPoisonSubSystem::AddPlant(pNVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  onPlantPlanted(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightcap::OverrideProjectileCollision(Projectile*) */

ulong __thiscall PlantNightcap::OverrideProjectileCollision(PlantNightcap *this,Projectile *param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar1 = (uint)(param_1 != (Projectile *)0x0 & (byte)this[0x28]);
  if (uVar1 != 0) {
    bVar2 = Sexy::RtObject::IsA<FishHookProjectile>((RtObject *)param_1);
    if (!bVar2) {
      return (ulong)uVar1;
    }
  }
  uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
  return uVar3;
}

