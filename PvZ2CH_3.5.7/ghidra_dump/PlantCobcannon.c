// Class: PlantCobcannon


/* PlantCobcannon::canFire() const */

byte __thiscall PlantCobcannon::canFire(PlantCobcannon *this)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(*(Plant **)(this + 0x10) + 200);
  if (iVar1 == 1) {
    return 1;
  }
  if (iVar1 != 10) {
    return 0;
  }
  bVar2 = Plant::IsWatering(*(Plant **)(this + 0x10));
  return bVar2 ^ 1;
}


/* PlantCobcannon::NotifySetHidden(bool, bool) */

void __thiscall PlantCobcannon::NotifySetHidden(PlantCobcannon *this,bool param_1,bool param_2)

{
  char cVar1;
  
  if (((param_2 < param_1) && (*(BaseCursor **)(this + 0x38) != (BaseCursor *)0x0)) &&
     (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x38)), cVar1 == '\0')) {
    BaseCursor::Destroy(*(BaseCursor **)(this + 0x38));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::StaticClassInit() */

void PlantCobcannon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCobcannon");
    (*pcVar2)(plVar1,asStack_10,FUN_0414a0c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCobcannon::StaticGetClass() */

long * PlantCobcannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCobcannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCobcannon::GetClass() const */

long * PlantCobcannon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCobcannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCobcannon::CanShootMiniGun() */

bool __thiscall PlantCobcannon::CanShootMiniGun(PlantCobcannon *this)

{
  bool bVar1;
  char cVar2;
  
  if (((this[0x28] == (PlantCobcannon)0x0) ||
      (cVar2 = (**(code **)(*(long *)this + 0x180))(), cVar2 != '\0')) ||
     (cVar2 = Plant::IsWatering(*(Plant **)(this + 0x10)), cVar2 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(*(long *)(this + 0x10) + 200) & 0xfffffff7) == 4 ||
            *(uint *)(*(long *)(this + 0x10) + 200) == 1;
  }
  return bVar1;
}


/* PlantCobcannon::PlantCobcannon() */

void __thiscall PlantCobcannon::PlantCobcannon(PlantCobcannon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067eee10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined8 *)(this + 0x38) = 0;
  this[0x29] = (PlantCobcannon)0x0;
  this[0x2a] = (PlantCobcannon)0x0;
  return;
}


/* PlantCobcannon::StaticNew() */

PlantCobcannon * PlantCobcannon::StaticNew(void)

{
  PlantCobcannon *this;
  
  this = ::operator_new(0x40);
  PlantCobcannon(this);
  return this;
}


/* PlantCobcannon::~PlantCobcannon() */

void __thiscall PlantCobcannon::~PlantCobcannon(PlantCobcannon *this)

{
  *(undefined ***)this = &PTR_GetClass_067eee10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCobcannon::~PlantCobcannon() */

void __thiscall PlantCobcannon::~PlantCobcannon(PlantCobcannon *this)

{
  ~PlantCobcannon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::CanBeTarget(BoardEntity*) */

void __thiscall PlantCobcannon::CanBeTarget(PlantCobcannon *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  RealObject *this_00;
  GridItem *pGVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if ((this_00 != (RealObject *)0x0) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) {
        cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
        if (cVar2 == '\0') {
          pcVar5 = *(code **)(*(long *)this_00 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar2 = (*pcVar5)(this_00,aRStack_10,0);
          uVar3 = 0;
          if (((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(this_00,0x27), cVar2 == '\0')) &&
             (cVar2 = Zombie::HasCondition(this_00,0x25), cVar2 == '\0')) {
            uVar3 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          goto LAB_04147948;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        uVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_04147948;
      }
    }
  }
  uVar3 = 0;
LAB_04147948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::FindTargetAndFire(PlantWeapon) */

void PlantCobcannon::FindTargetAndFire(PlantCobcannon *param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanShootMiniGun(param_1);
  cVar3 = '\0';
  if (cVar1 == '\0') goto LAB_04147cbc;
  Plant::FindTarget(aRStack_10,*(undefined8 *)(param_1 + 0x10),0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    cVar3 = CanBeTarget(param_1,(BoardEntity *)pRVar4);
    if (cVar3 == '\0') goto LAB_04147d08;
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x30),aRStack_10);
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  }
  else {
LAB_04147d08:
    cVar3 = '\0';
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04147cbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::Draw(Sexy::Graphics*) */

void __thiscall PlantCobcannon::Draw(PlantCobcannon *this,Graphics *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  GraphicsAutoState aGStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [12];
  int local_1c;
  ulong local_18;
  ulong uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
      (*(BaseCursor **)(this + 0x38) != (BaseCursor *)0x0)) &&
     (cVar2 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x38)), cVar2 != '\0')) {
    Board::GetGridBoundingRect();
    iVar3 = FUN_04145c78(local_38 & 0xffffffff);
    iVar4 = FUN_04145c78(local_38._4_4_);
    iVar5 = FUN_04145c78(local_30 & 0xffffffff);
    iVar6 = FUN_04145c78(local_30._4_4_);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar5,iVar6);
    local_38 = local_18;
    local_30 = uStack_10;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(aIStack_28,0xff,0xfa,0x96,0x7d);
    if (0 < local_1c) {
      local_1c = 0xff;
    }
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_28);
    iVar3 = (int)local_38;
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee928);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar4 = local_38._4_4_;
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeb10);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
    uVar1 = local_30;
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee928);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar5 = local_30._4_4_;
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeb10);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar11);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar3 - iVar6,iVar4 - iVar7,(int)uVar1 + iVar8 * 2,
               iVar5 + iVar9 * 2);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee8f8);
    uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeb10);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeb40);
    uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee928);
    uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee950);
    uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee8c8);
    uVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeb78);
    uVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee9f8);
    Draw9Slice(param_1,(Insets *)&local_18,uVar12,uVar13,uVar14,uVar15,0,uVar16,uVar17,uVar18,uVar19
              );
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_38);
    iVar5 = (int)local_30;
    iVar3 = (int)local_38 + (int)local_30 / 2;
    iVar4 = local_38._4_4_ + local_30._4_4_ / 2;
    Sexy::Insets::Insets(aIStack_28,0,0,0,0);
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xfa,0x96,0x7d);
    DrawRadialCooldown(0x3f800000,(float)iVar3,(float)iVar4,(float)iVar5,param_1,aIStack_28,
                       (Insets *)&local_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  PlantFramework::Draw((Graphics *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::registerForEvents() */

void __thiscall PlantCobcannon::registerForEvents(PlantCobcannon *this)

{
  undefined *puVar1;
  char cVar2;
  Board *pBVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = PlantFramework::IsArenaBattle();
  if (cVar2 == '\0') {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantCobcannon,bool(PlantCobcannon::*)(Sexy::Touch_const&)>
              (aDStack_68,(CBMemberTranslatorX *)&local_80);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,6,aRStack_88,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_b0 = local_80;
    uStack_a8 = uStack_78;
    local_a0 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantCobcannon,void(PlantCobcannon::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::Idle() */

void __thiscall PlantCobcannon::Idle(PlantCobcannon *this)

{
  UIEasyButtonWidget *this_00;
  long *plVar1;
  RtObject *this_01;
  PlantAnimRig_Cobcannon *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) - 0xbU < 2) {
    this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_01);
    if (pPVar2 != (PlantAnimRig_Cobcannon *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Cobcannon::PlayRecoverStart(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else {
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar1 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::setState(int) */

void __thiscall PlantCobcannon::setState(PlantCobcannon *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  PopAnimRig *this_00;
  RtObject *pRVar9;
  PlantAnimRig_Cobcannon *pPVar10;
  UIEasyButtonWidget *pUVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsWatering(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') ||
     ((pUVar11 = *(UIEasyButtonWidget **)(this + 0x10), *(int *)(pUVar11 + 200) == param_1 &&
      (1 < param_1 - 0xbU)))) goto switchD_0414b854_caseD_2;
  *(int *)(pUVar11 + 200) = param_1;
  switch(param_1) {
  case 1:
    plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    (**(code **)(*plVar8 + 0x118))();
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    Sexy::Color::Color((Color *)asStack_60,1);
    PopAnimRig::SetPAMColor(this_00,(Color *)asStack_60);
    break;
  case 5:
    pRVar9 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    pPVar10 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(pRVar9);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if ((pPVar10 != (PlantAnimRig_Cobcannon *)0x0) && (cVar1 != '\0')) {
      PVZ_T();
      std::string::string(asStack_60,"ready_idle");
      PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar10,asStack_60);
      std::string::~string(asStack_60);
      nop();
      std::string::string(asStack_60,"special");
      PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar10,asStack_60);
      std::string::~string(asStack_60);
      nop();
    }
    break;
  case 10:
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_Banana_Attack_Activate");
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xb:
    pRVar9 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    pPVar10 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(pRVar9);
    lVar3 = *(long *)(this + 0x10);
    uVar14 = PVZ_T();
    uVar6 = *(undefined8 *)(this + 0x10);
    *(undefined4 *)(lVar3 + 0x128) = uVar14;
    iVar2 = FUN_041457a4(uVar6);
    if (iVar2 == 2) {
      fVar12 = 1.0200001;
    }
    else if (iVar2 < 3) {
      fVar12 = 1.2;
    }
    else {
      fVar12 = 0.84000003;
    }
    if (pPVar10 != (PlantAnimRig_Cobcannon *)0x0) {
      std::string::string(asStack_60,"special");
      fVar13 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar10,asStack_60);
      *(float *)(*(long *)(this + 0x10) + 0x128) =
           *(float *)(*(long *)(this + 0x10) + 0x128) + fVar12 * fVar13;
      std::string::~string(asStack_60);
      nop();
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_Cobcannon::PlaySpecialAttack(pPVar10,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xc:
    iVar2 = FUN_041457a4(pUVar11);
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
LAB_0414baa4:
      fVar12 = (float)PVZ_T();
      pUVar11 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar13 = (float)FUN_0414579c(*(undefined4 *)(pUVar11 + 0x420));
      *(float *)(pUVar11 + 0x128) = fVar12 + fVar13 * 26.0;
    }
    else {
      lVar3 = FUN_04149888(pUVar11);
      uVar4 = FUN_041457b8(*(undefined8 *)(lVar3 + 0x2d8),*(undefined8 *)(lVar3 + 0x2e0));
      if (uVar4 <= (ulong)(long)iVar2) goto LAB_0414baa4;
      fVar12 = (float)PVZ_T();
      lVar3 = FUN_04149888(*(undefined8 *)(this + 0x10));
      pfVar5 = (float *)FUN_041457d0(*(undefined8 *)(lVar3 + 0x2d8),(long)iVar2);
      pUVar11 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar13 = (float)FUN_0414579c(*(undefined4 *)(pUVar11 + 0x420));
      *(float *)(pUVar11 + 0x128) = fVar12 + fVar13 * *pfVar5;
    }
    pRVar9 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    pPVar10 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(pRVar9);
    if (pPVar10 != (PlantAnimRig_Cobcannon *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_68,asStack_60);
      PlantAnimRig_Cobcannon::PlayRecoverStart
                (pPVar10,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
switchD_0414b854_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::Initialize() */

void __thiscall PlantCobcannon::Initialize(PlantCobcannon *this)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  PlantAnimRig_Cobcannon *this_00;
  undefined8 uVar6;
  Board *pBVar7;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  BoardEntity::CalcGridPosition();
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  plVar3 = (long *)Board::GetPlantAt(pBVar7,local_18,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  plVar4 = (long *)Board::GetPlantAt(pBVar7,local_18 + 1,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar3 != (long *)0x0) {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator==("kernelpult",(string *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      (**(code **)(*plVar3 + 0x48))(plVar3);
    }
  }
  if (plVar4 != (long *)0x0) {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator==("kernelpult",(string *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      (**(code **)(*plVar4 + 0x48))(plVar4);
    }
  }
  uVar6 = *(undefined8 *)(this + 0x10);
  iVar2 = FUN_041457a4(uVar6);
  lVar5 = FUN_04149888(uVar6);
  this[0x28] = (PlantCobcannon)(*(int *)(lVar5 + 0x2c0) <= iVar2);
  this_00 = (PlantAnimRig_Cobcannon *)FUN_041482e0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Cobcannon::SetMiniGunShown(this_00,(bool)this[0x28]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCobcannon::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCobcannon::onAnimStoppedCallback(PlantCobcannon *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_Cobcannon *this_01;
  
  bVar1 = std::operator==(param_1,"reload_end");
  if (bVar1) {
    setState(this,1);
    return;
  }
  bVar1 = std::operator==(param_1,"reload");
  if (bVar1) {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_01 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_00);
    if (this_01 != (PlantAnimRig_Cobcannon *)0x0) {
      PlantAnimRig_Cobcannon::PlayRecoverLoop(this_01);
      return;
    }
  }
  return;
}


/* PlantCobcannon::CancelPlantfood() */

void __thiscall PlantCobcannon::CancelPlantfood(PlantCobcannon *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xc);
  return;
}


/* PlantCobcannon::select() */

bool __thiscall PlantCobcannon::select(PlantCobcannon *this)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  PlantAnimRig_Cobcannon *this_01;
  bool bVar3;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) != 0xc) {
    bVar3 = false;
    cVar2 = (**(code **)(*(long *)this + 0x180))();
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
      bVar3 = iVar1 == 1 || iVar1 == 0xd;
      if (iVar1 == 1 || iVar1 == 0xd) {
        this_00 = (RtObject *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        this_01 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_00);
        if (this_01 != (PlantAnimRig_Cobcannon *)0x0) {
          PlantAnimRig_Cobcannon::PlaySelected(this_01);
        }
        setState(this,10);
      }
    }
    return bVar3;
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return false;
}


/* PlantCobcannon::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantCobcannon::onTouchEvent(PlantCobcannon *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  CannonTargetCursor *this_01;
  Plant *this_02;
  Board *this_03;
  float fVar2;
  float fVar3;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_02 = *(Plant **)(this + 0x10);
    cVar1 = FUN_04145798(this_02[0x278]);
    if ((cVar1 == '\0') && (cVar1 = Plant::IsWatering(this_02), cVar1 == '\0')) {
      cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11);
      if (cVar1 != '\0') {
        return '\0';
      }
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      cVar1 = Board::IsPlaying(this_03);
      if (((cVar1 == '\0') || (cVar1 = FUN_041457b0(this_03[0x887]), cVar1 == '\0')) &&
         (this[0x2a] == (PlantCobcannon)0x0)) {
        return '\0';
      }
      fVar2 = (float)FUN_04145ca0((float)*(int *)(param_1 + 0x10));
      fVar3 = (float)FUN_04145ca0((float)*(int *)(param_1 + 0x14));
      this_00 = (TRect<int> *)
                (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
      if (cVar1 == '\0') {
        return '\0';
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        return '\0';
      }
      if ((*(BaseCursor **)(this + 0x38) != (BaseCursor *)0x0) &&
         (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x38)), cVar1 == '\0')) {
        return '\0';
      }
      cVar1 = select(this);
      if (cVar1 == '\0') {
        return '\0';
      }
      this_01 = ::operator_new(0x50);
      CannonTargetCursor::CannonTargetCursor(this_01,param_1,this);
      cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_01,true);
      if (cVar1 == '\0') {
        return '\0';
      }
      *(CannonTargetCursor **)(this + 0x38) = this_01;
      return cVar1;
    }
  }
  return '\0';
}


/* PlantCobcannon::deselect() */

void __thiscall PlantCobcannon::deselect(PlantCobcannon *this)

{
  char *pcVar1;
  
  setState(this,1);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Banana_Attack_Disarm");
  return;
}


/* PlantCobcannon::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantCobcannon::onCursorDestroyed(PlantCobcannon *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(BaseCursor **)(this + 0x38) != param_1) {
    return;
  }
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    deselect(this);
    *(undefined8 *)(this + 0x38) = 0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* PlantCobcannon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCobcannon::Fire(PlantCobcannon *this,RtWeakPtr *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  PineconePlantfoodProjectile *this_01;
  DVec3 *pDVar6;
  float *pfVar7;
  ActionSubSystem *pAVar8;
  PineconePlantfoodProjectile *this_02;
  PineconePlantfoodProjectile *pPVar9;
  float fVar10;
  float fVar11;
  float local_b8;
  float fStack_b4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanShootMiniGun(this);
  if (cVar1 != '\0') {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    if (pRVar4 != (ResourceInfo *)0x0) {
LAB_0414d2d0:
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_88 = *puVar5;
      local_80 = *(undefined4 *)(puVar5 + 1);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      local_78 = *puVar5;
      local_70 = *(undefined4 *)(puVar5 + 1);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
      PlantFramework::Fire
                ((PlantFramework *)this,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_4);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      if (this_01 != (PineconePlantfoodProjectile *)0x0) {
        PineconePlantfoodProjectile::SetTargetLocked(this_01,true);
        Sexy::SexyMath::DegToRad(0.0);
        FUN_0414575c(this_01 + 0xc4);
        pDVar6 = (DVec3 *)Projectile::GetVelocity((Projectile *)this_01);
        fVar10 = (float)DVec3::getLength(pDVar6);
        CBMiniRocket::SetRotatedVelocity((CBMiniRocket *)this_01,fVar10);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
        if (pRVar4 != (ResourceInfo *)0x0) {
          _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_b8);
          fVar10 = (float)local_88;
          local_b8 = (float)local_78 + ((float)local_88 - (float)local_78) * 0.5;
          pfVar7 = eastl::min_alt<float>
                             ((float *)((long)&local_78 + 4),(float *)((long)&local_88 + 4));
          fVar11 = *pfVar7;
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          fStack_b4 = fVar11 - (float)iVar3 * 0.5;
          local_60 = CONCAT44(fStack_b4,local_b8);
          local_58 = local_60;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,fVar10,local_88._4_4_);
          local_68 = local_90;
          pAVar8 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_b0);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
          std::string::string(asStack_98,"onFlyToTargetDone");
          RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                    (aRStack_50,aRStack_a0,asStack_98);
          ActionSubSystem::AddActionBezierTo
                    ((ActionSubSystem *)0x3fcccccd,pAVar8,(FastCurve *)&local_90,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                     aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string(asStack_98);
          nop();
          Sexy::RtId::~RtId(aRStack_a0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
          cVar1 = CanBeTarget(this,(BoardEntity *)pRVar4);
          if (cVar1 == '\0') {
            CBMiniRocket::FindNewTarget((CBMiniRocket *)this_01);
          }
          else {
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
            PineconePlantfoodProjectile::SetOverrideTarget(this_01,(BoardEntity *)pRVar4);
          }
        }
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
      PlantFramework::Fire
                ((PlantFramework *)this,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_4);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      if (this_02 != (PineconePlantfoodProjectile *)0x0) {
        PineconePlantfoodProjectile::SetTargetLocked(this_02,true);
        Sexy::SexyMath::DegToRad(0.0);
        FUN_0414575c(this_02 + 0xc4);
        pDVar6 = (DVec3 *)Projectile::GetVelocity((Projectile *)this_02);
        fVar10 = (float)DVec3::getLength(pDVar6);
        CBMiniRocket::SetRotatedVelocity((CBMiniRocket *)this_02,fVar10);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
        if (pRVar4 != (ResourceInfo *)0x0) {
          _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_b8);
          fVar10 = (float)local_88;
          local_b8 = (float)local_78 + ((float)local_88 - (float)local_78) * 0.5;
          pfVar7 = eastl::max_alt<float>
                             ((float *)((long)&local_78 + 4),(float *)((long)&local_88 + 4));
          fVar11 = *pfVar7;
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          fStack_b4 = fVar11 + (float)iVar3 * 0.5;
          local_60 = CONCAT44(fStack_b4,local_b8);
          local_58 = local_60;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,fVar10,local_88._4_4_);
          local_68 = local_90;
          pAVar8 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_b0);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
          std::string::string(asStack_98,"onFlyToTargetDone");
          RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                    (aRStack_50,aRStack_a0,asStack_98);
          ActionSubSystem::AddActionBezierTo
                    ((ActionSubSystem *)0x3fcccccd,pAVar8,(FastCurve *)&local_90,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                     aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string(asStack_98);
          nop();
          Sexy::RtId::~RtId(aRStack_a0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
          cVar1 = CanBeTarget(this,(BoardEntity *)pRVar4);
          if (cVar1 == '\0') {
            CBMiniRocket::FindNewTarget((CBMiniRocket *)this_02);
          }
          else {
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
            PineconePlantfoodProjectile::SetOverrideTarget(this_02,(BoardEntity *)pRVar4);
          }
        }
      }
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      pPVar9 = this_01;
      goto LAB_0414d798;
    }
    Plant::FindTarget((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                      *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_2,(RtWeakPtrBase *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar2) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
      cVar1 = CanBeTarget(this,(BoardEntity *)pRVar4);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)param_2);
        goto LAB_0414d2d0;
      }
    }
  }
  pPVar9 = (PineconePlantfoodProjectile *)0x0;
LAB_0414d798:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar9);
}


/* PlantCobcannon::LaunchTarget(Sexy::Point const&) */

void __thiscall PlantCobcannon::LaunchTarget(PlantCobcannon *this,Point *param_1)

{
  CannonEntrySubSystem *this_00;
  long lVar1;
  CannonEntry *this_01;
  float fVar2;
  
  this_00 = Board::GetGameSubSystem<CannonEntrySubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (CannonEntrySubSystem *)0x0) {
    fVar2 = (float)PVZ_T();
    lVar1 = FUN_04149888(*(undefined8 *)(this + 0x10));
    this_01 = (CannonEntry *)
              CannonEntrySubSystem::CreateShot(this_00,fVar2 + *(float *)(lVar1 + 0x2c4),param_1);
    if (this_01 != (CannonEntry *)0x0) {
      CannonEntry::SetOwner(this_01,this);
      CannonEntry::SetGroundTarget(this_01,true);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::FireCannon(Sexy::Point const&) */

void __thiscall PlantCobcannon::FireCannon(PlantCobcannon *this,Point *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  ulong local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ___stack_chk_guard;
  if (this[0x2a] == (PlantCobcannon)0x0) {
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    cVar1 = FUN_041457b0(*(undefined1 *)(lVar4 + 0x887));
    if ((cVar1 == '\0') || (cVar1 = FUN_041457b4(*(undefined1 *)(lVar4 + 0x888)), cVar1 == '\0'))
    goto LAB_0414e084;
  }
  iVar2 = (int)lVar3;
  cVar1 = FUN_04147608(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  if ((cVar1 != '\0') || (cVar1 = canFire(this), cVar1 == '\0')) goto LAB_0414e084;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),iVar2);
  if (this[0x29] == (PlantCobcannon)0x0) {
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
LAB_0414e184:
      deselect(this);
      goto LAB_0414e084;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_30 & 0xffffffff,local_30._4_4_);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)&local_28,-1,-1);
      local_30 = local_28;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
      if (this[0x29] != (PlantCobcannon)0x0) goto LAB_0414e084;
      goto LAB_0414e184;
    }
  }
  LaunchTarget(this,(Point *)&local_30);
  setState(this,0xb);
LAB_0414e084:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0414e4b0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantCobcannon::UpdateActions() */

void __thiscall PlantCobcannon::UpdateActions(PlantCobcannon *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  PopAnimRig *pPVar4;
  long lVar5;
  float *pfVar6;
  RtObject *this_01;
  PlantAnimRig_Cobcannon *pPVar7;
  UIEasyButtonWidget *this_02;
  float fVar8;
  float fVar9;
  undefined1 extraout_var [12];
  float fVar10;
  float fVar11;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  undefined4 local_68 [2];
  int local_60;
  int local_5c;
  int local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this_02 + 200)) {
  case 1:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
    Sexy::Color::Color((Color *)&local_60,1);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_60);
    cVar2 = PlantFramework::IsArenaBattle();
    if (cVar2 != '\0') {
      Plant::FindTargetInRow
                ((RtWeakPtr *)&local_60,*(long *)(this + 0x10),
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      if (this_00 != (ResourceInfo *)0x0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        Sexy::Point::Point((Point *)&local_60,(int)*pfVar6,(int)pfVar6[1]);
        FireCannon(this,(Point *)&local_60);
      }
    }
    break;
  case 5:
  case 10:
  case 0xd:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
    Sexy::Color::Color((Color *)&local_60,1);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_60);
    break;
  case 0xb:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
    Sexy::Color::Color((Color *)&local_60,1);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_60);
    fVar8 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar8) {
      setState(this,0xc);
    }
    break;
  case 0xc:
    iVar3 = FUN_041457a4(this_02);
    lVar5 = FUN_04149888(this_02);
    pfVar6 = (float *)FUN_041457d0(*(undefined8 *)(lVar5 + 0x2d8),(long)(iVar3 + -1));
    lVar5 = *(long *)(this + 0x10);
    fVar8 = (float)FUN_0414579c(*(undefined4 *)(lVar5 + 0x420));
    fVar10 = *(float *)(lVar5 + 0x128);
    fVar11 = *pfVar6;
    fVar9 = (float)PVZ_T();
    fVar8 = 1.0 - (fVar10 - fVar9) / (fVar8 * fVar11);
    fVar8 = fVar8 * fVar8;
    fVar8 = fVar8 * fVar8 * 125.66371 + 3.1415927;
    cosf(fVar8);
    local_60 = 0x3f800000;
    local_68[0] = 0x3ecccccd;
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar8;
    fVar8 = CurveEvaluate<float>(auVar1,0x3f000000,(string *)local_68,(Color *)&local_60,1);
    Sexy::Color::Color((Color *)&local_60);
    local_60 = (int)(fVar8 * 255.0);
    local_5c = local_60;
    local_58 = local_60;
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_60);
    fVar8 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar8) {
      setState(this,0xd);
      this_01 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_01);
      if (pPVar7 != (PlantAnimRig_Cobcannon *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
        std::string::string((string *)local_68,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_70,(string *)local_68);
        PlantAnimRig_Cobcannon::PlayRecoverEnd(pPVar7,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)local_68);
        nop();
        Sexy::RtId::~RtId(aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::LaunchPlantFoodTarget(Sexy::Point const&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantCobcannon::LaunchPlantFoodTarget(PlantCobcannon *this,Point *param_1,vector *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  CannonEntrySubSystem *this_00;
  RtObject *this_01;
  PlantAnimRig_Cobcannon *this_02;
  long lVar8;
  CannonEntry *this_03;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_18;
  BoardEntity *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::GetGameSubSystem<CannonEntrySubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (CannonEntrySubSystem *)0x0) {
    fVar15 = (float)PVZ_T();
    this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_02 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_01);
    if (this_02 != (PlantAnimRig_Cobcannon *)0x0) {
      std::string::string((string *)&local_10,"ready_idle");
      fVar16 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_02,(string *)&local_10);
      fVar15 = fVar15 + fVar16;
      std::string::~string((string *)&local_10);
      nop();
    }
    lVar8 = FUN_04149888(*(undefined8 *)(this + 0x10));
    this_03 = (CannonEntry *)
              CannonEntrySubSystem::CreateShot(this_00,fVar15 + *(float *)(lVar8 + 0x2c4),param_1);
    if (this_03 != (CannonEntry *)0x0) {
      CannonEntry::SetOwner(this_03,this);
      CannonEntry::SetGroundTarget(this_03,false);
      bVar5 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      CannonEntry::SetAvatar(this_03,bVar5);
      CannonEntry::ResetBulletTargets(this_03);
      lVar8 = FUN_04149888(*(undefined8 *)(this + 0x10));
      iVar2 = *(int *)(lVar8 + 0x2b8);
      iVar3 = *(int *)(lVar8 + 700);
      iVar6 = FUN_041457d8(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
      iVar12 = iVar2 - iVar3 * iVar6;
      if (0 < iVar12) {
        iVar6 = 0;
        do {
          local_10 = (BoardEntity *)0x0;
          iVar6 = iVar6 + 1;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,&local_10);
        } while (iVar6 != iVar12);
        iVar6 = FUN_041457d8(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
      }
      if (0 < iVar6) {
        iVar12 = iVar6 + -1;
        lVar8 = 0;
        do {
          iVar7 = rand();
          uVar14 = *(undefined8 *)param_2;
          iVar4 = 0;
          if (iVar12 != 0) {
            iVar4 = iVar7 / iVar12;
          }
          lVar1 = lVar8 + 1;
          lVar11 = (long)(iVar7 - iVar4 * iVar12);
          puVar9 = (undefined8 *)FUN_041457e4(uVar14,lVar8);
          puVar10 = (undefined8 *)FUN_041457e4(uVar14,lVar11);
          uVar14 = *puVar9;
          *puVar9 = *puVar10;
          puVar9 = (undefined8 *)FUN_041457e4(*(undefined8 *)param_2,lVar11);
          *puVar9 = uVar14;
          lVar8 = lVar1;
        } while ((int)lVar1 < iVar6);
      }
      if ((0 < iVar2) && (uVar13 = (uint)(iVar3 < 1), iVar3 >= 1)) {
        iVar12 = 0;
        do {
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)param_2);
          local_10 = (BoardEntity *)
                     std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)param_2);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
                bVar5) {
            iVar12 = iVar12 + 1;
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            CannonEntry::AddBulletTarget((BoardEntity *)this_03);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
          }
          uVar13 = uVar13 + 1;
        } while ((iVar12 < iVar2) && ((int)uVar13 < iVar3));
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCobcannon::ApplyPlantfood() */

void __thiscall PlantCobcannon::ApplyPlantfood(PlantCobcannon *this)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  BoardEntity **ppBVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,5);
  if (*(BaseCursor **)(this + 0x38) != (BaseCursor *)0x0) {
    cVar3 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x38));
    if (cVar3 == '\0') {
      BaseCursor::Destroy(*(BaseCursor **)(this + 0x38));
    }
    else {
      Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,avStack_20
             ,0xffffffff,0xffffffff);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = local_38;
  iVar4 = FUN_041457d8(local_38,local_30);
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar9 = (long)(int)uVar1 + -1;
    lVar2 = lVar9;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar10 = lVar2;
      puVar6 = (undefined8 *)FUN_041457e4(uVar5,lVar11);
      cVar3 = CanBeTarget(this,(BoardEntity *)*puVar6);
      if (cVar3 == '\0') {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_38);
        local_48 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_50,lVar11);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)&local_48);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,local_40);
        uVar5 = local_38;
      }
      else {
        ppBVar7 = (BoardEntity **)FUN_041457e4(local_38,lVar11);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,ppBVar7);
        uVar5 = local_38;
      }
      if (lVar10 == lVar9 - (ulong)uVar1) break;
      lVar2 = lVar10 + -1;
      lVar11 = lVar10;
      local_38 = uVar5;
    }
  }
  BoardEntity::CalcGridPosition();
  local_54 = (int)local_48 + 5;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  local_50 = CONCAT44(local_50._4_4_,iVar4 + -1);
  piVar8 = eastl::min_alt<int>(&local_54,(int *)&local_50);
  Sexy::Point::Point((Point *)&local_40,*piVar8,local_48._4_4_);
  LaunchPlantFoodTarget(this,(Point *)&local_40,(vector *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

