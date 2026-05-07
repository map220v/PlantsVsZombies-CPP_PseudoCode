// Class: GridItemEntityTargeting


/* GridItemEntityTargeting::onAnimationComplete(std::string const&) */

void GridItemEntityTargeting::onAnimationComplete(string *param_1)

{
  param_1[0x1c4] = (string)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargeting::StaticClassInit() */

void GridItemEntityTargeting::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEntityTargeting");
    (*pcVar2)(plVar1,asStack_10,FUN_04d728ac,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEntityTargeting::StaticGetClass() */

long * GridItemEntityTargeting::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemEntityTargeting",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEntityTargeting::GetClass() const */

long * GridItemEntityTargeting::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemEntityTargeting",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEntityTargeting::GridItemEntityTargeting() */

void __thiscall GridItemEntityTargeting::GridItemEntityTargeting(GridItemEntityTargeting *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_069b68f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEntityTargeting_069b6c08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  this[0x1c4] = (GridItemEntityTargeting)0x0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* GridItemEntityTargeting::StaticNew() */

GridItemEntityTargeting * GridItemEntityTargeting::StaticNew(void)

{
  GridItemEntityTargeting *this;
  
  this = ::operator_new(0x1e8);
  GridItemEntityTargeting(this);
  return this;
}


/* GridItemEntityTargeting::~GridItemEntityTargeting() */

void __thiscall GridItemEntityTargeting::~GridItemEntityTargeting(GridItemEntityTargeting *this)

{
  *(undefined ***)this = &PTR_GetClass_069b68f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEntityTargeting_069b6c08;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x1c8));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemEntityTargeting::~GridItemEntityTargeting() */

void __thiscall GridItemEntityTargeting::~GridItemEntityTargeting(GridItemEntityTargeting *this)

{
  ~GridItemEntityTargeting(this + -0x10);
  return;
}


/* GridItemEntityTargeting::~GridItemEntityTargeting() */

void __thiscall GridItemEntityTargeting::~GridItemEntityTargeting(GridItemEntityTargeting *this)

{
  ~GridItemEntityTargeting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEntityTargeting::~GridItemEntityTargeting() */

void __thiscall GridItemEntityTargeting::~GridItemEntityTargeting(GridItemEntityTargeting *this)

{
  ~GridItemEntityTargeting(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargeting::playActionAnimation(std::string) */

void __thiscall GridItemEntityTargeting::playActionAnimation(undefined8 param_1,undefined8 param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,param_2,0,aRStack_50);
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
/* GridItemEntityTargeting::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   TeamFlags, BoardEntityTypeFlag, GridItemTargetingArea, float) */

void __thiscall
GridItemEntityTargeting::findTargets
          (float param_1_00,GridItemEntityTargeting *this,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_1,int param_4,int param_5,
          undefined4 param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  GridItemEntityTargeting *extraout_x0;
  Zombie *extraout_x0_00;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  RtObject *local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  if (param_5 == 0) {
    param_5 = 0x3f;
  }
  switch(param_6) {
  default:
    uVar11 = *(undefined4 *)(this + 0x1c);
    uVar10 = FUN_04d71fd8(*(undefined4 *)(this + 0x18),uVar11,*(undefined4 *)(this + 0x20));
    local_30 = CONCAT44(uVar11,uVar10);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar4 * param_1_00,avStack_20,param_5,&local_30,0xffffffff,0xffffffff);
    break;
  case 1:
    fVar13 = *(float *)(this + 0x1c);
    fVar12 = (float)FUN_04d71fd8(*(undefined4 *)(this + 0x18),fVar13,*(undefined4 *)(this + 0x20));
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Insets::Insets
              ((Insets *)&local_30,(int)(fVar12 - param_1_00 * (float)iVar4),
               (int)(fVar13 - param_1_00 * (float)iVar5),
               (int)((float)iVar6 * (param_1_00 + param_1_00)),
               (int)((float)iVar7 * (param_1_00 + param_1_00)));
    EntityFinder::GetEntitiesInRectangle(avStack_20,param_5,(Insets *)&local_30);
    break;
  case 2:
    fVar12 = *(float *)(this + 0x1c);
    FUN_04d71fd8(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Insets::Insets((Insets *)&local_30,200,(int)(fVar12 - (float)(iVar4 / 2)),800,iVar5);
    uVar10 = FUN_04d71c78(*(undefined4 *)(this + 0x134));
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,param_5,(Insets *)&local_30,uVar10,uVar10)
    ;
    break;
  case 3:
    EntityFinder::GetEntitiesOnBoard(avStack_20,param_5);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      local_40 = (RtObject *)*puVar8;
      bVar2 = RealObject::IsOnTeam(local_40,param_4);
      if ((param_4 != 0) <= bVar2) {
        if (local_40 != (RtObject *)0x0) {
          bVar1 = Sexy::RtObject::IsA<Zombie>(local_40);
          if (bVar1) {
            nop();
            uVar9 = operator|(1,8);
            uVar9 = operator|(uVar9,0x20);
            uVar9 = operator|(uVar9,0x200);
            uVar10 = operator|(uVar9,0x10000);
            cVar3 = Zombie::MatchesAny(extraout_x0_00,uVar10);
            if (((cVar3 != '\0') ||
                (cVar3 = Zombie::HasCondition(extraout_x0_00,0x27), cVar3 != '\0')) ||
               (cVar3 = Zombie::HasCondition(extraout_x0_00,0x65), cVar3 != '\0'))
            goto LAB_04d7482c;
          }
          else if ((local_40 != (RtObject *)0x0) &&
                  (bVar1 = Sexy::RtObject::IsA<GridItem>(local_40), bVar1)) {
            nop();
            cVar3 = (**(code **)(*(long *)extraout_x0 + 0x1f8))();
            if ((cVar3 == '\0') || (this == extraout_x0)) goto LAB_04d7482c;
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_40);
      }
LAB_04d7482c:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  bVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 ^ 1);
}


/* GridItemEntityTargeting::SetActive(bool) */

void __thiscall GridItemEntityTargeting::SetActive(GridItemEntityTargeting *this,bool param_1)

{
  ulong uVar1;
  bool bVar2;
  GridItemEntityTargetingProps *pGVar3;
  long lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  
  pGVar3 = GridItem::GetProps<GridItemEntityTargetingProps>();
  lVar4 = FUN_04d71cd8(*(undefined8 *)(pGVar3 + 0x150),*(undefined8 *)(pGVar3 + 0x158));
  if (param_1) {
    uVar11 = 0;
    if (lVar4 != 0) {
      do {
        pfVar6 = (float *)FUN_04d71d14(*(undefined8 *)(this + 0x1c8),uVar11);
        fVar14 = (float)PVZ_T();
        uVar12 = *(undefined8 *)(pGVar3 + 0x150);
        uVar1 = uVar11 + 1;
        lVar4 = FUN_04d71d1c(uVar12,uVar11);
        uVar9 = *(undefined8 *)(pGVar3 + 0x158);
        *pfVar6 = fVar14 + *(float *)(lVar4 + 0x88);
        uVar7 = FUN_04d71cd8(uVar12,uVar9);
        uVar11 = uVar1;
      } while (uVar1 < uVar7);
    }
  }
  else {
    lVar8 = 0;
    lVar10 = 1;
    if (lVar4 != 0) {
      do {
        puVar5 = (undefined4 *)FUN_04d71d14(*(undefined8 *)(this + 0x1c8),lVar8);
        uVar13 = PVZ_EOT();
        bVar2 = lVar10 != lVar4;
        *puVar5 = uVar13;
        lVar8 = lVar10;
        lVar10 = lVar10 + 1;
      } while (bVar2);
    }
  }
  return;
}


/* GridItemEntityTargeting::onBasicLevelStart() */

void __thiscall GridItemEntityTargeting::onBasicLevelStart(GridItemEntityTargeting *this)

{
  SetActive(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargeting::onUpdate() */

void __thiscall GridItemEntityTargeting::onUpdate(GridItemEntityTargeting *this)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GridItemEntityTargetingProps *pGVar6;
  ulong uVar7;
  float *pfVar8;
  GridItemAction *pGVar9;
  int iVar10;
  code *pcVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1d0 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_1b8 [24];
  DamageInfo aDStack_1a0 [96];
  DamageInfo aDStack_140 [96];
  GridItemAction aGStack_e0 [24];
  undefined1 auStack_c8 [104];
  undefined4 local_60;
  float local_58;
  undefined4 local_54;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  pGVar6 = GridItem::GetProps<GridItemEntityTargetingProps>();
  cVar3 = FUN_04d71c7c(this[0x1bd]);
  if ((cVar3 == '\0') && (this[0x1c4] == (GridItemEntityTargeting)0x0)) {
    uVar7 = FUN_04d71cd8(*(undefined8 *)(pGVar6 + 0x150),*(undefined8 *)(pGVar6 + 0x158));
    iVar10 = 0;
    if (uVar7 != 0) {
      iVar10 = (int)((ulong)(long)(*(int *)(this + 0x1e0) + 1) / uVar7);
    }
    iVar10 = (*(int *)(this + 0x1e0) + 1) - (int)uVar7 * iVar10;
    do {
      lVar12 = (long)iVar10;
      pfVar8 = (float *)FUN_04d71d14(*(undefined8 *)(this + 0x1c8),lVar12);
      fVar14 = *pfVar8;
      fVar13 = (float)PVZ_T();
      if (fVar14 <= fVar13) {
        pGVar9 = (GridItemAction *)FUN_04d71d1c(*(undefined8 *)(pGVar6 + 0x150),lVar12);
        GridItemAction::GridItemAction(aGStack_e0,pGVar9);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1d0);
        GridItemAction::BuildDamageInfo((BoardEntity *)aGStack_e0);
        uVar4 = GridItemAction::GetAffectedTeams(aGStack_e0);
        uVar5 = GridItemAction::GetAffectedTypes(aGStack_e0);
        cVar3 = (**(code **)(*(long *)this + 0x2e8))(local_54,this,avStack_1d0,uVar4,uVar5,local_60)
        ;
        if (cVar3 != '\0') {
          this[0x1c4] = (GridItemEntityTargeting)0x1;
          *(int *)(this + 0x1e0) = iVar10;
          pfVar8 = (float *)FUN_04d71d14(*(undefined8 *)(this + 0x1c8),lVar12);
          fVar13 = (float)PVZ_T();
          *pfVar8 = fVar13 + local_58;
          cVar3 = FUN_0547419c(auStack_c8);
          if (cVar3 == '\0') {
            pcVar11 = *(code **)(*(long *)this + 0x2f8);
            FUN_05475d88((string *)aDStack_140,auStack_c8);
            (*pcVar11)(this,(string *)aDStack_140);
            std::string::~string((string *)aDStack_140);
          }
          else {
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                      (avStack_1b8,(vector *)avStack_1d0);
            DamageInfo::DamageInfo(aDStack_140,aDStack_1a0);
            GridItemAction::Execute(aGStack_e0,avStack_1b8,aDStack_140);
            DamageInfo::~DamageInfo(aDStack_140);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_1b8);
            this[0x1c4] = (GridItemEntityTargeting)0x0;
          }
          DamageInfo::~DamageInfo(aDStack_1a0);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_1d0);
          GridItemAction::~GridItemAction(aGStack_e0);
          break;
        }
        DamageInfo::~DamageInfo(aDStack_1a0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_1d0);
        GridItemAction::~GridItemAction(aGStack_e0);
      }
      uVar7 = FUN_04d71cd8(*(undefined8 *)(pGVar6 + 0x150),*(undefined8 *)(pGVar6 + 0x158));
      iVar1 = 0;
      if (uVar7 != 0) {
        iVar1 = (int)((ulong)(long)(iVar10 + 1) / uVar7);
      }
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = (ulong)(long)(*(int *)(this + 0x1e0) + 1) / uVar7;
      }
      iVar10 = (iVar10 + 1) - iVar1 * (int)uVar7;
    } while ((long)(*(int *)(this + 0x1e0) + 1) - uVar2 * uVar7 != (long)iVar10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargeting::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemEntityTargeting::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GridItemEntityTargetingProps *pGVar4;
  BoardEntity *this;
  code *pcVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f8 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemEntityTargetingProps>();
  this = (BoardEntity *)
         FUN_04d71d1c(*(undefined8 *)(pGVar4 + 0x150),(long)*(int *)(param_1 + 0x1e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f8);
  GridItemAction::BuildDamageInfo(this);
  uVar2 = GridItemAction::GetAffectedTeams((GridItemAction *)this);
  uVar3 = GridItemAction::GetAffectedTypes((GridItemAction *)this);
  cVar1 = (**(code **)(*(long *)param_1 + 0x2e8))
                    (*(undefined4 *)(this + 0x8c),param_1,avStack_f8,uVar2,uVar3,
                     *(undefined4 *)(this + 0x80));
  if (cVar1 != '\0') {
    pcVar5 = *(code **)(*(long *)this + 0x80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_e0,(vector *)avStack_f8);
    DamageInfo::DamageInfo(aDStack_68,aDStack_c8);
    (*pcVar5)(this,avStack_e0,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_e0);
  }
  DamageInfo::~DamageInfo(aDStack_c8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEntityTargeting::onGridItemInitialize() */

void __thiscall GridItemEntityTargeting::onGridItemInitialize(GridItemEntityTargeting *this)

{
  bool bVar1;
  TimeChallengeEndLevelUI *this_00;
  GridItemEntityTargetingProps *pGVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_58 [2];
  float local_50 [6];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemEntityTargeting,void(GridItemEntityTargeting::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
  pGVar2 = GridItem::GetProps<GridItemEntityTargetingProps>();
  local_58[0] = 0;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(pGVar2 + 0x138);
    uVar4 = FUN_04d71c88(uVar6,*(undefined8 *)(pGVar2 + 0x140));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_04d71cb0(uVar6,uVar5);
    operator|=((RtWeakPtr<Sexy::ResourceInfo> *)local_58,*puVar3);
    uVar5 = uVar5 + 1;
  }
  uVar5 = 0;
  RealObject::JoinTeam((RealObject *)this,local_58[0]);
  while( true ) {
    uVar4 = FUN_04d71cd8(*(undefined8 *)(pGVar2 + 0x150),*(undefined8 *)(pGVar2 + 0x158));
    bVar1 = uVar4 <= uVar5;
    uVar5 = uVar5 + 1;
    if (bVar1) break;
    local_50[0] = (float)PVZ_EOT();
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(this + 0x1c8),local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

