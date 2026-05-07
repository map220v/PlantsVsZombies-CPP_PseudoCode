// Class: PlantSpringbean


/* PlantSpringbean::GetShadowScaling() */

undefined4 PlantSpringbean::GetShadowScaling(void)

{
  return 0x3f19999a;
}


/* PlantSpringbean::GetEntityHeight() const */

undefined4 __thiscall PlantSpringbean::GetEntityHeight(PlantSpringbean *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 2) {
    uVar1 = 1;
  }
  return uVar1;
}


/* PlantSpringbean::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantSpringbean::TakeSmashAttack(long param_1)

{
  char cVar1;
  Plant *pPVar2;
  
  pPVar2 = *(Plant **)(param_1 + 0x10);
  cVar1 = FUN_040691cc(pPVar2[400]);
  if ((cVar1 == '\0') && (*(int *)(pPVar2 + 200) != 0x10)) {
    Plant::KillPlant(pPVar2,0,0,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::GetShadowOffset() */

void PlantSpringbean::GetShadowOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,-5.0,5.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::StaticClassInit() */

void PlantSpringbean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSpringbean");
    (*pcVar2)(plVar1,asStack_10,FUN_0406a788,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpringbean::StaticGetClass() */

long * PlantSpringbean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpringbean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpringbean::GetClass() const */

long * PlantSpringbean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpringbean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpringbean::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

undefined8
PlantSpringbean::CanTargetZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x330))();
  if (cVar1 == '\0') {
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsControlled(pZVar3);
    if (cVar1 == '\0') {
      pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar4 = Zombie::CanBeLaunchedByPlants(pZVar3);
      return uVar4;
    }
  }
  return 0;
}


/* PlantSpringbean::isAnimDone() */

void __thiscall PlantSpringbean::isAnimDone(PlantSpringbean *this)

{
  undefined8 uVar1;
  
  uVar1 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::IsAnimFinished(uVar1,*(undefined4 *)(this + 0x28));
  return;
}


/* PlantSpringbean::PlantSpringbean() */

void __thiscall PlantSpringbean::PlantSpringbean(PlantSpringbean *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c5830;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantSpringbean::StaticNew() */

PlantSpringbean * PlantSpringbean::StaticNew(void)

{
  PlantSpringbean *this;
  
  this = ::operator_new(0x48);
  PlantSpringbean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::setState(unsigned int) */

void __thiscall PlantSpringbean::setState(PlantSpringbean *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  char *__s;
  long lVar4;
  long lVar5;
  RealObject *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(lVar4 + 200) == param_1) goto switchD_0406988c_default;
  *(uint *)(lVar4 + 200) = param_1;
  switch(param_1) {
  case 10:
    lVar4 = FUN_040697e4(lVar4);
    FUN_0406923c(lVar4 + 0x218);
    plVar2 = (long *)FUN_040697e4(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    break;
  case 0xb:
    pPVar3 = (PopAnimRig *)FUN_040697e4(lVar4);
    std::string::string(asStack_50,"attack");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar3,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar1;
    std::string::~string(asStack_50);
    nop();
    lVar4 = FUN_040697e4(*(undefined8 *)(this + 0x10));
    FUN_04069230(lVar4 + 0x218);
    this_00 = *(RealObject **)(this + 0x10);
    __s = "Play_SpringBean_Select";
    goto LAB_04069a20;
  case 0xc:
    plVar2 = (long *)FUN_040697e4(lVar4);
    pcVar6 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_58,"idle3");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar6)(plVar2,asStack_58,1,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    std::string::~string(asStack_58);
    nop();
    lVar4 = FUN_040697e4(*(undefined8 *)(this + 0x10));
    FUN_04069230(lVar4 + 0x218);
    break;
  case 0xd:
    pPVar3 = (PopAnimRig *)FUN_040697e4(lVar4);
    std::string::string(asStack_50,"attack2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar3,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar1;
    std::string::~string(asStack_50);
    nop();
    lVar4 = FUN_040697e4(*(undefined8 *)(this + 0x10));
    FUN_04069230(lVar4 + 0x218);
    this_00 = *(RealObject **)(this + 0x10);
    __s = "Play_SpringBean_Activate";
    goto LAB_04069a20;
  case 0xe:
    plVar2 = (long *)FUN_040697e4(lVar4);
    pcVar6 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_58,"recover");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar6)(plVar2,asStack_58,1,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    std::string::~string(asStack_58);
    nop();
    fVar7 = (float)PVZ_T();
    lVar4 = FUN_04069698(*(undefined8 *)(this + 0x10));
    lVar5 = *(long *)(this + 0x10);
    fVar8 = (float)FUN_04069220(*(undefined4 *)(lVar5 + 0x420));
    *(float *)(lVar5 + 0x128) = fVar7 + *(float *)(lVar4 + 0x2cc) * fVar8;
    break;
  case 0xf:
    pPVar3 = (PopAnimRig *)FUN_040697e4(lVar4);
    std::string::string(asStack_50,"recover2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar3,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar1;
    std::string::~string(asStack_50);
    nop();
    break;
  case 0x10:
    pPVar3 = (PopAnimRig *)FUN_040697e4(lVar4);
    std::string::string(asStack_50,"plantfood");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar3,asStack_50,0,aDStack_38);
    *(undefined4 *)(this + 0x28) = uVar1;
    std::string::~string(asStack_50);
    nop();
    this_00 = *(RealObject **)(this + 0x10);
    __s = "Play_SpringBean_PF";
LAB_04069a20:
    std::string::string(asStack_50,__s);
    RealObject::PlayPositionalSound(this_00,asStack_50,0.0);
    std::string::~string(asStack_50);
    nop();
  }
switchD_0406988c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSpringbean::ApplyPlantfood() */

void __thiscall PlantSpringbean::ApplyPlantfood(PlantSpringbean *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0x10);
  return;
}


/* PlantSpringbean::CancelPlantfood() */

void __thiscall PlantSpringbean::CancelPlantfood(PlantSpringbean *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* PlantSpringbean::Idle() */

void __thiscall PlantSpringbean::Idle(PlantSpringbean *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::isZombieClose() */

void __thiscall PlantSpringbean::isZombieClose(PlantSpringbean *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  float *pfVar6;
  RtObject *this_00;
  Zombie *this_01;
  Zombie *this_02;
  long *extraout_x0;
  long *extraout_x0_00;
  RtObject *this_03;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  lVar5 = FUN_04069698(*(long *)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(lVar5 + 0x2d4));
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_30 = (int)((float)local_30 + *pfVar6);
  local_2c = (int)((float)local_2c + pfVar6[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)&local_30,uVar1,uVar1);
  uVar2 = local_20;
  lVar5 = FUN_04069258(local_20,local_18);
  if (lVar5 == 0) goto LAB_04069d34;
  if (lVar5 == 1) {
    FUN_04069264(uVar2,0);
    nop();
    bVar3 = Sexy::RtObject::IsA<Zomboss>(this_00);
    if (!bVar3) {
      FUN_04069264(local_20,0);
      nop();
      cVar4 = Zombie::HasFogImmune(this_01);
      if (cVar4 == '\0') {
        FUN_04069264(local_20,0);
        nop();
        cVar4 = Zombie::IsBerserk(this_02);
        if (cVar4 == '\0') {
          FUN_04069264(local_20,0);
          nop();
          cVar4 = (**(code **)(*extraout_x0 + 0x4d8))();
          if (cVar4 == '\0') {
            FUN_04069264(local_20,0);
            nop();
            cVar4 = (**(code **)(*extraout_x0_00 + 0x508))();
            if (cVar4 == '\0') {
              FUN_04069264(local_20,0);
              nop();
              bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>(this_03);
              if (bVar3) {
                uVar7 = 0;
                goto LAB_04069d34;
              }
              goto LAB_04069d30;
            }
          }
        }
      }
    }
    uVar7 = 0;
  }
  else {
LAB_04069d30:
    uVar7 = 1;
  }
LAB_04069d34:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* PlantSpringbean::Initialize() */

void __thiscall PlantSpringbean::Initialize(PlantSpringbean *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::UpdatePlantfood() */

void __thiscall PlantSpringbean::UpdatePlantfood(PlantSpringbean *this)

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *this_00;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar8) {
      uVar9 = PVZ_EOT();
      uVar6 = 0;
      *(undefined4 *)(this + 0x2c) = uVar9;
      lVar2 = FUN_04069698(*(undefined8 *)(this + 0x10));
      uVar7 = *(undefined8 *)(this + 0x30);
      fVar8 = *(float *)(lVar2 + 0x2d0);
      lVar2 = FUN_0406926c(uVar7,*(undefined8 *)(this + 0x38));
      if (lVar2 != 0) {
        do {
          pRVar3 = (RtWeakPtrBase *)FUN_04069278(uVar7,uVar6);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
          if (cVar1 == '\0') {
LAB_04069f98:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          }
          else {
            this_00 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            cVar1 = Zombie::IsFlying(this_00);
            if (cVar1 != '\0') goto LAB_04069f98;
            plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            cVar1 = (**(code **)(*plVar5 + 0x328))();
            if (cVar1 != '\0') goto LAB_04069f98;
            uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Zombie::ApplyCondition((Zombie *)(float)(int)fVar8,0,uVar7,2,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          }
          uVar6 = uVar6 + 1;
          uVar7 = *(undefined8 *)(this + 0x30);
          uVar4 = FUN_0406926c(uVar7,*(undefined8 *)(this + 0x38));
        } while (uVar6 < uVar4);
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x30));
    }
    (**(code **)(*(long *)this + 0x180))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpringbean::~PlantSpringbean() */

void __thiscall PlantSpringbean::~PlantSpringbean(PlantSpringbean *this)

{
  *(undefined ***)this = &PTR_GetClass_067c5830;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSpringbean::~PlantSpringbean() */

void __thiscall PlantSpringbean::~PlantSpringbean(PlantSpringbean *this)

{
  ~PlantSpringbean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::tossZombie(Zombie*) */

void __thiscall PlantSpringbean::tossZombie(PlantSpringbean *this,Zombie *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ZombieTosserSubSystem *pZVar6;
  uint uVar7;
  Point *extraout_x1;
  TPoint *pTVar8;
  Board *this_02;
  ZombieTosserSubSystem *pZVar13;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TPoint<int> aTStack_e0 [8];
  int local_d8 [2];
  int local_d0;
  int local_cc;
  float local_c8 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetCurrentTitleStatus();
  TitleStatus::~TitleStatus(aTStack_70);
  if (local_58 == '\0') {
    lVar4 = FUN_04069698(*(undefined8 *)(this + 0x10));
    uVar9 = *(undefined4 *)(lVar4 + 0x2c0);
    lVar4 = FUN_04069698(*(undefined8 *)(this + 0x10));
    fVar10 = *(float *)(lVar4 + 0x2c8);
    lVar4 = FUN_04069698(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
    pZVar13._0_4_ = *(ZombieTosserSubSystem **)(lVar4 + 0x2c4);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    bVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
    if (bVar1 < (this_01 != (PlayerInfo *)0x0)) {
      Plant::GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
      iVar3 = PlayerInfo::GetEquipAvatarID(this_01,(string *)(lVar4 + 8));
      if (iVar3 == -1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70)
        ;
      }
      else {
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70)
        ;
        if (iVar3 != 0x10) {
          fVar10 = fVar10 + fVar10;
        }
      }
    }
    EATextSquish::Vec3::Vec3((Vec3 *)local_c8,fVar10 + fVar12,fVar11,0.0);
    cVar2 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
    if (cVar2 != '\0') {
      uVar7 = (uint)DAT_06aea2c8 & 1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      if (((DAT_06aea2c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06aea2c8), iVar3 != 0)) {
        Sexy::Point::Point((Point *)&DAT_06aea308,uVar7,-1);
        Sexy::Point::Point((Point *)&DAT_06aea310,uVar7,1);
        Sexy::Point::Point((Point *)&DAT_06aea318,1,-1);
        Sexy::Point::Point((Point *)&DAT_06aea320,1,1);
        __cxa_guard_release(&DAT_06aea2c8);
      }
      iVar3 = 0;
      pTVar8 = (TPoint *)&DAT_06aea308;
      BoardTransforms::BoardSpaceToGrid((BoardTransforms *)&DAT_06aea000,fVar12,fVar11);
      do {
        Sexy::TPoint<int>::operator+(aTStack_e0,pTVar8);
        Sexy::Point::Point((Point *)local_d8,(TPoint *)aTStack_70);
        cVar2 = Board::IsPitOfDoom(this_02,(Point *)local_d8);
        if (cVar2 != '\0') {
          BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_d8,extraout_x1);
          EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,(float)local_d0,(float)local_cc,0.0);
          Sexy::SexyVector3::operator=((SexyVector3 *)local_c8,(SexyVector3 *)aTStack_70);
          if (0 < (int)(&DAT_06aea30c)[(long)iVar3 * 2]) {
            pZVar13._0_4_ = (ZombieTosserSubSystem *)((float)pZVar13._0_4_ * 5.0);
          }
          if (((&DAT_06aea308)[(long)iVar3 * 2] == 0) && (local_d8[0] < *(int *)(this_02 + 0xf8))) {
            local_c8[0] = local_c8[0] + fVar10 * 0.5;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        pTVar8 = pTVar8 + 8;
      } while (iVar3 != 4);
    }
    local_c8[0] = (float)NEON_fminnm(local_c8[0],0x44480000);
    pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
    ZombieTosserSubSystem::LaunchZombie
              (pZVar13._0_4_,uVar9,pZVar6,param_1,(Vec3 *)local_c8,aRStack_b8,0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::UpdateActions() */

void __thiscall PlantSpringbean::UpdateActions(PlantSpringbean *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  Zombie *pZVar8;
  ResourceInfo *pRVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnchartedModePlantNumData aUStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  SexyVector3 aSStack_18 [16];
  long local_8;
  
  lVar11 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04069228(lVar11);
  if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
    iVar5 = PlantFramework::GetMiniLevel((PlantFramework *)this);
  }
  else {
    iVar5 = (**(code **)(*(long *)this + 0x410))();
    lVar11 = *(long *)(this + 0x10);
  }
  iVar10 = *(int *)(lVar11 + 200);
  do {
    switch(iVar10) {
    case 10:
      cVar2 = isZombieClose(this);
      if (cVar2 == '\0') goto LAB_0406a4ec;
      setState(this,0xb);
      iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xb:
      cVar2 = isAnimDone(this);
      if (cVar2 == '\0') {
LAB_0406a4c8:
        lVar11 = *(long *)(this + 0x10);
        goto LAB_0406a4cc;
      }
      setState(this,0xc);
      iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xc:
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_28,1,0);
      (**(code **)(*(long *)this + 0xe0))
                (aRStack_20,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0,0,aUStack_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar2 == '\0') {
        cVar2 = isZombieClose(this);
        if (cVar2 != '\0') goto LAB_0406a658;
        setState(this,0xf);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
      }
      else {
        cVar2 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
        if (cVar2 == '\0') {
          if (iVar4 - iVar5 == 1) {
            fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
            lVar11 = FUN_04069704(*(undefined8 *)(this + 0x10));
            cVar2 = fVar12 < *(float *)(lVar11 + 0x2b8);
            goto LAB_0406a5e0;
          }
          if (1 < iVar4 - iVar5) {
            fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
            lVar11 = FUN_04069704(*(undefined8 *)(this + 0x10));
            fVar14 = *(float *)(lVar11 + 700);
            fVar13 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
            cVar2 = fVar12 < fVar13 + fVar14;
            goto LAB_0406a5e0;
          }
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          (**(code **)(*plVar7 + 0x3f0))();
LAB_0406a710:
          pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
          tossZombie(this,(Zombie *)pRVar9);
        }
        else {
          cVar2 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
LAB_0406a5e0:
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          cVar3 = (**(code **)(*plVar7 + 0x3f0))();
          if ((cVar3 == '\0') || (cVar2 == '\0')) goto LAB_0406a710;
          pZVar8 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          iVar6 = Zombie::GetFacing(pZVar8);
          if (iVar6 == 1) {
            pZVar8 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            iVar6 = PlantFramework::Rand((PlantFramework *)this,600);
            fVar12 = -500.0;
          }
          else {
            pZVar8 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            iVar6 = PlantFramework::Rand((PlantFramework *)this,600);
            fVar12 = 1000.0;
          }
          EATextSquish::Vec3::Vec3((Vec3 *)aSStack_18,fVar12,(float)iVar6,0.0);
          Zombie::FlickOff(pZVar8,aSStack_18);
        }
        setState(this,0xd);
LAB_0406a658:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
      }
      lVar11 = *(long *)(this + 0x10);
LAB_0406a4cc:
      iVar6 = *(int *)(lVar11 + 200);
      break;
    case 0xd:
      cVar2 = isAnimDone(this);
      if (cVar2 == '\0') goto LAB_0406a4c8;
      setState(this,0xe);
      iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xe:
      fVar12 = (float)PVZ_T();
      lVar11 = *(long *)(this + 0x10);
      if (fVar12 <= *(float *)(lVar11 + 0x128)) goto LAB_0406a4cc;
      setState(this,0xf);
      iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xf:
    case 0x10:
      cVar2 = isAnimDone(this);
      if (cVar2 == '\0') goto LAB_0406a4c8;
      setState(this,10);
LAB_0406a4ec:
      iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    default:
      goto switchD_0406a4b4_default;
    }
    bVar1 = iVar10 != iVar6;
    iVar10 = iVar6;
  } while (bVar1);
switchD_0406a4b4_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::tossEnded(Zombie*) */

void __thiscall PlantSpringbean::tossEnded(PlantSpringbean *this,Zombie *param_1)

{
  char cVar1;
  RtWeakPtrBase *this_00;
  string *psVar2;
  SexyVector3 *pSVar3;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"pirate_barrel");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_20);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"birthday_barrel");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
    nop();
    if (cVar1 == '\0') goto LAB_0406abd0;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar3);
  if (cVar1 == '\0') {
    Zombie::TakeFatalDamage(param_1,*(BoardEntity **)(this + 0x10));
  }
LAB_0406abd0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringbean::OnAnimCommand(std::string const&, std::string const&) */

void PlantSpringbean::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  Zombie *this;
  SexyVector3 *pSVar6;
  ZombieSelfExplode *pZVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  RealObject *this_00;
  uint uVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0x10) {
    bVar3 = std::operator==(param_2,"plantfood_impact");
    if (bVar3) {
      iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
      iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      Sexy::Insets::Insets(aIStack_30,0,0,iVar2,iVar1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      uVar10 = local_20;
      uVar5 = FUN_04069258(local_20,local_18);
      if (uVar5 != 0) {
        for (uVar11 = 0; uVar11 < uVar5; uVar11 = uVar11 + 1) {
          FUN_04069264(uVar10);
          nop();
          cVar4 = Zombie::IsOnGround(this);
          if (((((cVar4 != '\0') &&
                (bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this), !bVar3)) &&
               (bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this), !bVar3)) &&
              ((((cVar4 = (**(code **)(*(long *)this + 0x4d8))(this), cVar4 == '\0' &&
                 (cVar4 = (**(code **)(*(long *)this + 0x508))(this), cVar4 == '\0')) &&
                ((bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), !bVar3 &&
                 ((cVar4 = Zombie::IsBerserk(this), cVar4 == '\0' &&
                  (cVar4 = Zombie::HasFogImmune(this), cVar4 == '\0')))))) &&
               (cVar4 = Zombie::CanBeLaunchedByPlants(this), cVar4 != '\0')))) &&
             ((((cVar4 = RealObject::IsOnOpposingTeam
                                   ((RealObject *)this,*(RealObject **)(param_1 + 0x10)),
                cVar4 != '\0' && (cVar4 = (**(code **)(*(long *)this + 0x328))(this), cVar4 == '\0')
                ) && (cVar4 = (**(code **)(*(long *)this + 0x330))(this), cVar4 == '\0')) &&
              ((cVar4 = Zombie::IsJumping(this), cVar4 == '\0' &&
               (cVar4 = Zombie::IsControlled(this), cVar4 == '\0')))))) {
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            cVar4 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar6);
            if (cVar4 == '\0') {
              bVar3 = Sexy::RtObject::IsA<ZombieSelfExplode>((RtObject *)this);
              if (bVar3) {
                pZVar7 = Sexy::RtObject::Cast<ZombieSelfExplode>((RtObject *)this);
                cVar4 = FUN_04069248(pZVar7[0x801]);
                if (cVar4 != '\0') goto LAB_0406ada8;
              }
              tossZombie((PlantSpringbean *)param_1,this);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
              std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
              push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                        (param_1 + 0x30),(RtWeakPtr *)aIStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            }
          }
LAB_0406ada8:
          uVar10 = local_20;
          uVar5 = FUN_04069258(local_20,local_18);
        }
      }
      fVar12 = (float)PVZ_T();
      lVar8 = FUN_04069698(*(undefined8 *)(param_1 + 0x10));
      this_00 = *(RealObject **)(param_1 + 0x10);
      *(float *)(param_1 + 0x2c) = *(float *)(lVar8 + 0x2c0) + 0.15 + fVar12;
      std::string::string((string *)aIStack_30,"Play_Plant_SpringBean_Impact_Nitro");
      RealObject::PlayPositionalSound(this_00,(string *)aIStack_30,0.0);
      std::string::~string((string *)aIStack_30);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      uVar9 = 1;
      goto LAB_0406acdc;
    }
  }
  uVar9 = 0;
LAB_0406acdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

