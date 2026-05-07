// Class: ViewBoardOrZombiesButton


/* ViewBoardOrZombiesButton::cancelTouch() */

void __thiscall ViewBoardOrZombiesButton::cancelTouch(ViewBoardOrZombiesButton *this)

{
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::StaticClassInit() */

void ViewBoardOrZombiesButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"ViewBoardOrZombiesButton");
    (*pcVar2)(plVar1,asStack_10,FUN_044f3b8c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ViewBoardOrZombiesButton::StaticGetClass() */

long * ViewBoardOrZombiesButton::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ViewBoardOrZombiesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViewBoardOrZombiesButton::GetClass() const */

long * ViewBoardOrZombiesButton::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ViewBoardOrZombiesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton() */

void __thiscall ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton(ViewBoardOrZombiesButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06856c80;
  *(undefined ***)(this + 0x10) = &PTR__ViewBoardOrZombiesButton_06856e20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton() */

void __thiscall ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton(ViewBoardOrZombiesButton *this)

{
  ~ViewBoardOrZombiesButton(this + -0x10);
  return;
}


/* ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton() */

void __thiscall ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton(ViewBoardOrZombiesButton *this)

{
  ~ViewBoardOrZombiesButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton() */

void __thiscall ViewBoardOrZombiesButton::~ViewBoardOrZombiesButton(ViewBoardOrZombiesButton *this)

{
  ~ViewBoardOrZombiesButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::ViewBoardOrZombiesButton() */

void __thiscall ViewBoardOrZombiesButton::ViewBoardOrZombiesButton(ViewBoardOrZombiesButton *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06856c80;
  *(undefined ***)(this + 0x10) = &PTR__ViewBoardOrZombiesButton_06856e20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = PVZ_EOT();
  this[0x175] = (ViewBoardOrZombiesButton)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x174] = (ViewBoardOrZombiesButton)0x1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x170) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ViewBoardOrZombiesButton::StaticNew() */

ViewBoardOrZombiesButton * ViewBoardOrZombiesButton::StaticNew(void)

{
  ViewBoardOrZombiesButton *this;
  
  this = ::operator_new(0x180);
  ViewBoardOrZombiesButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::onEyeMoveAnimFinished(std::string const&) */

void ViewBoardOrZombiesButton::onEyeMoveAnimFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)Sexy::Rand(4.0);
  *(float *)(param_1 + 0x170) = fVar2 + fVar3 + 2.0;
  if ((byte)((char)param_1[0x174] + 1U) < 6) {
    param_1[0x174] = (string)((char)param_1[0x174] + 1U);
  }
  else {
    param_1[0x174] = (string)0x1;
  }
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x168));
  Sexy::StrFormat("idle%d",asStack_40,(ulong)(byte)param_1[0x174]);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ViewBoardOrZombiesButton::updateState_Pressed() */

void __thiscall ViewBoardOrZombiesButton::updateState_Pressed(ViewBoardOrZombiesButton *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::registerForEvents() */

void __thiscall ViewBoardOrZombiesButton::registerForEvents(ViewBoardOrZombiesButton *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ViewBoardOrZombiesButton,bool(ViewBoardOrZombiesButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ViewBoardOrZombiesButton,void(ViewBoardOrZombiesButton::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::onExitState_Loading(WidgetState) */

void ViewBoardOrZombiesButton::onExitState_Loading(long param_1)

{
  bool bVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06b0ec90);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x168),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x168));
  std::string::string((string *)aRStack_40,"idle1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::updateState_Ready() */

void __thiscall ViewBoardOrZombiesButton::updateState_Ready(ViewBoardOrZombiesButton *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x170) <= fVar2) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    Sexy::StrFormat("eyemove%d",asStack_70,(ulong)(byte)this[0x174]);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onEyeMoveAnimFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x170) = uVar3;
  }
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168))
  ;
  fVar2 = (float)PVZ_T();
  fVar4 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::handleTouch(Sexy::Touch const&) */

void __thiscall ViewBoardOrZombiesButton::handleTouch(ViewBoardOrZombiesButton *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar2 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 3) {
    lVar4 = *(long *)param_1;
    lVar5 = *(long *)(this + 0x178);
    if ((cVar2 == '\0') || (lVar4 != lVar5)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      this[0x175] = (ViewBoardOrZombiesButton)((byte)this[0x175] ^ 1);
      MessageRouter::Post((_func_void *)gMessageRouter);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Game_Zombie_View_Release");
      lVar4 = *(long *)param_1;
      lVar5 = *(long *)(this + 0x178);
    }
  }
  else {
    if (iVar1 != 4) {
      if (((iVar1 == 0) && (cVar2 != '\0')) && (*(long *)(this + 0x178) == 0)) {
        *(undefined8 *)(this + 0x178) = *(undefined8 *)param_1;
        uVar6 = 1;
        (**(code **)(*(long *)this + 0xe8))(this,4);
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Play_UI_Game_Zombie_View_Press");
      }
      else {
        uVar6 = 0;
      }
      goto LAB_044f4014;
    }
    lVar4 = *(long *)param_1;
    uVar6 = 0;
    lVar5 = *(long *)(this + 0x178);
  }
  if (lVar4 == lVar5) {
    cancelTouch(this);
  }
LAB_044f4014:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewBoardOrZombiesButton::Draw(Sexy::Graphics*) */

void __thiscall ViewBoardOrZombiesButton::Draw(ViewBoardOrZombiesButton *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  PopAnimRig *this_00;
  float fVar3;
  float fVar4;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_044f34f8(*(undefined4 *)(this + 0x68));
  if ((cVar1 == '\0') ||
     ((this[0x175] != (ViewBoardOrZombiesButton)0x0 &&
      (cVar1 = UIWidget::isInState((UIWidget *)this,2), cVar1 != '\0')))) {
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    cVar1 = UIWidget::isInState((UIWidget *)this,2);
    if (cVar1 != '\0') goto LAB_044f4224;
LAB_044f4184:
    cVar1 = UIWidget::isInState((UIWidget *)this,4);
    if (cVar1 == '\0') goto LAB_044f4198;
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0ed70);
  }
  else {
    cVar1 = UIWidget::isInState((UIWidget *)this,2);
    if (cVar1 == '\0') goto LAB_044f4184;
LAB_044f4224:
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0ecc8);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  fVar3 = (float)FUN_044f33b4(0x40e00000);
  fVar4 = (float)FUN_044f33b4(0x40f00000);
  Sexy::Graphics::Translate(param_1,(int)fVar3,(int)fVar4);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  PopAnimRig::Draw(this_00,param_1);
  fVar3 = (float)FUN_044f33b4(0x40e00000);
  fVar4 = (float)FUN_044f33b4(0x40f00000);
  Sexy::Graphics::Translate(param_1,(int)-fVar3,(int)-fVar4);
LAB_044f4198:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ViewBoardOrZombiesButton::Draw(Sexy::Graphics*) */

void __thiscall ViewBoardOrZombiesButton::Draw(ViewBoardOrZombiesButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

