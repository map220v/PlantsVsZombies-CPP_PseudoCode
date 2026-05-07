// Class: PlantShrinkingViolet


/* PlantShrinkingViolet::GetShadowScaling() */

undefined4 PlantShrinkingViolet::GetShadowScaling(void)

{
  return 0x3f333333;
}


/* PlantShrinkingViolet::CanApplyPlantfood() */

bool __thiscall PlantShrinkingViolet::CanApplyPlantfood(PlantShrinkingViolet *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 4;
}


/* PlantShrinkingViolet::Initialize() */

void __thiscall PlantShrinkingViolet::Initialize(PlantShrinkingViolet *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantShrinkingViolet)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::TryBlockPushOffBoard(Zombie*, int) */

void __thiscall
PlantShrinkingViolet::TryBlockPushOffBoard(PlantShrinkingViolet *this,Zombie *param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < param_2 && *(int *)(*(long *)(this + 0x10) + 200) == 4;
    if (bVar1) {
      pcVar2 = *(code **)(*(long *)this + 0x310);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar2)(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::ApplyPlantfood() */

void __thiscall PlantShrinkingViolet::ApplyPlantfood(PlantShrinkingViolet *this)

{
  int iVar1;
  undefined8 uVar2;
  RealObject *this_00;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 5;
  std::string::string(asStack_18,"Play_IcebergLettuce_Freeze_PF");
  RealObject::PlayPositionalSound(this_00,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  uVar2 = Effect_ScreenFade::Create();
  if (((DAT_06aef928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aef928), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06aef940,0x46,0xb4,0xfa,100);
    __cxa_guard_release(&DAT_06aef928);
  }
  if (((DAT_06aef950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aef950), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06aef8e0,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06aef950);
  }
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06aef940);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar2,1,asStack_18,2);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06aef8e0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar2,0,asStack_18,2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantShrinkingViolet::PlantShrinkingViolet() */

void __thiscall PlantShrinkingViolet::PlantShrinkingViolet(PlantShrinkingViolet *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantShrinkingViolet)0x0;
  *(undefined ***)this = &PTR_GetClass_067f9930;
  return;
}


/* PlantShrinkingViolet::StaticNew() */

PlantShrinkingViolet * PlantShrinkingViolet::StaticNew(void)

{
  PlantShrinkingViolet *this;
  
  this = ::operator_new(0x30);
  PlantShrinkingViolet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::StaticClassInit() */

void PlantShrinkingViolet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShrinkingViolet");
    (*pcVar2)(plVar1,asStack_10,FUN_04186bfc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShrinkingViolet::StaticGetClass() */

long * PlantShrinkingViolet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShrinkingViolet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShrinkingViolet::GetClass() const */

long * PlantShrinkingViolet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShrinkingViolet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShrinkingViolet::~PlantShrinkingViolet() */

void __thiscall PlantShrinkingViolet::~PlantShrinkingViolet(PlantShrinkingViolet *this)

{
  *(undefined ***)this = &PTR_GetClass_067f9930;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantShrinkingViolet::~PlantShrinkingViolet() */

void __thiscall PlantShrinkingViolet::~PlantShrinkingViolet(PlantShrinkingViolet *this)

{
  ~PlantShrinkingViolet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::UpdateActions() */

void __thiscall PlantShrinkingViolet::UpdateActions(PlantShrinkingViolet *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  PlantAnimRig *pPVar4;
  UIEasyButtonWidget *this_01;
  code *pcVar5;
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    PlantFramework::FindTargetZombie(aRStack_58,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 != '\0') {
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this_01 + 200) = 2;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      pcVar5 = *(code **)(*plVar3 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar5)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar4 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar4,0xe);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else if (iVar1 == 2) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantShrinkingViolet::TakeSmashAttack(long param_1)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  UIEasyButtonWidget *this;
  code *pcVar4;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if ((cVar1 == '\0') &&
     (this = *(UIEasyButtonWidget **)(param_1 + 0x10), *(int *)(this + 200) == 4)) {
    *(undefined4 *)(this + 200) = 2;
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this);
    pcVar4 = *(code **)(*plVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar4)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    PlantAnimRig::SetState(pPVar3,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShrinkingViolet::isUnshrinkable(Zombie const*) const */

ulong __thiscall PlantShrinkingViolet::isUnshrinkable(PlantShrinkingViolet *this,Zombie *param_1)

{
  int iVar1;
  ZombieGargantuar *pZVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != (Zombie *)0x0) {
    pZVar2 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1);
    if (pZVar2 != (ZombieGargantuar *)0x0) {
      iVar1 = FUN_041868f4(*(undefined8 *)(this + 0x10));
      return (ulong)(iVar1 < 2);
    }
  }
  lVar3 = FUN_04187230(*(undefined8 *)(this + 0x10));
  uVar4 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar3 + 0x2c0),param_1);
  return uVar4;
}


/* PlantShrinkingViolet::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

undefined8
PlantShrinkingViolet::CanTargetZombie
          (PlantShrinkingViolet *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  ResourceInfo *pRVar5;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x330))();
  if (cVar1 == '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = RealObject::IsOnTeam(uVar3,1);
      if (cVar1 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar3,1);
        if (cVar1 == '\0') {
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar3,3);
          if (cVar1 == '\0') {
            uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = Zombie::HasCondition(uVar3,4);
            if (cVar1 == '\0') {
              plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = (**(code **)(*plVar2 + 0x2a8))();
              if (cVar1 == '\0') {
                pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = Zombie::HasFogImmune(pZVar4);
                if (cVar1 == '\0') {
                  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar1 = (**(code **)(*plVar2 + 0x4d8))();
                  if (cVar1 == '\0') {
                    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar1 = (**(code **)(*plVar2 + 0x508))();
                    if (cVar1 == '\0') {
                      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      cVar1 = Zombie::IsBerserk(pZVar4);
                      if (cVar1 == '\0') {
                        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                           ((RtWeakPtr *)param_2);
                        cVar1 = isUnshrinkable(param_1,(Zombie *)pRVar5);
                        if (cVar1 == '\0') {
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShrinkingViolet::OnAnimCommand(std::string const&, std::string const&) */

void PlantShrinkingViolet::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  undefined4 *puVar9;
  int extraout_w1;
  int iVar10;
  int extraout_w1_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [8];
  Iterator aIStack_88 [32];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 2) {
      param_1[0x28] = (string)0x1;
      FUN_041868d0(aRStack_68);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      lVar5 = FUN_04186924(*(undefined8 *)(lVar5 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      if (*(code **)(*(long *)param_1 + 0x198) == PlantFramework::GetDamageFlags) {
        uVar6 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar6 = (**(code **)(*(long *)param_1 + 0x198))(param_1,0);
      }
      operator|=(auStack_58,uVar6);
      operator|=(auStack_58,0x400000000000);
      puVar9 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(param_1 + 0x10));
      PlantFramework::damageEntitiesInGridRadius
                (*(undefined4 *)(lVar5 + 0x14),*puVar9,puVar9[1],puVar9[2],param_1,aRStack_68,2,0);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    else if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_04186924(*(undefined8 *)(lVar5 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      if (*(code **)(*(long *)param_1 + 0x198) == PlantFramework::GetDamageFlags) {
        uVar6 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar6 = (**(code **)(*(long *)param_1 + 0x198))(param_1,1);
      }
      operator|=(auStack_58,uVar6);
      uVar6 = operator|(0x2000,0x400000000000);
      operator|=(auStack_58,uVar6);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_88,uVar6,0x29);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar2) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
        Sexy::RtId::~RtId(aRStack_90);
        pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        uVar6 = operator|(1,0x2000);
        uVar4 = operator|(uVar6,4);
        cVar3 = Zombie::MatchesAny(pZVar8,uVar4,*(undefined8 *)(param_1 + 0x10));
        if (cVar3 == '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          (**(code **)(*plVar7 + 0x110))(plVar7,aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          iVar10 = extraout_w1;
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          iVar10 = extraout_w1_00;
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar10);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantShrinkingViolet::CustomizePlantActionDamage(PlantAction const&, DamageInfo&) */

void __thiscall
PlantShrinkingViolet::CustomizePlantActionDamage
          (PlantShrinkingViolet *this,PlantAction *param_1,DamageInfo *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  lVar2 = FUN_04187230(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  DamageInfo::AddCondition(*(DamageInfo **)(lVar2 + 0x2b8),param_2,0x40);
  uVar3 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_041868fc(uVar3);
  if (cVar1 == '\0') {
    lVar2 = FUN_04187230(uVar3);
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(lVar2 + 0x2b8),param_2,0x18);
    return;
  }
  lVar2 = FUN_04187230(uVar3);
  fVar4 = *(float *)(lVar2 + 0x2b8);
  lVar2 = FUN_04187230(*(undefined8 *)(this + 0x10));
  DamageInfo::AddCondition((DamageInfo *)(fVar4 + *(float *)(lVar2 + 700)),param_2,2);
  return;
}

