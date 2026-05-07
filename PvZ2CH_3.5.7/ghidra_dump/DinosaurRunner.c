// Class: DinosaurRunner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::Move(float, float) */

void __thiscall DinosaurRunner::Move(DinosaurRunner *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_Dt();
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = (float)*puVar1;
  local_10 = *(float *)(puVar1 + 1) + param_2 * fVar2;
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 + param_1 * fVar2);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::isValidZombieTarget(Zombie*) */

byte __thiscall DinosaurRunner::isValidZombieTarget(DinosaurRunner *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 != '\0')) ||
      (cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0')) ||
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* DinosaurRunner::CanAttackPlants() */

bool __thiscall DinosaurRunner::CanAttackPlants(DinosaurRunner *this)

{
  return *(int *)(this + 0x240) < *(int *)(this + 0x248);
}


/* DinosaurRunner::CanAttackZombies() */

bool __thiscall DinosaurRunner::CanAttackZombies(DinosaurRunner *this)

{
  return *(int *)(this + 0x23c) < *(int *)(this + 0x244);
}


/* DinosaurRunner::NumPlantsKilledInc() */

void __thiscall DinosaurRunner::NumPlantsKilledInc(DinosaurRunner *this)

{
  *(int *)(this + 0x240) = *(int *)(this + 0x240) + 1;
  return;
}


/* DinosaurRunner::NumZombiesKilledInc() */

void __thiscall DinosaurRunner::NumZombiesKilledInc(DinosaurRunner *this)

{
  *(int *)(this + 0x23c) = *(int *)(this + 0x23c) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::SetRunRight(float) */

void __thiscall DinosaurRunner::SetRunRight(DinosaurRunner *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  fVar3 = (float)Sexy::Rand(param_1);
  local_18 = CONCAT44(local_18._4_4_,fVar3 - param_1 * 0.5);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  Creature::setState((Creature *)this,10,0);
  lVar1 = ___stack_chk_guard;
  this[0x268] = (DinosaurRunner)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::SetSmokeEnabled(bool) */

void __thiscall DinosaurRunner::SetSmokeEnabled(DinosaurRunner *this,bool param_1)

{
  this[0x238] = (DinosaurRunner)param_1;
  return;
}


/* DinosaurRunner::TurnLeftToRight() */

void __thiscall DinosaurRunner::TurnLeftToRight(DinosaurRunner *this)

{
  int iVar1;
  
  iVar1 = Creature::GetFacing((Creature *)this);
  if (iVar1 != 0) {
    return;
  }
  Creature::setState((Creature *)this,9,0);
  return;
}


/* DinosaurRunner::ScaredAway(BoardEntity*) */

void DinosaurRunner::ScaredAway(BoardEntity *param_1)

{
  int iVar1;
  
  iVar1 = Creature::GetFacing((Creature *)param_1);
  if (iVar1 != 0) {
    return;
  }
  Creature::setState((Creature *)param_1,9,0);
  return;
}


/* DinosaurRunner::CanBeScaredAway() */

byte __thiscall DinosaurRunner::CanBeScaredAway(DinosaurRunner *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Creature::isInState((Creature *)this,9);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = Creature::isInState((Creature *)this,10);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* DinosaurRunner::GetSmokeRenderOrder() */

int __thiscall DinosaurRunner::GetSmokeRenderOrder(DinosaurRunner *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = (**(code **)(*(long *)this + 0x170))(this);
  return iVar2 + iVar1;
}


/* DinosaurRunner::GetSmokeTimeInterval() */

void DinosaurRunner::GetSmokeTimeInterval(void)

{
  RandRangeFloat(0.15,0.35);
  return;
}


/* DinosaurRunner::GetSmokeAnimScale() */

void DinosaurRunner::GetSmokeAnimScale(void)

{
  RandRangeFloat(0.65,1.35);
  return;
}


/* DinosaurRunner::GetSmokeOffsetY() */

void __thiscall DinosaurRunner::GetSmokeOffsetY(DinosaurRunner *this)

{
  RandRangeFloat(*(float *)(this + 0x230) - 1.0,*(float *)(this + 0x230) + 1.0);
  return;
}


/* DinosaurRunner::onTurnLeftToRightAnimDone(std::string const&) */

void DinosaurRunner::onTurnLeftToRightAnimDone(string *param_1)

{
  int iVar1;
  code *pcVar2;
  
  Creature::SetDrawIgnoreFacing((Creature *)param_1,true);
  pcVar2 = *(code **)(*(long *)param_1 + 0x1e8);
  iVar1 = Creature::GetFacing((Creature *)param_1);
  (*pcVar2)(param_1,iVar1 == 0);
  Creature::setState((Creature *)param_1,10,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::CalcAttackRect() const */

void DinosaurRunner::CalcAttackRect(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Creature *in_x0;
  long lVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar4 + 0x54));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar7 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_04833030(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar6 = (float)Creature::GetFacingMultiplier(in_x0);
  bVar3 = local_8 == ___stack_chk_guard;
  *(int *)in_x8 = (int)((fVar5 - (float)(iVar1 / 2)) + (float)iVar2 * fVar6);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar7) - (float)*(int *)(in_x8 + 0xc));
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::updateState_Idle() */

void __thiscall DinosaurRunner::updateState_Idle(DinosaurRunner *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x218)) {
    return;
  }
  Creature::setState((Creature *)this,8,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::onEnterState_RunLeft(DinoRunnerState) */

void DinosaurRunner::onEnterState_RunLeft(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::setUseAnimTranslation(param_1,false);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Runner::PlayRunLeft(pDVar1,aRStack_50);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::onEnterState_RunRight(DinoRunnerState) */

void DinosaurRunner::onEnterState_RunRight(Creature *param_1)

{
  bool bVar1;
  DinosaurAnimRig_Runner *this;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::setUseAnimTranslation(param_1,false);
  this = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Runner::PlayRunRight(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::string(asStack_58,"run_out");
  PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x22c) * 0.6;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::GenerateSmoke(std::string const&, float, float) */

void __thiscall
DinosaurRunner::GenerateSmoke(DinosaurRunner *this,string *param_1,float param_2,float param_3)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_DINO_SMOKE");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  iVar1 = GetSmokeRenderOrder(this);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar3 + 1);
  fStack_14 = (float)((ulong)*puVar3 >> 0x20);
  local_18 = (float)*puVar3;
  _local_18 = CONCAT44(param_3 + fStack_14,param_2 + local_18);
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1);
  GetSmokeAnimScale();
  (**(code **)(*(long *)this_00 + 0x80))(this_00);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,false);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::updateState_TurnLeftToRight() */

void __thiscall DinosaurRunner::updateState_TurnLeftToRight(DinosaurRunner *this)

{
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x238] != (DinosaurRunner)0x0) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x220) <= fVar1)) {
    std::string::string(asStack_10,"smoke2");
    fVar2 = *(float *)(this + 0x234);
    fVar1 = (float)GetSmokeOffsetY(this);
    GenerateSmoke(this,asStack_10,fVar2,fVar1);
    std::string::~string(asStack_10);
    nop();
    fVar1 = (float)GetSmokeTimeInterval();
    *(float *)(this + 0x220) = *(float *)(this + 0x220) + fVar1 * 1.5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::DinosaurRunner() */

void __thiscall DinosaurRunner::DinosaurRunner(DinosaurRunner *this)

{
  Dinosaur::Dinosaur((Dinosaur *)this);
  this[0x238] = (DinosaurRunner)0x1;
  *(undefined ***)this = &PTR_GetClass_06907200;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurRunner_069075b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  return;
}


/* DinosaurRunner::StaticNew() */

DinosaurRunner * DinosaurRunner::StaticNew(void)

{
  DinosaurRunner *this;
  
  this = ::operator_new(0x270);
  DinosaurRunner(this);
  return this;
}


/* DinosaurRunner::onEnterState_Idle(CreatureState) */

void DinosaurRunner::onEnterState_Idle(long param_1)

{
  DinosaurRunnerPropertySheet *pDVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pDVar1 = Creature::GetProps<DinosaurRunnerPropertySheet>();
  *(float *)(param_1 + 0x218) = fVar2 + *(float *)(pDVar1 + 0xac);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::updateState_RunLeft() */

void __thiscall DinosaurRunner::updateState_RunLeft(DinosaurRunner *this)

{
  DinosaurRunnerPropertySheet *pDVar1;
  float fVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x238] != (DinosaurRunner)0x0) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x220) <= fVar2)) {
    std::string::string(asStack_10,"smoke1");
    fVar2 = (float)GetSmokeOffsetY(this);
    GenerateSmoke(this,asStack_10,0.0,fVar2);
    std::string::~string(asStack_10);
    nop();
    fVar2 = (float)GetSmokeTimeInterval();
    *(float *)(this + 0x220) = *(float *)(this + 0x220) + fVar2;
  }
  pDVar1 = Creature::GetProps<DinosaurRunnerPropertySheet>();
  if (pDVar1 != (DinosaurRunnerPropertySheet *)0x0) {
    Move(this,-*(float *)(pDVar1 + 0xa8),0.0);
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x228) <= fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x228) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::updateState_RunRight() */

void __thiscall DinosaurRunner::updateState_RunRight(DinosaurRunner *this)

{
  DinosaurRunnerPropertySheet *pDVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetProps<DinosaurRunnerPropertySheet>();
  if (pDVar1 != (DinosaurRunnerPropertySheet *)0x0) {
    Move(this,*(float *)(pDVar1 + 0xa8),0.0);
  }
  if ((this[0x238] != (DinosaurRunner)0x0) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x220) <= fVar2)) {
    std::string::string(asStack_10,"smoke2");
    fVar3 = *(float *)(this + 0x234);
    fVar2 = (float)GetSmokeOffsetY(this);
    GenerateSmoke(this,asStack_10,fVar3,fVar2);
    std::string::~string(asStack_10);
    nop();
    fVar2 = (float)GetSmokeTimeInterval();
    *(float *)(this + 0x220) = *(float *)(this + 0x220) + fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::onPlaceOnBoard() */

void __thiscall DinosaurRunner::onPlaceOnBoard(DinosaurRunner *this)

{
  DinosaurRunnerPropertySheet *pDVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = uVar2;
  fVar3 = (float)PVZ_T();
  *(undefined4 *)(this + 0x244) = 1;
  *(undefined4 *)(this + 0x248) = 1;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x230) = 0xc2000000;
  *(undefined4 *)(this + 0x22c) = 0x3e19999a;
  *(undefined4 *)(this + 0x224) = 0x3e800000;
  *(float *)(this + 0x220) = fVar3 + 0.02;
  *(undefined4 *)(this + 0x234) = 0xc2600000;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x250));
  this[0x268] = (DinosaurRunner)0x0;
  pDVar1 = Creature::GetProps<DinosaurRunnerPropertySheet>();
  if (pDVar1 != (DinosaurRunnerPropertySheet *)0x0) {
    uVar2 = RandRangeInt(*(int *)(pDVar1 + 0xb4),*(int *)(pDVar1 + 0xb0));
    *(undefined4 *)(this + 0x244) = uVar2;
    uVar2 = RandRangeInt(*(int *)(pDVar1 + 0xbc),*(int *)(pDVar1 + 0xb8));
    *(undefined4 *)(this + 0x248) = uVar2;
  }
  Creature::setState((Creature *)this,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::onEnterState_TurnLeftToRight(DinoRunnerState) */

void DinosaurRunner::onEnterState_TurnLeftToRight(Creature *param_1)

{
  bool bVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTurnLeftToRightAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Runner::PlayTurnLeftToRight(pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x22c);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunner::~DinosaurRunner() */

void __thiscall DinosaurRunner::~DinosaurRunner(DinosaurRunner *this)

{
  *(undefined ***)this = &PTR_GetClass_06907200;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurRunner_069075b8;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x250));
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurRunner::~DinosaurRunner() */

void __thiscall DinosaurRunner::~DinosaurRunner(DinosaurRunner *this)

{
  ~DinosaurRunner(this + -0x10);
  return;
}


/* DinosaurRunner::~DinosaurRunner() */

void __thiscall DinosaurRunner::~DinosaurRunner(DinosaurRunner *this)

{
  ~DinosaurRunner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurRunner::~DinosaurRunner() */

void __thiscall DinosaurRunner::~DinosaurRunner(DinosaurRunner *this)

{
  ~DinosaurRunner(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::FindTargetPlant() */

void DinosaurRunner::FindTargetPlant(void)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)in_x0 + 0x1f8))(auStack_30);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  uVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar2 + 4));
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,auStack_30
             ,uVar1,uVar1);
  lVar2 = FUN_04832f7c(local_20,local_18);
  if (lVar2 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    FUN_04832f88(local_20,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::IsInTargetHistory(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall DinosaurRunner::IsInTargetHistory(DinosaurRunner *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x250);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::FindTargetZombie() */

void DinosaurRunner::FindTargetZombie(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar4;
  undefined8 *puVar5;
  RtWeakPtrBase *pRVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)in_x0 + 0x1f8))(auStack_48);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  uVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar4 + 4));
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,2,auStack_48,uVar3,uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    cVar2 = (**(code **)(*(long *)in_x0 + 0x350))();
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 &local_20,(RtWeakPtr *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  lVar4 = FUN_04832f90(local_20,local_18);
  if (lVar4 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    pRVar6 = (RtWeakPtrBase *)FUN_0483302c(local_20,lVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar6);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::AddToHistoryTargets(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall DinosaurRunner::AddToHistoryTargets(DinosaurRunner *this,RtWeakPtr *param_2)

{
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x250),
             (BoardEntity **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunner::StaticClassInit() */

void DinosaurRunner::StaticClassInit(void)

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
  Delegate1<DinoRunnerState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<DinoRunnerState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurRunner");
      (*pcVar4)(plVar1,asStack_150,FUN_0483597c,0x270,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<DinoRunnerState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurRunner,void(DinosaurRunner::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINORUNNER_RunLeft");
  StateDefinition<DinoRunnerState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04835438(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurRunner,void(DinosaurRunner::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINORUNNER_TurnLeftToRight");
  StateDefinition<DinoRunnerState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04835438(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurRunner,void(DinosaurRunner::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<DinoRunnerState>::
  Delegate1<DinosaurRunner,void(DinosaurRunner::*)(DinoRunnerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINORUNNER_RunRight");
  StateDefinition<DinoRunnerState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04835438(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurRunner::StaticGetClass() */

long * DinosaurRunner::StaticGetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurRunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRunner::GetClass() const */

long * DinosaurRunner::GetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurRunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRunner::CalcRenderOrder() const */

void __thiscall DinosaurRunner::CalcRenderOrder(DinosaurRunner *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (this[0x268] == (DinosaurRunner)0x0) {
    Creature::CalcRenderOrder((Creature *)this);
    return;
  }
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to DinosaurRunner::CalcRenderOrder() const */

void __thiscall DinosaurRunner::CalcRenderOrder(DinosaurRunner *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}

