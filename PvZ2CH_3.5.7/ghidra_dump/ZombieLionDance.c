// Class: ZombieLionDance


/* ZombieLionDance::onApplyCondition(ZombieConditions) */

void __thiscall ZombieLionDance::onApplyCondition(undefined8 param_1,int param_2)

{
  if ((2 < param_2 - 2U) && (param_2 != 0x38)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieLionDance::OnZombieMoveUpDownFinish(Zombie*) */

void __thiscall ZombieLionDance::OnZombieMoveUpDownFinish(ZombieLionDance *this,Zombie *param_1)

{
  char cVar1;
  
  if ((this == (ZombieLionDance *)param_1) &&
     (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 != '\0')) {
    if (*(float *)(this + 0x804) < *(float *)(this + 0x80c)) {
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
    Zombie::setZombieState((Zombie *)this,3,0);
    return;
  }
  return;
}


/* ZombieLionDance::~ZombieLionDance() */

void __thiscall ZombieLionDance::~ZombieLionDance(ZombieLionDance *this)

{
  *(undefined ***)this = &PTR_GetClass_068810e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLionDance_06881b10;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieLionDance::~ZombieLionDance() */

void __thiscall ZombieLionDance::~ZombieLionDance(ZombieLionDance *this)

{
  ~ZombieLionDance(this + -0x10);
  return;
}


/* ZombieLionDance::~ZombieLionDance() */

void __thiscall ZombieLionDance::~ZombieLionDance(ZombieLionDance *this)

{
  ~ZombieLionDance(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLionDance::~ZombieLionDance() */

void __thiscall ZombieLionDance::~ZombieLionDance(ZombieLionDance *this)

{
  ~ZombieLionDance(this + -0x10);
  return;
}


/* ZombieLionDance::ZombieLionDance() */

void __thiscall ZombieLionDance::ZombieLionDance(ZombieLionDance *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068810e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLionDance_06881b10;
  return;
}


/* ZombieLionDance::StaticNew() */

ZombieLionDance * ZombieLionDance::StaticNew(void)

{
  ZombieLionDance *this;
  
  this = ::operator_new(0x818);
  ZombieLionDance(this);
  return this;
}


/* ZombieLionDance::CalcZombieAttackRect() */

void ZombieLionDance::CalcZombieAttackRect(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Zombie *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  
  Sexy::Insets::Insets(in_x8);
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  iVar1 = *(int *)(lVar4 + 0x4c);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(in_x8 + 8) = iVar1 * iVar2 + 0x14;
  uVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(in_x8 + 0xc) = uVar3;
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_0463a8a8(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  *(int *)in_x8 = (int)(fVar5 - (float)*(int *)(in_x8 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::DropAllLoot() */

void __thiscall ZombieLionDance::DropAllLoot(ZombieLionDance *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar6;
  float fVar7;
  bool local_41;
  string asStack_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  string asStack_28 [4];
  undefined4 local_24;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)FUN_0463a894(*(undefined4 *)(this + 0x280));
  if ((((fVar7 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar4 + 0x112) == '\0')) {
    std::string::string(asStack_40,"");
    nop();
    psVar5 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    bVar2 = std::operator==(psVar5,"egypt5");
    if (bVar2) {
      std::string::~string(asStack_40);
    }
    else {
      std::string::string((string *)&local_38,"spring_mode");
      nop();
      std::string::string(asStack_28,"all");
      nop();
      Board::TryGetYetiDirectDropItemName(*(string **)(gLawnApp + 0x9f0),(string *)&local_38);
      FUN_05474278(asStack_40,asStack_18);
      std::string::~string(asStack_18);
      std::string::~string(asStack_28);
      std::string::~string((string *)&local_38);
      psVar5 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar5);
      if ((this_00 !=
           (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0) &&
         (puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00), 490.0 <= *(float *)((long)puVar6 + 4))) {
        local_30 = *(undefined4 *)(puVar6 + 1);
        _local_38 = CONCAT44(0x43f50000,(int)*puVar6);
        (**(code **)(*(long *)this_00 + 0x78))(this_00,(string *)&local_38);
        iVar3 = FUN_0463a898(*(undefined4 *)(this_00 + 0x188));
        if (iVar3 == 1) {
          DVec3::DVec3((DVec3 *)asStack_28);
          DVec3::DVec3((DVec3 *)asStack_18);
          Collectable::GetMotionNewtonianValues
                    ((Collectable *)this_00,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                     &local_41);
          local_24 = 0;
          Collectable::SetMotionNewtonian
                    ((Collectable *)this_00,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                     local_41);
        }
      }
      Zombie::SetHasDroppedLoot((Zombie *)this,true);
      std::string::~string(asStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::PlayFireEffect() */

void __thiscall ZombieLionDance::PlayFireEffect(ZombieLionDance *this)

{
  undefined4 uVar1;
  CreatureConditionTracker *this_00;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar2;
  Effect_PopAnim *this_03;
  long *plVar3;
  float fVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4 * -110.0,fVar4 * -130.0,0.0);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  this_01 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
  std::string::string(asStack_20,"lion_fire");
  this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBIE_LION_DANCE");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
  AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string(asStack_28);
  nop();
  this_03 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_02);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(this_03,0.0,0.0);
  (**(code **)(*(long *)this_02 + 0x18))(this_02,this,aVStack_18,uVar1);
  plVar3 = (long *)AttachedEffect::GetEffect(this_02);
  (**(code **)(*plVar3 + 0x80))(fVar4);
  std::string::string(asStack_20,"animation");
  AttachedEffect::PlayAnimAndDestroy(this_02,asStack_20,2);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::PlayAshEffect(Sexy::SexyVector2 const&, std::string const&) */

void __thiscall
ZombieLionDance::PlayAshEffect(ZombieLionDance *this,SexyVector2 *param_1,string *param_2)

{
  int iVar1;
  CreatureConditionTracker *this_00;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar2;
  Effect_PopAnim *this_03;
  UIWidget *this_04;
  PopAnimRig *this_05;
  long *plVar3;
  float fVar4;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)local_18,fVar4 * *(float *)param_1,fVar4 * *(float *)(param_1 + 4),0.0);
  iVar1 = Zombie::GetFacing((Zombie *)this);
  if (iVar1 == 1) {
    local_18[0] = -local_18[0];
  }
  this_01 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
  this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,param_2);
  (**(code **)(*(long *)this + 0x900))(asStack_28,this);
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  this_03 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_02);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(this_03,0.0,0.0);
  (**(code **)(*(long *)this_02 + 0x18))(this_02,this,(Vec3 *)local_18,1);
  std::string::string((string *)aRStack_20,"animation");
  AttachedEffect::PlayAnimAndDestroy(this_02,aRStack_20,2);
  std::string::~string((string *)aRStack_20);
  nop();
  this_04 = (UIWidget *)AttachedEffect::GetEffect(this_02);
  this_05 = (PopAnimRig *)UIWidget::GetAtlasImage(this_04);
  iVar1 = Zombie::GetFacing((Zombie *)this);
  PopAnimRig::SetMirrorX(this_05,iVar1 == 1);
  plVar3 = (long *)AttachedEffect::GetEffect(this_02);
  (**(code **)(*plVar3 + 0x80))(fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::onTurnedToAsh() */

void __thiscall ZombieLionDance::onTurnedToAsh(ZombieLionDance *this)

{
  FastCurve aFStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_18,-10.0,-130.0);
  std::string::string(asStack_10,"ash");
  PlayAshEffect(this,(SexyVector2 *)aFStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::FastCurve::SetOutRange(aFStack_18,-100.0,-130.0);
  std::string::string(asStack_10,"ash_1");
  PlayAshEffect(this,(SexyVector2 *)aFStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::onEnterState_MoveUpDown(ZombieState) */

void ZombieLionDance::onEnterState_MoveUpDown(SharkMinion *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ZombieLaneChangingSubsystem *pZVar5;
  ZombieLionDanceProps *pZVar6;
  long *plVar7;
  code *pcVar8;
  Board *this;
  Point aPStack_60 [8];
  Point aPStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x800) = 0;
  iVar2 = SharkMinion::getRow(param_1);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  this = *(Board **)(gLawnApp + 0x9f0);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  if (iVar4 + -1 != iVar2) {
    Sexy::Point::Point(aPStack_60,iVar3,iVar2 + 1);
    cVar1 = Board::IsPitOfDoom(this,aPStack_60);
    if (cVar1 == '\0') {
      Sexy::Point::Point(aPStack_58,iVar3 + 1,iVar2 + 1);
      cVar1 = Board::IsPitOfDoom(this,aPStack_58);
      if (cVar1 == '\0') {
        if (iVar2 != 0) {
          Sexy::Point::Point(aPStack_60,iVar3,iVar2 + -1);
          cVar1 = Board::IsPitOfDoom(this,aPStack_60);
          if (cVar1 == '\0') {
            Sexy::Point::Point(aPStack_58,iVar3 + 1,iVar2 + -1);
            cVar1 = Board::IsPitOfDoom(this,aPStack_58);
            if (cVar1 == '\0') {
              iVar3 = (**(code **)(*(long *)param_1 + 0x300))(param_1,2);
              if (iVar3 == 0) {
                iVar3 = 1;
                goto LAB_0463b83c;
              }
              goto LAB_0463b838;
            }
          }
        }
        iVar3 = 1;
        goto LAB_0463b83c;
      }
    }
  }
LAB_0463b838:
  iVar3 = -1;
LAB_0463b83c:
  pZVar5 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar6 = Zombie::GetProps<ZombieLionDanceProps>((Zombie *)param_1);
                    /* WARNING: Load size is inaccurate */
  ZombieLaneChangingSubsystem::ForceLaneChange
            (*(ZombieLaneChangingSubsystem **)(pZVar6 + 0x210),0x40a00000,pZVar5,param_1,
             iVar2 + iVar3,1);
  plVar7 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
  pcVar8 = *(code **)(*plVar7 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar8)(plVar7,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLionDance::onExitState_MoveUpDown(ZombieState) */

void ZombieLionDance::onExitState_MoveUpDown(Zombie *param_1)

{
  ZombieLionDanceProps *pZVar1;
  ZombieLaneChangingSubsystem *this;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieLionDanceProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  this = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::RemoveZombie(this,param_1);
  return;
}


/* ZombieLionDance::onExitState_Attack(ZombieState) */

void ZombieLionDance::onExitState_Attack(Zombie *param_1)

{
  ZombieLionDanceProps *pZVar1;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieLionDanceProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  *(undefined4 *)(param_1 + 0x80c) = uVar2;
  return;
}


/* ZombieLionDance::HasReachMaxColumn() */

bool __thiscall ZombieLionDance::HasReachMaxColumn(ZombieLionDance *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ZombieLionDanceProps *pZVar4;
  float fVar5;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar3;
  pZVar4 = Zombie::GetProps<ZombieLionDanceProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x224);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar5 - 200.0 < (float)iVar2 * ((float)iVar1 + -0.5);
}


/* ZombieLionDance::updateState_Idle() */

void __thiscall ZombieLionDance::updateState_Idle(ZombieLionDance *this)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this[0x810] == (ZombieLionDance)0x0) {
    return;
  }
  cVar1 = HasReachMaxColumn(this);
  if (cVar1 != '\0') {
    fVar3 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
    fVar4 = (float)PVZ_Dt();
    fVar5 = *(float *)(this + 0x804) + fVar3 * fVar4;
    fVar3 = *(float *)(this + 0x800) + fVar3 * fVar4;
    *(float *)(this + 0x800) = fVar3;
    *(float *)(this + 0x804) = fVar5;
    if (*(float *)(this + 0x80c) <= fVar5) {
      uVar2 = 3;
    }
    else {
      if (fVar3 < *(float *)(this + 0x808)) {
        return;
      }
      uVar2 = 0x1f;
    }
    Zombie::setZombieState((Zombie *)this,uVar2,0);
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieLionDance::updateState_Walk() */

void __thiscall ZombieLionDance::updateState_Walk(ZombieLionDance *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = HasReachMaxColumn(this);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,3,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::findAttackTargets() */

void ZombieLionDance::findAttackTargets(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  SharkMinion *in_x0;
  undefined8 uVar5;
  undefined8 *puVar6;
  Plant *extraout_x0;
  long *extraout_x0_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [4];
  int local_34;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  (**(code **)(*(long *)in_x0 + 0x3a0))(auStack_30);
  iVar3 = SharkMinion::getRow(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = operator|(1,4);
  uVar4 = operator|(uVar5,2);
  (**(code **)(*(long *)in_x0 + 0xd0))(aRStack_38);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,uVar4,auStack_30,iVar3,iVar3 + local_34 + -1);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)in_x0,(RealObject *)*puVar6);
    if (cVar2 != '\0') {
      bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar6);
      if (bVar1) {
        nop();
        cVar2 = Zombie::canTargetPlant((Zombie *)in_x0,extraout_x0);
joined_r0x0463be9c:
        if (cVar2 == '\0') goto LAB_0463bdd0;
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar6);
        if (bVar1) {
          nop();
          cVar2 = (**(code **)(*extraout_x0_00 + 0x218))();
          goto joined_r0x0463be9c;
        }
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar6);
        if (!bVar1) goto LAB_0463bdd0;
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )in_x8,(RtWeakPtr *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
LAB_0463bdd0:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::StaticClassInit() */

void ZombieLionDance::StaticClassInit(void)

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
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieLionDance");
      (*pcVar4)(plVar1,asStack_150,FUN_0463c154,0x818,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLionDance,void(ZombieLionDance::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieLionDance,void(ZombieLionDance::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLionDance,void(ZombieLionDance::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LionDance_MoveUpDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0463bef8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLionDance::StaticGetClass() */

long * ZombieLionDance::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLionDance",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLionDance::GetClass() const */

long * ZombieLionDance::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLionDance",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLionDance::onZombieInitialize() */

void __thiscall ZombieLionDance::onZombieInitialize(ZombieLionDance *this)

{
  ZombieLionDanceProps *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x810] = (ZombieLionDance)0x0;
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  pZVar1 = Zombie::GetProps<ZombieLionDanceProps>((Zombie *)this);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(this + 0x808) = uVar2;
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  *(undefined4 *)(this + 0x80c) = uVar2;
  return;
}


/* ZombieLionDance::onPlaceOnBoard() */

void __thiscall ZombieLionDance::onPlaceOnBoard(ZombieLionDance *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  this[0x810] = (ZombieLionDance)0x1;
  return;
}


/* ZombieLionDance::registerForEvents() */

void __thiscall ZombieLionDance::registerForEvents(ZombieLionDance *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieMoveUpDownFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieLionDance,void(ZombieLionDance::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieLaneChangeEnded,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDance::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieLionDance::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
  (**(code **)(*plVar3 + 0x1e8))(asStack_10);
  cVar1 = std::operator==(param_3,asStack_10);
  if ((cVar1 == '\0') || (bVar2 = std::operator==(param_4,"lion_fire"), !bVar2)) {
    std::string::~string(asStack_10);
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  else {
    std::string::~string(asStack_10);
    PlayFireEffect((ZombieLionDance *)param_1);
    std::string::string(asStack_10,"Play_Plant_FireGourd_Attack");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLionDance::onAttackAnimStopped(std::string const&) */

void __thiscall ZombieLionDance::onAttackAnimStopped(ZombieLionDance *this,string *param_1)

{
  char cVar1;
  
  cVar1 = HasReachMaxColumn(this);
  if (cVar1 == '\0') {
    Zombie::onAttackAnimStopped((Zombie *)this,param_1);
    return;
  }
  cVar1 = Zombie::isInState((Zombie *)this,3);
  if (cVar1 != '\0') {
    if (*(float *)(this + 0x808) <= *(float *)(this + 0x800)) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  return;
}

