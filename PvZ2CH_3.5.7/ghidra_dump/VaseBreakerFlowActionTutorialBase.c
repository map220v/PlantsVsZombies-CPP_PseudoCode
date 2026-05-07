// Class: VaseBreakerFlowActionTutorialBase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::getOutroAdvice() */

void __thiscall
VaseBreakerFlowActionTutorialBase::getOutroAdvice(VaseBreakerFlowActionTutorialBase *this)

{
  long lVar1;
  undefined8 in_x8;
  
  lVar1 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* VaseBreakerFlowActionTutorialBase::HandleSuperFSMAction_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void VaseBreakerFlowActionTutorialBase::HandleSuperFSMAction_VaseBreakerTutorialState(void)

{
  return;
}


/* VaseBreakerFlowActionTutorialBase::onInitialized() */

void __thiscall
VaseBreakerFlowActionTutorialBase::onInitialized(VaseBreakerFlowActionTutorialBase *this)

{
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}


/* VaseBreakerFlowActionTutorialBase::onUpdate() */

void __thiscall VaseBreakerFlowActionTutorialBase::onUpdate(VaseBreakerFlowActionTutorialBase *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04978f94(*(undefined4 *)(this + 0x30));
  (**(code **)(*(long *)this + 0xc0))(this,uVar1,2);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionTutorialBase::onUpdate() */

void __thiscall VaseBreakerFlowActionTutorialBase::onUpdate(VaseBreakerFlowActionTutorialBase *this)

{
  onUpdate(this + -0x10);
  return;
}


/* VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState(VaseBreakerTutorialState) */

void __thiscall
VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState
          (VaseBreakerFlowActionTutorialBase *this,int param_2)

{
  if (*(int *)(this + 0x30) != -1) {
    (**(code **)(*(long *)this + 0xc0))(this,*(int *)(this + 0x30),3);
  }
  *(int *)(this + 0x30) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0xc0))(this,param_2,1);
  }
  return;
}


/* VaseBreakerFlowActionTutorialBase::onBegin() */

void __thiscall VaseBreakerFlowActionTutorialBase::onBegin(VaseBreakerFlowActionTutorialBase *this)

{
  setState_VaseBreakerTutorialState(this,0);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionTutorialBase::onBegin() */

void __thiscall VaseBreakerFlowActionTutorialBase::onBegin(VaseBreakerFlowActionTutorialBase *this)

{
  onBegin(this + -0x10);
  return;
}


/* VaseBreakerFlowActionTutorialBase::onPowerupSelected(BasePowerup*) */

void VaseBreakerFlowActionTutorialBase::onPowerupSelected(BasePowerup *param_1)

{
  int iVar1;
  
  iVar1 = FUN_04978f94(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 != 1) {
    return;
  }
  setState_VaseBreakerTutorialState((VaseBreakerFlowActionTutorialBase *)param_1,2);
  return;
}


/* VaseBreakerFlowActionTutorialBase::onPowerupDeactivated(BasePowerup*) */

void VaseBreakerFlowActionTutorialBase::onPowerupDeactivated(BasePowerup *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_04978f94(*(undefined4 *)(param_1 + 0x30));
  if (iVar2 != 2) {
    return;
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  if (cVar1 == '\0') {
    setState_VaseBreakerTutorialState((VaseBreakerFlowActionTutorialBase *)param_1,1);
    return;
  }
  setState_VaseBreakerTutorialState((VaseBreakerFlowActionTutorialBase *)param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::StaticClassInit() */

void VaseBreakerFlowActionTutorialBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionTutorialBase");
    (*pcVar2)(plVar1,asStack_10,FUN_0497aefc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionTutorialBase::StaticGetClass() */

long * VaseBreakerFlowActionTutorialBase::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionTutorialBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionTutorialBase::GetClass() const */

long * VaseBreakerFlowActionTutorialBase::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionTutorialBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionTutorialBase::VaseBreakerFlowActionTutorialBase() */

void __thiscall
VaseBreakerFlowActionTutorialBase::VaseBreakerFlowActionTutorialBase
          (VaseBreakerFlowActionTutorialBase *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917df0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionTutorialBase_06917ec8;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* VaseBreakerFlowActionTutorialBase::StaticNew() */

VaseBreakerFlowActionTutorialBase * VaseBreakerFlowActionTutorialBase::StaticNew(void)

{
  VaseBreakerFlowActionTutorialBase *this;
  
  this = ::operator_new(0x40);
  VaseBreakerFlowActionTutorialBase(this);
  return this;
}


/* VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase() */

void __thiscall
VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
          (VaseBreakerFlowActionTutorialBase *this)

{
  *(undefined ***)this = &PTR_GetClass_06917df0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionTutorialBase_06917ec8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase() */

void __thiscall
VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
          (VaseBreakerFlowActionTutorialBase *this)

{
  ~VaseBreakerFlowActionTutorialBase(this + -0x10);
  return;
}


/* VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase() */

void __thiscall
VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
          (VaseBreakerFlowActionTutorialBase *this)

{
  ~VaseBreakerFlowActionTutorialBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase() */

void __thiscall
VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
          (VaseBreakerFlowActionTutorialBase *this)

{
  ~VaseBreakerFlowActionTutorialBase(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::pointArrowAtEntity(BoardEntity*, Sexy::SexyVector3 const&) */

void VaseBreakerFlowActionTutorialBase::pointArrowAtEntity
               (BoardEntity *param_1,SexyVector3 *param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  StandaloneEffect *pSVar1;
  SexyVector3 *this_00;
  SexyVector3 *in_x2;
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38);
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  StandaloneEffect::SetVisibility(pSVar1,true);
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
  local_18[0] = Sexy::SexyVector3::operator+(this_00,in_x2);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)local_18,900000);
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  StandaloneEffect::SetIsScreenSpaceEffect(pSVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionTutorialBase::hideArrow() */

void __thiscall
VaseBreakerFlowActionTutorialBase::hideArrow(VaseBreakerFlowActionTutorialBase *this)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  StandaloneEffect::SetVisibility(this_00,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::setPowerupsClickable(bool) */

void __thiscall
VaseBreakerFlowActionTutorialBase::setPowerupsClickable
          (VaseBreakerFlowActionTutorialBase *this,bool param_1)

{
  int iVar1;
  UIWidget *pUVar2;
  int iVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  std::string::string(asStack_18,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  while( true ) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar1 = UIWidget::GetChildCount(pUVar2);
    if (iVar1 <= iVar3) break;
    iVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = iVar3 + 1;
    UIWidget::GetChildId(iVar1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    UIWidget::SetClickable(pUVar2,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::pointArrowAtPowerupButton(std::string const&) */

void __thiscall
VaseBreakerFlowActionTutorialBase::pointArrowAtPowerupButton
          (VaseBreakerFlowActionTutorialBase *this,string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  StandaloneEffect *pSVar3;
  UIWidget *pUVar4;
  UIEasyButtonWidget *this_01;
  long lVar5;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPowerupHolder");
  iVar6 = 0;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
  UIWidget::GetWidgetBySheetName(asStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  while( true ) {
    pUVar4 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar2 = UIWidget::GetChildCount(pUVar4);
    if (iVar2 <= iVar6) break;
    iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::GetChildId(iVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)&local_18);
    Sexy::RtId::~RtId((RtId *)&local_18);
    this_01 = (UIEasyButtonWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    lVar5 = UIEasyButtonWidget::GetImageNormal(this_01);
    cVar1 = std::operator==((string *)(lVar5 + 8),param_1);
    if (cVar1 == '\0') {
      pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      UIWidget::SetClickable(pUVar4,false);
    }
    else {
      pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      UIWidget::SetClickable(pUVar4,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      UIWidget::GetDrawRect();
      pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      StandaloneEffect::SetVisibility(pSVar3,true);
      pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)asStack_20,(float)(local_18 + local_10 / 2),(float)local_14);
      StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)asStack_20,900000);
      pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      StandaloneEffect::SetIsScreenSpaceEffect(pSVar3,true);
    }
    iVar6 = iVar6 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::setPowerupsFree(bool) */

void __thiscall
VaseBreakerFlowActionTutorialBase::setPowerupsFree
          (VaseBreakerFlowActionTutorialBase *this,bool param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = FUN_04979ef4(*puVar2);
  local_10 = FUN_04979f44(puVar2[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_04978fdc(lVar4 + 0x1a,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::onEnd() */

void __thiscall VaseBreakerFlowActionTutorialBase::onEnd(VaseBreakerFlowActionTutorialBase *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  UIWidget *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  setPowerupsFree(this,false);
  setPowerupsClickable(this,true);
  std::string::string(asStack_18,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  this_01 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  UIWidget::SetVisible(this_01,false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionTutorialBase::onEnd() */

void __thiscall VaseBreakerFlowActionTutorialBase::onEnd(VaseBreakerFlowActionTutorialBase *this)

{
  onEnd(this + -0x10);
  return;
}


/* VaseBreakerFlowActionTutorialBase::registerForEvents() */

void __thiscall
VaseBreakerFlowActionTutorialBase::registerForEvents(VaseBreakerFlowActionTutorialBase *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupSelected);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupSelected,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupDeactivated);
  local_70 = local_30;
  uStack_68 = uStack_28;
  local_60 = local_20;
  MessageRouter::
  Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupDeselected,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupDeactivated);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupDeactivated,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionTutorialBase::HandleStateMachine_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionTutorialBase::HandleStateMachine_VaseBreakerTutorialState
          (VaseBreakerFlowActionTutorialBase *this,uint param_2,int param_3)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_BouncingArrow *pEVar1;
  StandaloneEffect *this_01;
  UIWidget *this_02;
  Board *pBVar2;
  float fVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate2<VaseBreakerTutorialState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_VaseBreakerTutorialState);
  Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
  Delegate2<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState,StateAction)>
            (aDStack_38,aRStack_50);
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      if (param_3 == 1) {
        this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
        Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
        StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        pEVar1 = (Effect_BouncingArrow *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar1,5.0,25.0);
        pEVar1 = (Effect_BouncingArrow *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b72cb8);
        Effect_BouncingArrow::SetArrowImage(pEVar1,aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        this_01 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        StandaloneEffect::SetVisibility(this_01,false);
        setState_VaseBreakerTutorialState(this,1);
        (**(code **)(*(long *)this + 0x98))(this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 == 1) {
      std::string::string(asStack_58,"UIPowerupHolder");
      UIWidget::GetWidgetBySheetName(asStack_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      this_02 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      UIWidget::SetVisible(this_02,true);
      setPowerupsFree(this,true);
      setPowerupsClickable(this,false);
      (**(code **)(*(long *)this + 0xa8))(aRStack_50,this);
      pointArrowAtPowerupButton(this,(string *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      (**(code **)(*(long *)this + 0xb0))(aRStack_50,this);
      Board::DisplayAdviceAgain(pBVar2,aRStack_50,8,0);
      FUN_05476c50(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
    else if (param_3 != 0) {
      if (param_3 == 3) {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        hideArrow(this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
    break;
  case 4:
    if (param_3 == 1) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar4;
      setPowerupsClickable(this,false);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      (**(code **)(*(long *)this + 0xb8))(aRStack_50,this);
      Board::DisplayAdviceAgain(pBVar2,aRStack_50,7,0);
      FUN_05476c50(aRStack_50);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        fVar3 = (float)PVZ_T();
        if (3.0 < fVar3 - *(float *)(this + 0x34)) {
          RunnableAction::End((RunnableAction *)(this + 0x10));
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

