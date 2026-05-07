// Class: GridItemCardGameZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::PlayDeathAnim() */

void __thiscall GridItemCardGameZombie::PlayDeathAnim(GridItemCardGameZombie *this)

{
  GridItemBreakableTargetProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  this[0x1bd] = (GridItemCardGameZombie)0x1;
  lStack_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDeathAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,pGVar1 + 0xe8,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::PickCardStart(int) */

void __thiscall GridItemCardGameZombie::PickCardStart(GridItemCardGameZombie *this,int param_1)

{
  *(int *)(this + 0x1c4) = param_1;
  return;
}


/* GridItemCardGameZombie::ShouldBlockLevelCompletion() const */

undefined8 GridItemCardGameZombie::ShouldBlockLevelCompletion(void)

{
  return 1;
}


/* GridItemCardGameZombie::EnableDrawHealthBar(bool) */

void __thiscall
GridItemCardGameZombie::EnableDrawHealthBar(GridItemCardGameZombie *this,bool param_1)

{
  this[0x1cc] = (GridItemCardGameZombie)param_1;
  return;
}


/* GridItemCardGameZombie::DoAction(GridItemCardGameZombieAction*) */

GridItemCardGameZombie * __thiscall
GridItemCardGameZombie::DoAction(GridItemCardGameZombie *this,GridItemCardGameZombieAction *param_1)

{
  if (param_1 != (GridItemCardGameZombieAction *)0x0) {
    this = (GridItemCardGameZombie *)(**(code **)(*(long *)param_1 + 8))(param_1);
  }
  return this;
}


/* GridItemCardGameZombie::EndAction(GridItemCardGameZombieAction*) */

GridItemCardGameZombie * __thiscall
GridItemCardGameZombie::EndAction
          (GridItemCardGameZombie *this,GridItemCardGameZombieAction *param_1)

{
  if (param_1 != (GridItemCardGameZombieAction *)0x0) {
    this = (GridItemCardGameZombie *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  return this;
}


/* GridItemCardGameZombie::onAttackAnimDone(std::string const&) */

void GridItemCardGameZombie::onAttackAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x300))();
  (**(code **)(*(long *)param_1 + 0x330))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  return;
}


/* GridItemCardGameZombie::CloseIntentiontips() */

void __thiscall GridItemCardGameZombie::CloseIntentiontips(GridItemCardGameZombie *this)

{
  if (*(long *)(this + 0x200) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x200));
    *(undefined8 *)(this + 0x200) = 0;
  }
  return;
}


/* GridItemCardGameZombie::TouchBegan(Sexy::Touch const&) */

void GridItemCardGameZombie::TouchBegan(Touch *param_1)

{
  (**(code **)(*(long *)param_1 + 0x388))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombie::TouchBegan");
  return;
}


/* GridItemCardGameZombie::TouchEnded(Sexy::Touch const&) */

void GridItemCardGameZombie::TouchEnded(Touch *param_1)

{
  (**(code **)(*(long *)param_1 + 0x390))();
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombie::TouchEnded");
  return;
}


/* GridItemCardGameZombie::TouchesCanceled() */

void __thiscall GridItemCardGameZombie::TouchesCanceled(GridItemCardGameZombie *this)

{
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x1d8] = (GridItemCardGameZombie)0x0;
  (**(code **)(*(long *)this + 0x390))();
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombie::TouchesCanceled");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::onTakeDamage(DamageInfo const&) */

void GridItemCardGameZombie::onTakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GridItemBreakableTargetProps *pGVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  PopAnimRig *pPVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1[0x1bc] == (DamageInfo)0x0) {
    GridItemAnimation::GetAnimRig();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (bVar1) {
      pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
      lVar5 = FUN_05474184(pGVar4 + 0xe0);
      if (lVar5 != 0) {
        GridItemAnimation::GetAnimRig();
        pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onHitAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        PopAnimRig::PlayAndStop(pPVar7,pGVar4 + 0xe0,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        param_1[0x1bc] = (DamageInfo)0x1;
      }
      lVar5 = *(long *)param_1;
      if (*(code **)(lVar5 + 0x1d8) == GridItem::GetHitpoints) {
        fVar9 = (float)GridItem::GetHitpoints((GridItem *)param_1);
      }
      else {
        fVar9 = (float)(**(code **)(lVar5 + 0x1d8))();
        lVar5 = *(long *)param_1;
      }
      if (*(code **)(lVar5 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
      }
      else {
        fVar10 = (float)(**(code **)(lVar5 + 0x1e0))();
      }
      GridItemAnimation::GetAnimRig();
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
      iVar3 = DamageLifetime::OnHealthChanged
                        ((DamageLifetime *)(pGVar4 + 0x110),fVar9,fVar10,(PopAnimRig *)pRVar6,
                         *(int *)(param_1 + 0x1c0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      if (*(int *)(param_1 + 0x1c0) != iVar3) {
        (**(code **)(*(long *)param_1 + 0x2c8))(param_1);
        *(int *)(param_1 + 0x1c0) = iVar3;
        cVar2 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)param_1);
        if (cVar2 != '\0') {
          iVar3 = *(int *)(param_1 + 0x1c0);
          GridItemAnimation::GetLinkedAnimRig();
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
          DamageLifetime::SetAnimRigToPhase
                    ((DamageLifetime *)(pGVar4 + 0x110),iVar3,(PopAnimRig *)pRVar6);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        }
      }
    }
  }
  uVar8 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1b8) = uVar8;
  (**(code **)(*(long *)param_1 + 0x288))(0x3e800000,param_1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::onUpdate() */

void __thiscall GridItemCardGameZombie::onUpdate(GridItemCardGameZombie *this)

{
  GridItemBreakableTargetProps *pGVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fStack_10;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  if (pGVar1[0x100] != (GridItemBreakableTargetProps)0x0) {
    lVar3 = *(long *)this;
    if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      lVar3 = *(long *)this;
    }
    if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
    }
    if (((fVar4 < fVar5) && (fVar4 = (float)PVZ_EOT(), *(float *)(this + 0x1b8) < fVar4)) &&
       (fVar4 = (float)PVZ_T(), *(float *)(pGVar1 + 0x108) < fVar4 - *(float *)(this + 0x1b8))) {
      lVar3 = *(long *)this;
      if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fStack_10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
      }
      else {
        fStack_10 = (float)(**(code **)(lVar3 + 0x1e0))(this);
        lVar3 = *(long *)this;
      }
      if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
        fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      }
      fVar5 = (float)PVZ_Dt();
      fStack_c = fVar4 + *(float *)(pGVar1 + 0x104) * fVar5;
      pfVar2 = eastl::min_alt<float>(&fStack_10,&fStack_c);
      if (lStack_8 == ___stack_chk_guard) {
        FUN_03e22da0(*pfVar2,this + 0x128);
        return;
      }
      goto LAB_03e24560;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
LAB_03e24560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::GetMaxHitpoints() const */

float __thiscall GridItemCardGameZombie::GetMaxHitpoints(GridItemCardGameZombie *this)

{
  float fVar1;
  
  fVar1 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  return fVar1 * (float)*(int *)(this + 0x50);
}


/* GridItemCardGameZombie::EnemyActionEnd() */

void __thiscall GridItemCardGameZombie::EnemyActionEnd(GridItemCardGameZombie *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(GridItemCardGameZombieAction **)(this + 0x1f8) == (GridItemCardGameZombieAction *)0x0) {
    return;
  }
  cVar1 = GridItemCardGameZombieAction::IsDone(*(GridItemCardGameZombieAction **)(this + 0x1f8));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 0x1e0);
    iVar2 = FUN_04e1446c(uVar5,*(undefined8 *)(this + 0x1e8));
    if (0 < iVar2) {
      lVar6 = 0;
      while( true ) {
        puVar3 = (undefined8 *)FUN_04e14478(uVar5,lVar6);
        (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3);
        if (iVar2 <= (int)(lVar6 + 1)) break;
        uVar5 = *(undefined8 *)(this + 0x1e0);
        lVar6 = lVar6 + 1;
      }
    }
    (**(code **)(**(long **)(this + 0x1f8) + 0x20))(*(long **)(this + 0x1f8));
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemCardGameZombie::EnemyActionEnd() m_currentAction->WaitIntention")
    ;
    return;
  }
  GridItemCardGameZombieAction::Reset(*(GridItemCardGameZombieAction **)(this + 0x1f8));
  uVar5 = *(undefined8 *)(this + 0x1e0);
  iVar2 = FUN_04e1446c(uVar5,*(undefined8 *)(this + 0x1e8));
  if (0 < iVar2) {
    lVar6 = 0;
    while( true ) {
      plVar4 = (long *)FUN_04e14478(uVar5,lVar6);
      plVar4 = (long *)*plVar4;
      if (*(long **)(this + 0x1f8) != plVar4) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      if (iVar2 <= (int)(lVar6 + 1)) break;
      uVar5 = *(undefined8 *)(this + 0x1e0);
      lVar6 = lVar6 + 1;
    }
  }
  uVar5 = (**(code **)(*(long *)this + 800))(this);
  *(undefined8 *)(this + 0x1f8) = uVar5;
  Sexy::OutputDebugStrF
            ((wchar_t *)"GridItemCardGameZombie::EnemyActionEnd() m_currentAction = PickAction()");
  return;
}


/* GridItemCardGameZombie::onDraw(Sexy::Graphics*) */

void __thiscall GridItemCardGameZombie::onDraw(GridItemCardGameZombie *this,Graphics *param_1)

{
  char cVar1;
  
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  if (this[0x1cc] != (GridItemCardGameZombie)0x0) {
    (**(code **)(*(long *)this + 0x338))(this,param_1);
  }
  if ((*(GridItemCardGameZombieAction **)(this + 0x1f8) != (GridItemCardGameZombieAction *)0x0) &&
     (cVar1 = GridItemCardGameZombieAction::IsShowIntention
                        (*(GridItemCardGameZombieAction **)(this + 0x1f8)), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x340))(this,param_1);
  }
  return;
}


/* GridItemCardGameZombie::EnemyActionStart() */

void __thiscall GridItemCardGameZombie::EnemyActionStart(GridItemCardGameZombie *this)

{
  char cVar1;
  ulong uVar2;
  
  if ((*(GridItemCardGameZombieAction **)(this + 0x1f8) != (GridItemCardGameZombieAction *)0x0) &&
     (cVar1 = GridItemCardGameZombieAction::IsReady
                        (*(GridItemCardGameZombieAction **)(this + 0x1f8)), cVar1 != '\0')) {
    uVar2 = ImageLib::Image::GetWidth(*(Image **)(this + 0x1f8));
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemCardGameZombie::EnemyActionStart() index = %d round = %d",
               uVar2 & 0xffffffff,(ulong)*(uint *)(this + 0x1c4));
    (**(code **)(*(long *)this + 0x2f8))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::StaticClassInit() */

void GridItemCardGameZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_04e15814,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::StaticGetClass() */

long * GridItemCardGameZombie::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombie::GetClass() const */

long * GridItemCardGameZombie::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombie::IsCurrentActionDone() */

undefined8 __thiscall GridItemCardGameZombie::IsCurrentActionDone(GridItemCardGameZombie *this)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(GridItemCardGameZombieAction **)(this + 0x1f8) != (GridItemCardGameZombieAction *)0x0) &&
      (cVar1 = GridItemCardGameZombieAction::IsDone
                         (*(GridItemCardGameZombieAction **)(this + 0x1f8)), cVar1 == '\0')) &&
     (cVar1 = GridItemCardGameZombieAction::IsIntention
                        (*(GridItemCardGameZombieAction **)(this + 0x1f8)), cVar1 == '\0')) {
    uVar2 = GridItemCardGameZombieAction::IsCooldown
                      (*(GridItemCardGameZombieAction **)(this + 0x1f8));
    return uVar2;
  }
  return 1;
}


/* GridItemCardGameZombie::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemCardGameZombie::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::SetLayerVisibility(std::string, bool) */

void __thiscall
GridItemCardGameZombie::SetLayerVisibility(undefined8 param_1,string *param_2,bool param_3)

{
  PopAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PopAnimRig::SetLayerVisibility(this,param_2,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::onTouchEvent(Sexy::Touch const&) */

char __thiscall GridItemCardGameZombie::onTouchEvent(GridItemCardGameZombie *this,Touch *param_1)

{
  char cVar1;
  GridItemCardGameZombie GVar2;
  TRect<int> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    if ((*(long *)(this + 0x1d0) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      fVar5 = (float)FUN_04e149f0((float)*(int *)(param_1 + 0x10));
      fVar6 = (float)FUN_04e149f0((float)*(int *)(param_1 + 0x14));
      pTVar3 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      cVar1 = Sexy::TRect<int>::Contains(pTVar3,(int)fVar5,(int)fVar6);
      if (cVar1 != '\0') {
        *(undefined8 *)(this + 0x1d0) = *(undefined8 *)param_1;
        pcVar4 = *(code **)(*(long *)this + 0x350);
        this[0x1d8] = (GridItemCardGameZombie)0x1;
        (*pcVar4)(this,param_1);
        return cVar1;
      }
    }
    else if (*(long *)(this + 0x1d0) == *(long *)param_1) {
      fVar5 = (float)FUN_04e149f0((float)*(int *)(param_1 + 0x10));
      fVar6 = (float)FUN_04e149f0((float)*(int *)(param_1 + 0x14));
      pTVar3 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      GVar2 = (GridItemCardGameZombie)Sexy::TRect<int>::Contains(pTVar3,(int)fVar5,(int)fVar6);
      this[0x1d8] = GVar2;
      (**(code **)(*(long *)this + 0x358))(this,param_1);
      if (*(int *)(param_1 + 0x30) == 3) {
        *(undefined8 *)(this + 0x1d0) = 0;
        this[0x1d8] = (GridItemCardGameZombie)0x0;
        (**(code **)(*(long *)this + 0x360))(this,param_1);
        return cVar1;
      }
      if (*(int *)(param_1 + 0x30) == 4) {
        *(undefined8 *)(this + 0x1d0) = 0;
        this[0x1d8] = (GridItemCardGameZombie)0x0;
        return cVar1;
      }
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::onGridItemInitialize() */

void __thiscall GridItemCardGameZombie::onGridItemInitialize(GridItemCardGameZombie *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  FUN_04e146dc(this + 0x24);
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_50,"butter");
  (*pcVar2)(this,asStack_50,0);
  std::string::~string(asStack_50);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_50,"ink");
  (*pcVar2)(this,asStack_50,0);
  std::string::~string(asStack_50);
  nop();
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x380);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemCardGameZombie,void(GridItemCardGameZombie::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  *(undefined4 *)(this + 0x1c4) = 0;
  this[0x1cc] = (GridItemCardGameZombie)0x1;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x1d8] = (GridItemCardGameZombie)0x0;
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  *(undefined8 *)(this + 0x200) = 0;
  (**(code **)(*(long *)this + 0x1e0))(this);
  FUN_04e14454(this + 0x128);
  fVar3 = (float)GridItemAnimation::GetScale((GridItemAnimation *)this);
  GridItemProtectorShield::SetShieldHP((GridItemProtectorShield *)this,fVar3 + fVar3);
  (**(code **)(*(long *)this + 0x318))(this);
  uVar1 = (**(code **)(*(long *)this + 800))(this);
  *(undefined8 *)(this + 0x1f8) = uVar1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x300))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::GridItemCardGameZombie() */

void __thiscall GridItemCardGameZombie::GridItemCardGameZombie(GridItemCardGameZombie *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_069d65f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombie_069d69a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  return;
}


/* GridItemCardGameZombie::StaticNew() */

GridItemCardGameZombie * GridItemCardGameZombie::StaticNew(void)

{
  GridItemCardGameZombie *this;
  
  this = ::operator_new(0x208);
  GridItemCardGameZombie(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::registerEvents() */

void __thiscall GridItemCardGameZombie::registerEvents(GridItemCardGameZombie *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  CBMemberTranslatorX aCStack_b0 [24];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GridItemCardGameZombie,void(GridItemCardGameZombie::*)(int)>>
            ((MessageRouter *)puVar1,Message::CardGamePickCardStart,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGameEnemyActionStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGameEnemyActionEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e8);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGameRoundFinishStart,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x348);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_b0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)aRStack_c0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x368);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>
            (aDStack_38,aCStack_98);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,1,aRStack_b8,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::ShowIntentiontips(GridItemCardGameZombieAction*) */

void __thiscall
GridItemCardGameZombie::ShowIntentiontips
          (GridItemCardGameZombie *this,GridItemCardGameZombieAction *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  StoneLotteryItemTipUI *this_02;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (GridItemCardGameZombieAction *)0x0) &&
     (cVar2 = GridItemCardGameZombieAction::IsShowIntention(param_1), cVar2 != '\0')) {
    BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    GridItemCardGameZombieAction::GetDescription();
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e0a0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e0a0);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
    fVar7 = (float)FUN_04e149e0(*(float *)(this + 0x18) + 20.0);
    fVar8 = (float)FUN_04e149e0((float)(-0x32 - iVar3) + *(float *)(this + 0x1c));
    Sexy::Insets::Insets(aIStack_18,(int)fVar7,(int)fVar8,(int)(float)iVar4,(int)(float)iVar5);
    lVar6 = *(long *)(this + 0x200);
    if (lVar6 == 0) {
      this_02 = ::operator_new(0xe8);
      memset(this_02,0,0xe8);
      StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_02);
      uVar1 = *(uint *)(this_02 + 0x60);
      *(StoneLotteryItemTipUI **)(this + 0x200) = this_02;
      *(uint *)(this_02 + 0x60) = uVar1 | 0x10;
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_02);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x200));
      lVar6 = *(long *)(this + 0x200);
    }
    PuzzleTip::SetTip(lVar6,auStack_20);
    (**(code **)(**(long **)(this + 0x200) + 0x1a0))(*(long **)(this + 0x200),aIStack_18);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::DrawHealthBar(Sexy::Graphics*) */

void __thiscall
GridItemCardGameZombie::DrawHealthBar(GridItemCardGameZombie *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float *pfVar3;
  undefined8 uVar4;
  Image *pIVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_20 [2];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)FUN_04e14a00(0x40200000);
  fVar9 = (float)FUN_04e14a00(0x40000000);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e068);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  fVar12 = (float)iVar1;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e068);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  lVar6 = *(long *)this;
  fVar13 = fVar12 - fVar8 * 2.0;
  local_20[0] = 0;
  iVar7 = (int)((float)iVar1 - fVar9 * 2.0);
  if (*(code **)(lVar6 + 0x1d8) == GridItem::GetHitpoints) {
    fVar10 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar10 = (float)(**(code **)(lVar6 + 0x1d8))();
    lVar6 = *(long *)this;
  }
  local_18[0] = (float)(**(code **)(lVar6 + 0x1e0))(this);
  local_18[0] = fVar10 / local_18[0];
  pfVar3 = eastl::max_alt<float>((float *)local_20,local_18);
  local_18[0] = *pfVar3 * fVar13;
  local_20[0] = 0;
  pfVar3 = eastl::max_alt<float>((float *)local_20,local_18);
  fVar14 = *pfVar3;
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_20,param_1);
  fVar10 = (float)FUN_04e149e0(*(float *)(this + 0x18) - 55.0);
  fVar11 = (float)FUN_04e149e0(*(float *)(this + 0x1c) + 15.0);
  Sexy::Insets::Insets((Insets *)local_18,(int)fVar10,(int)fVar11,(int)fVar12,iVar1);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e068);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar4);
  fVar10 = (float)FUN_04e149e0(*(float *)(this + 0x18) - 55.0);
  fVar11 = (float)FUN_04e149e0(*(float *)(this + 0x1c) + 15.0);
  Sexy::Graphics::ClipRect(param_1,(int)(fVar10 + fVar8),(int)(fVar11 + fVar9),(int)fVar14,iVar7);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9def0);
  fVar10 = (float)FUN_04e149e0(*(float *)(this + 0x18) - 55.0);
  fVar11 = (float)FUN_04e149e0(*(float *)(this + 0x1c) + 15.0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)(fVar10 + fVar8),(int)(fVar11 + fVar9),(int)fVar13,iVar7);
  Sexy::Color::Color((Color *)local_18,0);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  fVar8 = (float)FUN_04e149e0(*(float *)(this + 0x18) - 55.0);
  iVar7 = FUN_04e149cc(2);
  fVar9 = (float)FUN_04e149e0(*(float *)(this + 0x1c) + 15.0);
  iVar2 = FUN_04e149cc(4);
  Sexy::Graphics::FillRect
            (param_1,(int)((fVar8 + fVar12 * 0.5) - (float)iVar7),(int)fVar9,iVar2,iVar1);
  Sexy::Color::Color((Color *)local_18,-1);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::DrawIntention(Sexy::Graphics*) */

void __thiscall
GridItemCardGameZombie::DrawIntention(GridItemCardGameZombie *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  Image *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ddf0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ddf0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  fVar10 = (float)FUN_04e149e0(*(float *)(this + 0x18) + 20.0);
  fVar11 = (float)FUN_04e149e0((float)(-0x32 - iVar2) + *(float *)(this + 0x1c));
  Sexy::Insets::Insets
            ((Insets *)&local_28,(int)fVar10,(int)fVar11,(int)((float)iVar3 * 0.7),
             (int)((float)iVar4 * 0.7));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ddf0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,local_28,local_24,local_20,local_1c);
  pIVar7 = (Image *)GridItemCardGameZombieAction::GetIntentionImage
                              (*(GridItemCardGameZombieAction **)(this + 0x1f8));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9de68);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9de68);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  fVar10 = (float)FUN_04e149e0(*(float *)(this + 0x18) + 20.0);
  fVar11 = (float)FUN_04e149e0((float)(-0x32 - iVar2) + *(float *)(this + 0x1c));
  if (pIVar7 != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,(int)((float)(int)((float)iVar3 * 0.56) + fVar10),
               (int)((float)((int)((float)iVar4 * 0.56) / 3) + fVar11),(int)((float)iVar3 * 0.56),
               (int)((float)iVar4 * 0.56));
  }
  if ((*(GridItemCardGameZombieAction **)(this + 0x1f8) != (GridItemCardGameZombieAction *)0x0) &&
     (cVar1 = GridItemCardGameZombieAction::IsIntention
                        (*(GridItemCardGameZombieAction **)(this + 0x1f8)), cVar1 != '\0')) {
    uVar8 = Sexy::BaseTaskResource::GetType(*(BaseTaskResource **)(this + 0x1f8));
    Sexy::StrFormat(L"%d",auStack_30,uVar8 & 0xffffffff);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,4);
    WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar9,aCStack_18,4,1);
    FUN_05476c50(auStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombie::~GridItemCardGameZombie() */

void __thiscall GridItemCardGameZombie::~GridItemCardGameZombie(GridItemCardGameZombie *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  GridItemCardGameZombieAction *this_00;
  
  uVar3 = *(undefined8 *)(this + 0x1e0);
  *(undefined ***)this = &PTR_GetClass_069d65f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombie_069d69a0;
  iVar1 = FUN_04e1446c(uVar3,*(undefined8 *)(this + 0x1e8));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_04e14478(uVar3,lVar4);
      this_00 = (GridItemCardGameZombieAction *)*puVar2;
      if (this_00 != (GridItemCardGameZombieAction *)0x0) {
        GridItemCardGameZombieAction::~GridItemCardGameZombieAction(this_00);
        AK::FreeHook(this_00);
        puVar2 = (undefined8 *)FUN_04e14478(*(undefined8 *)(this + 0x1e0),lVar4);
        *puVar2 = 0;
      }
      lVar4 = lVar4 + 1;
      if (iVar1 <= (int)lVar4) break;
      uVar3 = *(undefined8 *)(this + 0x1e0);
    }
  }
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::~vector
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombie::~GridItemCardGameZombie() */

void __thiscall GridItemCardGameZombie::~GridItemCardGameZombie(GridItemCardGameZombie *this)

{
  ~GridItemCardGameZombie(this + -0x10);
  return;
}


/* GridItemCardGameZombie::~GridItemCardGameZombie() */

void __thiscall GridItemCardGameZombie::~GridItemCardGameZombie(GridItemCardGameZombie *this)

{
  ~GridItemCardGameZombie(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombie::~GridItemCardGameZombie() */

void __thiscall GridItemCardGameZombie::~GridItemCardGameZombie(GridItemCardGameZombie *this)

{
  ~GridItemCardGameZombie(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::PlayIdleAnim() */

void GridItemCardGameZombie::PlayIdleAnim(void)

{
  GridItemCardGameZombieProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameZombieProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::PlayAttackAnim() */

void GridItemCardGameZombie::PlayAttackAnim(void)

{
  GridItemCardGameZombieProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameZombieProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,pGVar1 + 0x138,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::PlayIntentionAnim() */

void GridItemCardGameZombie::PlayIntentionAnim(void)

{
  GridItemCardGameZombieProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameZombieProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0x140,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::GenerateZombieActions() */

void __thiscall GridItemCardGameZombie::GenerateZombieActions(GridItemCardGameZombie *this)

{
  int iVar1;
  GridItemCardGameZombieProps *pGVar2;
  GridItemCardGameZombieAction *this_00;
  GridItemCardGameZombieActionData *pGVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  GridItemCardGameZombieAction *local_30;
  GridItemCardGameZombieActionData aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieProps>();
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  iVar1 = FUN_04e14480(*(undefined8 *)(pGVar2 + 0x148),*(undefined8 *)(pGVar2 + 0x150));
  if (0 < iVar1) {
    uVar5 = 0;
    do {
      this_00 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(this_00);
      pcVar6 = (code *)**(undefined8 **)this_00;
      local_30 = this_00;
      pGVar3 = (GridItemCardGameZombieActionData *)
               FUN_04e144a8(*(undefined8 *)(pGVar2 + 0x148),uVar5);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_28,pGVar3);
      uVar4 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      (*pcVar6)(this_00,uVar4,aGStack_28);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_28);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_30);
    } while ((int)uVar5 < iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombie::PickAction() */

void __thiscall GridItemCardGameZombie::PickAction(GridItemCardGameZombie *this)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  Image *this_00;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  AndroidAsyncIOFile *this_01;
  undefined8 local_48;
  undefined8 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1e0));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1e0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_01 = (AndroidAsyncIOFile *)*puVar5;
    iVar3 = Sexy::AndroidAsyncIOFile::GetSize(this_01);
    Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_01);
    iVar4 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                      ((BaseResStreamsDriver *)this_01);
    if (iVar4 == 0) {
      ProbabilitySet<GridItemCardGameZombieAction*>::AddItem
                ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38,
                 (GridItemCardGameZombieAction *)this_01,iVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  uVar6 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                    ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombie::PickAction bucketSize = %d",uVar6);
  lVar7 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                    ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (lVar7 == 0) {
    this_00 = (Image *)0x0;
  }
  else {
    this_00 = (Image *)ProbabilitySet<GridItemCardGameZombieAction*>::PickItem
                                 ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
    uVar8 = ImageLib::Image::GetWidth(this_00);
    uVar9 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_00);
    uVar10 = Sexy::Font::GetLineSpacingOffset((Font *)this_00);
    bVar2 = GridItemCardGameZombieAction::IsDone((GridItemCardGameZombieAction *)this_00);
    Sexy::OutputDebugStrF
              ((wchar_t *)"PickAction index = %d intentCountDown = %d cooldown = %d isdone = %d",
               uVar8 & 0xffffffff,uVar9 & 0xffffffff,uVar10 & 0xffffffff,(ulong)bVar2);
  }
  ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet
            ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

