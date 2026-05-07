// Class: AdaptorSelectedPerksWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::StaticClassInit() */

void AdaptorSelectedPerksWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorSelectedPerksWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_036df8b4,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSelectedPerksWidget::StaticGetClass() */

long * AdaptorSelectedPerksWidget::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorSelectedPerksWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSelectedPerksWidget::GetClass() const */

long * AdaptorSelectedPerksWidget::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorSelectedPerksWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSelectedPerksWidget::OnLayoutFinalized() */

void __thiscall AdaptorSelectedPerksWidget::OnLayoutFinalized(AdaptorSelectedPerksWidget *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x120);
    uVar2 = FUN_036deaf8(uVar4,*(undefined8 *)(this + 0x128));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_036deb60(uVar4,uVar3);
    (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::ButtonDepress(int) */

void __thiscall
AdaptorSelectedPerksWidget::ButtonDepress(AdaptorSelectedPerksWidget *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_036deaf8(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  if ((ulong)(long)param_1 < uVar1) {
    uVar2 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar3 = FUN_036deb20(*(undefined8 *)(this + 0x138),(long)param_1);
    FUN_05475d88(asStack_10,uVar3);
    PennyPerkMgr::DeselectPerk(uVar2,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorSelectedPerksWidget::ButtonDepress(int) */

void __thiscall
AdaptorSelectedPerksWidget::ButtonDepress(AdaptorSelectedPerksWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorSelectedPerksWidget::AdaptorSelectedPerksWidget() */

void __thiscall
AdaptorSelectedPerksWidget::AdaptorSelectedPerksWidget(AdaptorSelectedPerksWidget *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06684c50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06684fb0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684ff8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  this[0x188] = (AdaptorSelectedPerksWidget)0x0;
  *(undefined4 *)(this + 0x18c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkSelected);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<std::string&,bool,Sexy::Point&,Sexy::CBMemberTranslatorX<AdaptorSelectedPerksWidget,void(AdaptorSelectedPerksWidget::*)(std::string&,bool,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PerkSelected,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkDeselected);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<std::string&,Sexy::CBMemberTranslatorX<AdaptorSelectedPerksWidget,void(AdaptorSelectedPerksWidget::*)(std::string&)>>
            ((MessageRouter *)puVar1,Message::PerkDeselected,&local_70);
  return;
}


/* AdaptorSelectedPerksWidget::StaticNew() */

AdaptorSelectedPerksWidget * AdaptorSelectedPerksWidget::StaticNew(void)

{
  AdaptorSelectedPerksWidget *this;
  
  this = ::operator_new(400);
  AdaptorSelectedPerksWidget(this);
  return this;
}


/* AdaptorSelectedPerksWidget::~AdaptorSelectedPerksWidget() */

void __thiscall
AdaptorSelectedPerksWidget::~AdaptorSelectedPerksWidget(AdaptorSelectedPerksWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06684c50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06684fb0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684ff8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x170));
  std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>::~vector
            ((vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>> *)(this + 0x158));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x138));
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorSelectedPerksWidget::~AdaptorSelectedPerksWidget() */

void __thiscall
AdaptorSelectedPerksWidget::~AdaptorSelectedPerksWidget(AdaptorSelectedPerksWidget *this)

{
  ~AdaptorSelectedPerksWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::onLinkToUIViewCreated() */

void __thiscall AdaptorSelectedPerksWidget::onLinkToUIViewCreated(AdaptorSelectedPerksWidget *this)

{
  HotUIFile *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036deaec(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_20,"SelectedPerksList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  HotUIButtonList::GetButtons();
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x120),
             (vector *)asStack_20);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_20);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x120);
    uVar2 = FUN_036deaf8(uVar4,*(undefined8 *)(this + 0x128));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_036deb60(uVar4,uVar3);
    HotUIButton::SetListener((HotUIButton *)*puVar1,(int)uVar3,(ButtonListener *)(this + 0xd8));
    puVar1 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),uVar3);
    HotUIButton::SetDrawGrayscaleWhenDisabled((HotUIButton *)*puVar1,false);
    puVar1 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),uVar3);
    (**(code **)(*(long *)*puVar1 + 0x188))((long *)*puVar1,1);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::Update() */

void __thiscall AdaptorSelectedPerksWidget::Update(AdaptorSelectedPerksWidget *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x150] != (AdaptorSelectedPerksWidget)0x0) {
    iVar3 = FUN_036deb28(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar8 = (long)(int)uVar1 + -1;
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x158);
      lVar7 = (long)(int)uVar1;
      lVar9 = lVar8;
      while( true ) {
        fVar10 = (float)PVZ_T();
        lVar4 = FUN_036deb48(*(undefined8 *)(this + 0x158),lVar7);
        if (*(float *)(lVar4 + 4) <= fVar10) {
          Sexy::Point::Point((Point *)&local_28,(TPoint *)(lVar4 + 0x10));
          piVar5 = (int *)FUN_036deb58(*(undefined8 *)(this + 0x170),lVar7);
          iVar3 = *piVar5;
          puVar6 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)iVar3);
          (**(code **)(*(long *)*puVar6 + 0x1a8))((long *)*puVar6,local_28,local_24);
          puVar6 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)iVar3);
          (**(code **)(*(long *)*puVar6 + 0x188))((long *)*puVar6,0);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_18 = __gnu_cxx::
                     __normal_iterator<Curve<Sexy::Point>*,std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>>
                     ::operator+((__normal_iterator<Curve<Sexy::Point>*,std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>>
                                  *)&local_20,lVar7);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>::erase
                    ((vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>> *)this_00,
                     CONCAT44(uStack_c,local_10));
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x170));
          local_18 = __gnu_cxx::
                     __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                     operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                                *)&local_20,lVar7);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<int,std::allocator<int>>::erase
                    ((vector<int,std::allocator<int>> *)(this + 0x170),CONCAT44(uStack_c,local_10));
          cVar2 = std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>::empty
                            ((vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>> *)
                             this_00);
          if (cVar2 != '\0') {
            this[0x150] = (AdaptorSelectedPerksWidget)0x0;
          }
        }
        else {
          fVar10 = (float)PVZ_T();
          Curve<Sexy::Point>::GetAt(fVar10);
          piVar5 = (int *)FUN_036deb58(*(undefined8 *)(this + 0x170),lVar7);
          puVar6 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)*piVar5);
          (**(code **)(*(long *)*puVar6 + 0x1a8))((long *)*puVar6,local_10,uStack_c);
        }
        if (lVar9 == lVar8 - (ulong)uVar1) break;
        lVar7 = lVar9;
        lVar9 = lVar9 + -1;
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
/* AdaptorSelectedPerksWidget::onSelectedPerksChanged(std::string&, bool, Sexy::Point) */

void __thiscall
AdaptorSelectedPerksWidget::onSelectedPerksChanged
          (AdaptorSelectedPerksWidget *this,string *param_1,char param_2,TPoint<int> *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  char *__s;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  HotUIButton *pHVar10;
  undefined8 uVar11;
  float fVar12;
  Curve<Sexy::Point> *pCVar13;
  int local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  TPoint aTStack_68 [8];
  Point aPStack_60 [8];
  Point aPStack_58 [8];
  Point aPStack_50 [8];
  TPoint<int> aTStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  string asStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x138));
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetSelectedPerks();
  local_74 = 0;
  do {
    uVar11 = local_40;
    uVar9 = (ulong)local_74;
    uVar4 = FUN_036deb68(local_40,local_38);
    if (uVar4 <= uVar9) {
      uVar11 = *(undefined8 *)(this + 0x120);
      uVar4 = FUN_036deaf8(uVar11,*(undefined8 *)(this + 0x128));
      if (uVar9 < uVar4) {
        while (uVar9 < uVar4) {
          puVar7 = (undefined8 *)FUN_036deb60(uVar11,uVar9);
          (**(code **)(*(long *)*puVar7 + 0x188))((long *)*puVar7,1);
          puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
          (**(code **)(*(long *)*puVar7 + 0x158))((long *)*puVar7,0);
          uVar11 = *(undefined8 *)(this + 0x120);
          iVar3 = local_74 + 1;
          local_74 = iVar3;
          uVar4 = FUN_036deaf8(uVar11,*(undefined8 *)(this + 0x128));
          uVar9 = (ulong)iVar3;
        }
      }
      std::vector<PerkData,std::allocator<PerkData>>::~vector
                ((vector<PerkData,std::allocator<PerkData>> *)&local_40);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036deb74(uVar11,uVar9);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x138),
               (string *)(lVar6 + 0x10));
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036deb74(local_40,(long)local_74);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    __s = (char *)FUN_0547429c(lVar6 + 0x28);
    std::string::string(asStack_28,__s);
    GetUIResource<Sexy::Image>(asStack_28);
    std::string::~string(asStack_28);
    nop();
    puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
    (**(code **)(*(long *)*puVar7 + 0x158))((long *)*puVar7,1);
    puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
    pHVar10 = (HotUIButton *)*puVar7;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_70);
    HotUIButton::SetUpImage(pHVar10,asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
    pHVar10 = (HotUIButton *)*puVar7;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_70);
    HotUIButton::SetDownImage(pHVar10,asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    if (param_2 == '\0') {
LAB_036e02e8:
      puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
      (**(code **)(*(long *)*puVar7 + 0x188))((long *)*puVar7,0);
    }
    else {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036deb74(local_40,(long)local_74);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      cVar1 = std::operator==((string *)(lVar6 + 0x10),param_1);
      if (cVar1 == '\0') goto LAB_036e02e8;
      this[0x150] = (AdaptorSelectedPerksWidget)0x1;
      puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
      (**(code **)(*(long *)*puVar7 + 0xd0))(aTStack_68,(long *)*puVar7);
      if (this[0x188] == (AdaptorSelectedPerksWidget)0x0) {
        this[0x188] = (AdaptorSelectedPerksWidget)0x1;
        plVar8 = (long *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
        lVar6 = *plVar8;
        iVar3 = FUN_036dea84(*(undefined4 *)(lVar6 + 0x4c));
        iVar2 = FUN_036dede0();
        iVar3 = iVar3 - iVar2;
        *(int *)(this + 0x18c) = iVar3;
      }
      else {
        plVar8 = (long *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
        lVar6 = *plVar8;
        iVar3 = *(int *)(this + 0x18c);
      }
      iVar2 = FUN_036dea80(*(undefined4 *)(lVar6 + 0x48));
      Sexy::Point::Point(aPStack_60,iVar2,iVar3);
      Sexy::TPoint<int>::operator-(param_4,aTStack_68);
      Sexy::TPoint<int>::operator+(aTStack_48,(TPoint *)aPStack_60);
      Sexy::Point::Point(aPStack_58,(TPoint *)asStack_28);
      pCVar13._0_4_ = (Curve<Sexy::Point> *)PVZ_T();
      fVar12 = (float)PVZ_T();
      Sexy::Point::Point(aPStack_50,(TPoint *)aPStack_58);
      Sexy::Point::Point((Point *)aTStack_48,(TPoint *)aPStack_60);
      Curve<Sexy::Point>::Curve(pCVar13._0_4_,fVar12 + 0.5,asStack_28,aPStack_50,aTStack_48,3);
      std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>::push_back
                ((vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>> *)(this + 0x158),
                 (Curve *)asStack_28);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x170),&local_74);
      puVar7 = (undefined8 *)FUN_036deb60(*(undefined8 *)(this + 0x120),(long)local_74);
      (**(code **)(*(long *)*puVar7 + 0x1a8))((long *)*puVar7,local_20,local_1c);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    local_74 = local_74 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::onPerkSelected(std::string&, bool, Sexy::Point&) */

void __thiscall
AdaptorSelectedPerksWidget::onPerkSelected
          (AdaptorSelectedPerksWidget *this,string *param_1,bool param_2,Point *param_3)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,(TPoint *)param_3);
  onSelectedPerksChanged(this,param_1,1,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSelectedPerksWidget::onPerkDeselected(std::string&) */

void __thiscall
AdaptorSelectedPerksWidget::onPerkDeselected(AdaptorSelectedPerksWidget *this,string *param_1)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10);
  onSelectedPerksChanged(this,param_1,0,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

