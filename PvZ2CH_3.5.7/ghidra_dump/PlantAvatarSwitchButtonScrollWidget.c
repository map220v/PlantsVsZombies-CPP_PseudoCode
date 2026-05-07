// Class: PlantAvatarSwitchButtonScrollWidget


/* PlantAvatarSwitchButtonScrollWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantAvatarSwitchButtonScrollWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PlantAvatarSwitchButtonScrollWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::ScrollTargetReached
          (PlantAvatarSwitchButtonScrollWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantAvatarSwitchButtonScrollWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantAvatarSwitchButtonScrollWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PlantAvatarSwitchButtonScrollWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::ScrollTargetInterrupted
          (PlantAvatarSwitchButtonScrollWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButtonScrollWidget::StaticClassInit() */

void PlantAvatarSwitchButtonScrollWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAvatarSwitchButtonScrollWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_043a1bc4,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarSwitchButtonScrollWidget::StaticGetClass() */

long * PlantAvatarSwitchButtonScrollWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAvatarSwitchButtonScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAvatarSwitchButtonScrollWidget::GetClass() const */

long * PlantAvatarSwitchButtonScrollWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAvatarSwitchButtonScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget() */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget
          (PlantAvatarSwitchButtonScrollWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR__PlantAvatarSwitchButtonScrollWidget_06840300;
  *(undefined ***)this = &PTR_GetClass_0683ffd0;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06840348;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget()
    */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget
          (PlantAvatarSwitchButtonScrollWidget *this)

{
  ~PlantAvatarSwitchButtonScrollWidget(this + -0xd8);
  return;
}


/* PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget() */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget
          (PlantAvatarSwitchButtonScrollWidget *this)

{
  ~PlantAvatarSwitchButtonScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget()
    */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::~PlantAvatarSwitchButtonScrollWidget
          (PlantAvatarSwitchButtonScrollWidget *this)

{
  ~PlantAvatarSwitchButtonScrollWidget(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButtonScrollWidget::PlantAvatarSwitchButtonScrollWidget() */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::PlantAvatarSwitchButtonScrollWidget
          (PlantAvatarSwitchButtonScrollWidget *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0683ffd0;
  *(undefined ***)(this + 0xd8) = &PTR__PlantAvatarSwitchButtonScrollWidget_06840300;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06840348;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  *(undefined8 *)(this + 0xe8) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,resortButtons);
  Sexy::Delegate0::
  Delegate0<PlantAvatarSwitchButtonScrollWidget,void(PlantAvatarSwitchButtonScrollWidget::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ResortSwitchButtons,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarSwitchButtonScrollWidget::StaticNew() */

PlantAvatarSwitchButtonScrollWidget * PlantAvatarSwitchButtonScrollWidget::StaticNew(void)

{
  PlantAvatarSwitchButtonScrollWidget *this;
  
  this = ::operator_new(0xf8);
  PlantAvatarSwitchButtonScrollWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButtonScrollWidget::resortButtons() */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::resortButtons(PlantAvatarSwitchButtonScrollWidget *this)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar11;
  long lVar12;
  NameMapperBase *pNVar13;
  int *piVar14;
  ulong uVar15;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  PlantAvatarSwitchButton *pPVar19;
  code *pcVar20;
  ulong uVar21;
  int local_6c;
  undefined8 local_68;
  Insets aIStack_60 [16];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  pair<void*const,std::vector<int,std::allocator<int>>> apStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  plVar10 = *(long **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  if (plVar10 != (long *)0x0) {
    pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0);
    (**(code **)(*plVar10 + 0x80))(plVar10,1,0);
    plVar10 = *(long **)(this + 0xe8);
    uVar3 = FUN_043a19d8(8);
    uVar4 = FUN_043a19d8(0);
    iVar5 = FUN_043a19d8(0x10);
    (**(code **)(*plVar10 + 0x198))
              (plVar10,uVar3,uVar4,*(int *)(this + 0x50) - iVar5,*(undefined4 *)(this + 0x54));
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    iVar5 = FUN_043a19d8(0);
    Sexy::Insets::Insets
              (aIStack_60,iVar5,iVar5,*(int *)(*(long *)(this + 0xe8) + 0x50),
               *(int *)(*(long *)(this + 0xe8) + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_60);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
    (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_60);
    iVar6 = FUN_043a19d8(0);
    iVar5 = *(int *)(this + 0x54);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
    bVar1 = PlayerInfo::IsPlantAvatarUnLocked(pPVar11,lVar12 + 0x80,0,0);
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar7 = 1;
      pPVar19 = ::operator_new(0xf8);
      PlantAvatarSwitchButton::PlantAvatarSwitchButton(pPVar19);
      Sexy::Insets::Insets((Insets *)apStack_28,iVar6,iVar6,iVar5,iVar5);
      (**(code **)(*(long *)pPVar19 + 0x1a0))(pPVar19,(Insets *)apStack_28);
      pNVar13 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      iVar9 = NameMapperBase::GetIdForName(pNVar13,(string *)(lVar12 + 0x80));
      PlantAvatarSwitchButton::setData(pPVar19,iVar9,true);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar19);
    }
    pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
    NameMapperBase::GetIdForName(pNVar13,(string *)(lVar12 + 0x80));
    PlayerInfo::GetUnlockedPlantNewAvatar((int)pPVar11);
    uVar21 = 0;
    while( true ) {
      iVar9 = uVar7 + (int)uVar21;
      uVar15 = FUN_043a133c(local_20,local_18);
      if (uVar15 <= uVar21) break;
      pPVar19 = ::operator_new(0xf8);
      PlantAvatarSwitchButton::PlantAvatarSwitchButton(pPVar19);
      iVar8 = FUN_043a19d8(10);
      Sexy::Insets::Insets((Insets *)&local_40,iVar6 + (iVar5 + iVar8) * iVar9,iVar6,iVar5,iVar5);
      (**(code **)(*(long *)pPVar19 + 0x1a0))(pPVar19,(Insets *)&local_40);
      piVar14 = (int *)FUN_043a1370(local_20,uVar21);
      PlantAvatarSwitchButton::setData(pPVar19,*piVar14,true);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar19);
      uVar21 = uVar21 + 1;
    }
    if (bVar1 == 0) {
      pPVar19 = ::operator_new(0xf8);
      PlantAvatarSwitchButton::PlantAvatarSwitchButton(pPVar19);
      iVar8 = FUN_043a19d8(10);
      iVar8 = (iVar5 + iVar8) * iVar9;
      iVar9 = iVar9 + 1;
      Sexy::Insets::Insets((Insets *)&local_40,iVar6 + iVar8,iVar6,iVar5,iVar5);
      (**(code **)(*(long *)pPVar19 + 0x1a0))(pPVar19,(Insets *)&local_40);
      pNVar13 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      iVar8 = NameMapperBase::GetIdForName(pNVar13,(string *)(lVar12 + 0x80));
      PlantAvatarSwitchButton::setData(pPVar19,iVar8,false);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar19);
    }
    uVar21 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
    NewAvatar::GetListByPlantName((string *)(lVar12 + 0x80),(vector *)&local_40);
    lVar12 = FUN_043a1378(local_40,local_38);
    if (lVar12 != 0) {
      do {
        pNVar13 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
        pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043a1384(local_40,uVar21);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
        local_6c = NameMapperBase::GetIdForName(pNVar13,(string *)(lVar12 + 0x20));
        uVar17 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        uVar18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
        local_68 = std::
                   find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                             (uVar17,uVar18,&local_6c);
        local_50[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_20);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_68,(__normal_iterator *)local_50);
        if (bVar2) {
          pPVar19 = ::operator_new(0xf8);
          PlantAvatarSwitchButton::PlantAvatarSwitchButton(pPVar19);
          iVar8 = FUN_043a19d8(10);
          iVar8 = (iVar5 + iVar8) * iVar9;
          iVar9 = iVar9 + 1;
          Sexy::Insets::Insets((Insets *)local_50,iVar6 + iVar8,iVar6,iVar5,iVar5);
          (**(code **)(*(long *)pPVar19 + 0x1a0))(pPVar19,(Insets *)local_50);
          PlantAvatarSwitchButton::setData(pPVar19,local_6c,false);
          (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar19);
        }
        uVar21 = uVar21 + 1;
        uVar15 = FUN_043a1378(local_40,local_38);
      } while (uVar21 < uVar15);
    }
    iVar8 = FUN_043a19d8(10);
    plVar10 = *(long **)(this + 0xe8);
    pcVar20 = *(code **)(*plVar10 + 0x60);
    *(int *)(this_01 + 0x50) = iVar6 + (iVar8 + iVar5) * iVar9;
    (*pcVar20)(plVar10,this_00);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
    std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
             *)&local_40);
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair(apStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAvatarSwitchButtonScrollWidget::initDialog() */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::initDialog(PlantAvatarSwitchButtonScrollWidget *this)

{
  Widget *this_00;
  
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  *(Widget **)(this + 0xe8) = this_00;
  resortButtons(this);
  return;
}


/* PlantAvatarSwitchButtonScrollWidget::SetData(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::SetData
          (PlantAvatarSwitchButtonScrollWidget *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),param_2);
  initDialog(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButtonScrollWidget::Draw(Sexy::Graphics*) */

void __thiscall
PlantAvatarSwitchButtonScrollWidget::Draw
          (PlantAvatarSwitchButtonScrollWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01a18);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

