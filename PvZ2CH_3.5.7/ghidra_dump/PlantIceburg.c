// Class: PlantIceburg


/* PlantIceburg::CanApplyPlantfood() */

bool __thiscall PlantIceburg::CanApplyPlantfood(PlantIceburg *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 10 || *(int *)(*(long *)(this + 0x10) + 200) == 4
  ;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::ApplyPlantfood() */

void __thiscall PlantIceburg::ApplyPlantfood(PlantIceburg *this)

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
  if (((DAT_06ae8c38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae8c38), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ae8ce0,0x46,0xb4,0xfa,100);
    __cxa_guard_release(&DAT_06ae8c38);
  }
  if (((DAT_06ae8d58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae8d58), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ae8d08,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06ae8d58);
  }
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06ae8ce0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar2,1,asStack_18,2);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06ae8d08);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar2,0,asStack_18,2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantIceburg::PostInitialize() */

void __thiscall PlantIceburg::PostInitialize(PlantIceburg *this)

{
  char cVar1;
  
  cVar1 = WhackZombieUtils::IsPlayingWhackZombie();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x220))(this);
  }
  return;
}


/* PlantIceburg::getLaunchStateSerialization() */

void __thiscall PlantIceburg::getLaunchStateSerialization(PlantIceburg *this)

{
  FUN_040349c4(*(undefined4 *)(this + 0x30));
  return;
}


/* PlantIceburg::isInState(LaunchState) const */

bool __thiscall PlantIceburg::isInState(PlantIceburg *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_040349c4(*(undefined4 *)(this + 0x30));
  return iVar1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantIceburg::Fire(PlantIceburg *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  lVar3 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_040349a4(lVar3);
  if (iVar1 < 2) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x150) = 2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::FindTargetAndFire(PlantWeapon) */

void PlantIceburg::FindTargetAndFire(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_040349a4(lVar3);
  if ((1 < iVar2) && ((iVar2 = *(int *)(lVar3 + 200), iVar2 == 4 || (iVar2 == 10)))) {
    cVar1 = PlantFramework::FindTargetAndFire(param_1,2);
    if (cVar1 != '\0') {
      lVar4 = *(long *)(param_1 + 0x10);
      fVar5 = (float)FUN_040349a0(*(undefined4 *)(lVar4 + 0x3cc));
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      lVar3 = FUN_040349c8(*(undefined8 *)(lVar3 + 0x70),2);
      fVar6 = *(float *)(lVar3 + 0x24);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_040349c8(*(undefined8 *)(lVar3 + 0x70),2);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(lVar4 + 0xbc),fVar5 * fVar6,fVar5 * *(float *)(lVar3 + 0x28));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 10;
      goto LAB_040350a0;
    }
  }
  cVar1 = '\0';
LAB_040350a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantIceburg::Idle() */

void __thiscall PlantIceburg::Idle(PlantIceburg *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 4;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::GetPlantAttackGridRect(PlantWeapon) */

void PlantIceburg::GetPlantAttackGridRect(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::GetPlantAttackGridRect();
  Plant::GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar5 = *(undefined8 *)(pRVar2 + 0x70);
  uVar3 = FUN_04034a00(uVar5,*(undefined8 *)(pRVar2 + 0x78));
  if ((param_3 & 0xffffffff) < uVar3) {
    piVar4 = (int *)FUN_040349c8(uVar5,param_3 & 0xffffffff);
    if (((*piVar4 == 0) && (piVar4[6] == 4)) &&
       (iVar1 = FUN_040349a4(*(undefined8 *)(param_2 + 0x10)), 2 < iVar1)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::GetPlantAttackRect(PlantWeapon) */

void PlantIceburg::GetPlantAttackRect(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::GetPlantAttackRect();
  Plant::GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar5 = *(undefined8 *)(pRVar2 + 0x70);
  uVar3 = FUN_04034a00(uVar5,*(undefined8 *)(pRVar2 + 0x78));
  if ((param_3 & 0xffffffff) < uVar3) {
    piVar4 = (int *)FUN_040349c8(uVar5,param_3 & 0xffffffff);
    if (((*piVar4 == 0) && (piVar4[6] == 4)) &&
       (iVar1 = FUN_040349a4(*(undefined8 *)(param_2 + 0x10)), 2 < iVar1)) {
      iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1 * 2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantIceburg::PlantIceburg() */

void __thiscall PlantIceburg::PlantIceburg(PlantIceburg *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bad30;
  StateMachine<LaunchState>::StateMachine((StateMachine<LaunchState> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* PlantIceburg::StaticNew() */

PlantIceburg * PlantIceburg::StaticNew(void)

{
  PlantIceburg *this;
  
  this = ::operator_new(0x108);
  PlantIceburg(this);
  return this;
}


/* PlantIceburg::PlayAttackAnimation() */

void __thiscall PlantIceburg::PlayAttackAnimation(PlantIceburg *this)

{
  PlantAnimRig_Iceburg *this_00;
  
  if (*(int *)(*(Plant **)(this + 0x10) + 200) != 10) {
    Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
    return;
  }
  this_00 = (PlantAnimRig_Iceburg *)FUN_0403598c();
  PlantAnimRig_Iceburg::PlayShootAnimation(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::UpdateActions() */

void __thiscall PlantIceburg::UpdateActions(PlantIceburg *this)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  PlantAnimRig *pPVar6;
  PopAnimRig *this_00;
  long lVar7;
  UIEasyButtonWidget *this_01;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  float fVar12;
  RtMixedPtrBase aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateMachine<LaunchState>::UpdateState((StateMachine<LaunchState> *)(this + 0x30));
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if ((iVar1 == 10) || (iVar1 == 4)) {
    PlantFramework::FindTargetZombie(aRStack_78,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
    if (cVar2 != '\0') {
      lVar11 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar11 + 200) = 2;
      Plant::GetProps();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      lVar7 = FUN_040349c8(*(undefined8 *)(lVar7 + 0x70),0);
      fVar12 = *(float *)(lVar7 + 0x24);
      Plant::GetProps();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      lVar7 = FUN_040349c8(*(undefined8 *)(lVar7 + 0x70),0);
      Sexy::FastCurve::SetOutRange((FastCurve *)(lVar11 + 0xbc),fVar12,*(float *)(lVar7 + 0x28));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      plVar9 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar10 = *(code **)(*plVar9 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar10)(plVar9,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar6 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar6,0xe);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar8 = 0;
    do {
      uVar4 = local_68;
      uVar5 = FUN_040349d8(local_68,local_60);
      if (uVar5 <= uVar8) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
        goto LAB_04035a20;
      }
      puVar3 = (undefined8 *)FUN_040349e4(uVar4,uVar8);
      plVar9 = (long *)*puVar3;
      pcVar10 = *(code **)(*plVar9 + 0x20);
      uVar4 = GridItemFlame::StaticGetClass();
      cVar2 = (*pcVar10)(plVar9,uVar4);
      uVar8 = uVar8 + 1;
    } while (cVar2 == '\0');
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(this_01 + 200) = 2;
    plVar9 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
    pcVar10 = *(code **)(*plVar9 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar10)(plVar9,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pPVar6 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar6,0xe);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  else if (iVar1 == 2) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
    }
  }
LAB_04035a20:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::OnAnimCommand(std::string const&, std::string const&) */

void PlantIceburg::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  GridItemCoalSteamZomboss *this;
  long *plVar8;
  RealObject *pRVar9;
  Zombie *this_00;
  ulong uVar10;
  undefined8 *puVar11;
  RtObject *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  uint uVar12;
  ulong uVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=(param_2,"freeze");
  uVar12 = (uint)bVar1;
  uVar6 = 0;
  if (!bVar1) {
    param_1[0x28] = (string)0x1;
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 2) {
      Plant::GetProps();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_040349c8(*(undefined8 *)(lVar7 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      if (*(code **)(*(long *)param_1 + 0x198) == PlantFramework::GetDamageFlags) {
        uVar6 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar6 = (**(code **)(*(long *)param_1 + 0x198))(param_1,0);
      }
      operator|=(auStack_58,uVar6);
      PlantFramework::FindTargetZombie(aRStack_98,param_1,0);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
      if (cVar2 != '\0') {
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        (**(code **)(*plVar8 + 0x110))(plVar8,(DamageInfo *)aRStack_68);
        pRVar9 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        std::string::string((string *)&local_88,"Play_IcebergLettuce_Freeze");
        RealObject::PlayPositionalSound(pRVar9,(string *)&local_88,0.0);
        std::string::~string((string *)&local_88);
        nop();
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88,4,
                 *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x114),
                 *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110));
      uVar13 = 0;
      while (uVar6 = local_88, uVar10 = FUN_040349d8(local_88,local_80), uVar13 < uVar10) {
        puVar11 = (undefined8 *)FUN_040349e4(uVar6,uVar13);
        bVar1 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)*puVar11);
        if (bVar1) {
          puVar11 = (undefined8 *)FUN_040349e4(local_88,uVar13);
          (**(code **)(*(long *)*puVar11 + 0x110))((long *)*puVar11,(DamageInfo *)aRStack_68);
          puVar11 = (undefined8 *)FUN_040349e4(local_88,uVar13);
          pRVar9 = (RealObject *)*puVar11;
          std::string::string((string *)aRStack_90,"Play_IcebergLettuce_Freeze");
          RealObject::PlayPositionalSound(pRVar9,(string *)aRStack_90,0.0);
          std::string::~string((string *)aRStack_90);
          nop();
          uVar13 = uVar13 + 1;
        }
        else {
          uVar13 = uVar13 + 1;
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      uVar6 = 1;
    }
    else if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if ((int)(uint)bVar1 < iVar3) {
        do {
          iVar3 = 0;
          iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
          if (0 < iVar4) {
            do {
              lVar7 = FUN_04035c4c(iVar3,uVar12);
              if (lVar7 != 0) {
                MessageRouter::Post<int,int,bool,int,int,bool>
                          ((MessageRouter *)gMessageRouter,Message::CleanPoison,iVar3,uVar12,true);
              }
              lVar7 = FUN_04035d30(iVar3,uVar12);
              if (lVar7 != 0) {
                MessageRouter::Post<bool,bool>
                          ((MessageRouter *)gMessageRouter,Message::GridItemFireCracker,false);
              }
              lVar7 = FUN_04035e14(iVar3,uVar12);
              if (lVar7 != 0) {
                MessageRouter::Post<bool,bool>
                          ((MessageRouter *)gMessageRouter,Message::GridItemSummerFireworks,false);
              }
              this = (GridItemCoalSteamZomboss *)FUN_04035ef8(iVar3,uVar12);
              if (this != (GridItemCoalSteamZomboss *)0x0) {
                GridItemCoalSteamZomboss::NotifyDamageByIceburg(this);
              }
              iVar3 = iVar3 + 1;
              iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
            } while (iVar3 < iVar4);
          }
          uVar12 = uVar12 + 1;
          iVar3 = BoardConstants::NUMBER_OF_ROWS();
        } while ((int)uVar12 < iVar3);
      }
      uVar5 = (**(code **)(*(long *)param_1 + 400))(param_1,0);
      Plant::GetProps();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      lVar7 = FUN_040349c8(*(undefined8 *)(lVar7 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      if (*(code **)(*(long *)param_1 + 0x198) == PlantFramework::GetDamageFlags) {
        uVar6 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar6 = (**(code **)(*(long *)param_1 + 0x198))(param_1,1);
      }
      iVar3 = 0;
      operator|=(auStack_58,uVar6);
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post<GameObject*,float,Plant*,float>
                ((MessageRouter *)gMessageRouter,Message::FreezeZombossRobot,
                 *(Plant **)(param_1 + 0x10),*(float *)(lVar7 + 0x40));
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)&local_88,uVar6,0x29);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88), bVar1)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
        Sexy::RtId::~RtId(aRStack_90);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        cVar2 = (**(code **)(*plVar8 + 0x328))();
        if (cVar2 == '\0') {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          cVar2 = (**(code **)(*plVar8 + 0xb8))(plVar8,uVar5);
          if (cVar2 == '\0') goto LAB_04036404;
          pRVar9 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          cVar2 = RealObject::IsOnOpposingTeam(pRVar9,*(RealObject **)(param_1 + 0x10));
          if (cVar2 == '\0') goto LAB_04036404;
          this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          cVar2 = Zombie::IsInvisible(this_00);
          if (cVar2 != '\0') goto LAB_04036404;
          iVar3 = iVar3 + 1;
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          (**(code **)(*plVar8 + 0x110))(plVar8,aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          iVar4 = extraout_w1_00;
        }
        else {
LAB_04036404:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          iVar4 = extraout_w1;
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,iVar4);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)&local_88,uVar6,0x2f);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88), bVar1)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
        Sexy::RtId::~RtId(aRStack_90);
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_01);
        if (bVar1) {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          (**(code **)(*plVar8 + 0x110))(plVar8,aRStack_68);
        }
        iVar3 = iVar3 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,extraout_w1_01);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
      if (0x13 < iVar3) {
        std::string::string((string *)&local_88,"iceberg_ch");
        Achievement::Queue((string *)&local_88,100.0);
        std::string::~string((string *)&local_88);
        nop();
        Achievement::ShowAll();
      }
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* PlantIceburg::onEnterState_END(LaunchState) */

void PlantIceburg::onEnterState_END(long param_1)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (param_1 + 0xd8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (param_1 + 0xf0));
  return;
}


/* PlantIceburg::~PlantIceburg() */

void __thiscall PlantIceburg::~PlantIceburg(PlantIceburg *this)

{
  *(undefined ***)this = &PTR_GetClass_067bad30;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0xf0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0xd8));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantIceburg::~PlantIceburg() */

void __thiscall PlantIceburg::~PlantIceburg(PlantIceburg *this)

{
  ~PlantIceburg(this);
  AK::FreeHook(this);
  return;
}


/* PlantIceburg::onEnterState_LAUNCHING(LaunchState) */

void PlantIceburg::onEnterState_LAUNCHING(long param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xd0) = 5;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_PowerUp_SnowBall_Start");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::LaunchSnowball(Sexy::SexyVector2 const&) */

void __thiscall PlantIceburg::LaunchSnowball(PlantIceburg *this,SexyVector2 *param_1)

{
  int iVar1;
  int iVar2;
  Projectile *this_00;
  char *pcVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtId aRStack_48 [8];
  RtName aRStack_40 [16];
  RtName aRStack_30 [16];
  char *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(param_1 + 4));
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar5 = (float)RandRangeFloat(-80.0,80.0);
  Sexy::RtName::RtName(aRStack_40,L"SnowballDefault");
  Sexy::RtName::RtName(aRStack_30,L"ProjectileTypes");
  Sexy::RtId::RtId(aRStack_48,aRStack_40,aRStack_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_48);
  Sexy::RtId::~RtId(aRStack_48);
  Sexy::RtName::~RtName(aRStack_30);
  Sexy::RtName::~RtName(aRStack_40);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  fVar7 = (float)(int)((float)iVar1 - (float)iVar2 * 0.4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_50);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar5 - 100.0),fVar7,0,uVar4,aRStack_30,
                       *(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  local_20[0] = "IMAGE_EFFECTS_POWER_UP_ICE_PROJECTILE1";
  local_20[1] = "IMAGE_EFFECTS_POWER_UP_ICE_PROJECTILE2";
  local_20[2] = "IMAGE_EFFECTS_POWER_UP_ICE_PROJECTILE3";
  iVar1 = PlantFramework::Rand((PlantFramework *)this);
  std::string::string((string *)aRStack_40,local_20[(ulong)(long)iVar1 % 3]);
  GetImageByName((string *)aRStack_40);
  CloudBase::SetOwner((CloudBase *)this_00,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string((string *)aRStack_40);
  nop();
  fVar5 = (float)RandRangeFloat(0.0,150.0);
  fVar6 = (float)RandRangeFloat(0.0,0.1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*(float *)param_1,fVar7,0.0);
  Projectile::LaunchAt(this_00,(SexyVector3 *)aRStack_30,fVar5 + 550.0,fVar6 + 1.2);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_PowerUp_SnowBall_Fire");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::StaticClassInit() */

void PlantIceburg::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<LaunchState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<LaunchState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantIceburg");
      (*pcVar4)(plVar1,asStack_150,FUN_04037340,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<LaunchState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x528);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x530);
  Sexy::Delegate0::Delegate0<PlantIceburg,void(PlantIceburg::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x538);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"LaunchState_INIT");
  StateDefinition<LaunchState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04036e4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x540);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x548);
  Sexy::Delegate0::Delegate0<PlantIceburg,void(PlantIceburg::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x550);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"LaunchState_LAUNCHING");
  StateDefinition<LaunchState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04036e4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x558);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x560);
  Sexy::Delegate0::Delegate0<PlantIceburg,void(PlantIceburg::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x568);
  Sexy::Delegate1<LaunchState>::Delegate1<PlantIceburg,void(PlantIceburg::*)(LaunchState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"LaunchState_END");
  StateDefinition<LaunchState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04036e4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantIceburg::StaticGetClass() */

long * PlantIceburg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIceburg::GetClass() const */

long * PlantIceburg::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::setLaunchStateSerialization(int) */

void __thiscall PlantIceburg::setLaunchStateSerialization(PlantIceburg *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<LaunchState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<LaunchState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<LaunchState>::GetStateDefinition
                     ((StateMachineTable<LaunchState> *)pSVar2,param_1);
  StateDefinition<LaunchState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<LaunchState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x30),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::setState(LaunchState) */

void __thiscall PlantIceburg::setState(PlantIceburg *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<LaunchState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<LaunchState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<LaunchState>::GetStateDefinition
                     ((StateMachineTable<LaunchState> *)pSVar2,param_2);
  StateDefinition<LaunchState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<LaunchState>::SetContext(aSStack_a8,this);
  StateMachine<LaunchState>::SetState
            ((StateMachine<LaunchState> *)(this + 0x30),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIceburg::Initialize() */

void __thiscall PlantIceburg::Initialize(PlantIceburg *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar3;
  lVar2 = *(long *)(this + 0x10);
  this[0x28] = (PlantIceburg)0x0;
  *(undefined4 *)(this + 0xd0) = 0;
  iVar1 = FUN_040349a4(lVar2);
  if (1 < iVar1) {
    *(undefined1 *)(lVar2 + 0x119) = 1;
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::FindValidZombiesAndAttack() */

void __thiscall PlantIceburg::FindValidZombiesAndAttack(PlantIceburg *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) < 1) {
    setState(this,2);
  }
  else {
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
    uVar11 = 0;
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0xf0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0xd8));
    Sexy::Insets::Insets
              ((Insets *)&local_30,0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1,
               *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               (Insets *)&local_30);
    uVar8 = local_20;
    lVar4 = FUN_040349d8(local_20,local_18);
    if (lVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_040349e4(uVar8,uVar11);
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if (((this_01 != (Zombie *)0x0) &&
            (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) &&
           (cVar1 = RealObject::IsOnOpposingTeam
                              ((RealObject *)this_01,*(RealObject **)(this + 0x10)), cVar1 != '\0'))
        {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_01);
          fVar14 = pfVar7[1];
          BoardTransforms::BoardSpaceToGridX(*pfVar7);
          BoardTransforms::BoardSpaceToGridY(fVar14);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          FUN_040349e4(local_20,uVar11);
          ToolPacketData::GetProps();
          local_40 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar8,uVar9,(Insets *)&local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_30);
          if (!bVar2) {
            FUN_040349e4(local_20,uVar11);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)(this + 0xd8),(RtWeakPtr *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          }
        }
        uVar8 = local_20;
        uVar11 = uVar11 + 1;
        uVar6 = FUN_040349d8(local_20,local_18);
      } while (uVar11 < uVar6);
    }
    lVar4 = FUN_040349ec(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
    if (lVar4 != 0) {
      iVar3 = PlantFramework::Rand((PlantFramework *)this,(int)lVar4);
      this_02 = (RtWeakPtr *)FUN_040349f8(*(undefined8 *)(this + 0xd8),(long)iVar3);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
      uVar13 = *(undefined4 *)(pRVar10 + 0x1c);
      uVar12 = FUN_04034aac(*(undefined4 *)(pRVar10 + 0x18),uVar13,*(undefined4 *)(pRVar10 + 0x20));
      local_30 = CONCAT44(uVar13,uVar12);
      LaunchSnowball(this,(SexyVector2 *)&local_30);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0xf0),(RtWeakPtr *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceburg::updateState_LAUNCHING() */

void __thiscall PlantIceburg::updateState_LAUNCHING(PlantIceburg *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x2c)) {
    return;
  }
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar1 + _FUN_04037fa0;
  FindValidZombiesAndAttack(this);
  return;
}


/* PlantIceburg::CancelPlantfood() */

void __thiscall PlantIceburg::CancelPlantfood(PlantIceburg *this)

{
  char cVar1;
  Plant *this_00;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 4;
  cVar1 = Plant::GetAvatarEnable(this_00);
  if (cVar1 != '\0') {
    setState(this,1);
  }
  cVar1 = WhackZombieUtils::IsPlayingWhackZombie();
  if (cVar1 == '\0') {
    return;
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  return;
}

