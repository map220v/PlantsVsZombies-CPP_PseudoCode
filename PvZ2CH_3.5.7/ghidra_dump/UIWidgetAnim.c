// Class: UIWidgetAnim


/* UIWidgetAnim::GetScale() const */

UIWidgetAnim * __thiscall UIWidgetAnim::GetScale(UIWidgetAnim *this)

{
  return this + 0xe0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetAnim::Draw(Sexy::Graphics*) */

void __thiscall UIWidgetAnim::Draw(UIWidgetAnim *this,Graphics *param_1)

{
  char cVar1;
  long lVar2;
  Insets *pIVar3;
  float fVar4;
  Insets aIStack_50 [16];
  float local_40;
  float local_3c;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0xd8) != 0) &&
     (lVar2 = FUN_04b8008c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x20)), lVar2 != 0)) {
    pIVar3 = (Insets *)(**(code **)(*(long *)this + 0x178))(this,0);
    Sexy::Insets::Insets(aIStack_50,pIVar3);
    Sexy::Color::Color((Color *)&local_40,0);
    cVar1 = Sexy::TRect<int>::operator!=((TRect<int> *)aIStack_50,(TRect *)&local_40);
    if (cVar1 != '\0') {
      PopAnimRig::SetPAMColor(*(PopAnimRig **)(this + 0xd8),(Color *)aIStack_50);
    }
    lVar2 = FUN_04b8008c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x20));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar4 = (float)FUN_04b8013c();
    fVar4 = fVar4 * (768.0 / (float)*(int *)(gResourceManager + 0x208));
    Sexy::SexyTransform2D::Scale
              (aSStack_30,fVar4 * *(float *)(this + 0xe0),fVar4 * *(float *)(this + 0xe4));
    if (this[0xe8] == (UIWidgetAnim)0x0) {
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0xd8),param_1,aSStack_30);
    }
    else {
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_40,(float)*(int *)(lVar2 + 0x3c),(float)*(int *)(lVar2 + 0x40))
      ;
      local_3c = *(float *)(lVar2 + 0x28) * local_3c * *(float *)(this + 0xe4) * fVar4;
      local_40 = *(float *)(this + 0xe0) * local_40 * *(float *)(lVar2 + 0x28) * fVar4;
      FUN_04b8006c(((float)*(int *)(this + 0x50) - local_40) * 0.5,
                   ((float)*(int *)(this + 0x54) - local_3c) * 0.5,auStack_28,auStack_1c);
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0xd8),param_1,aSStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetAnim::~UIWidgetAnim() */

void __thiscall UIWidgetAnim::~UIWidgetAnim(UIWidgetAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_06970060;
  FUN_04b80090((function<bool(Sexy::Touch_const&)> *)(this + 0xf8));
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIWidgetAnim::~UIWidgetAnim() */

void __thiscall UIWidgetAnim::~UIWidgetAnim(UIWidgetAnim *this)

{
  ~UIWidgetAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetAnim::UIWidgetAnim() */

void __thiscall UIWidgetAnim::UIWidgetAnim(UIWidgetAnim *this)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06970060;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xe0),1.0,1.0);
  this[0xe8] = (UIWidgetAnim)0x0;
  Set8BytesTo0(this + 0xf0);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  FUN_04b80090((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Widget::SetColor((Widget *)this,0,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetAnim::SetAnimRig(PopAnimRig*) */

void __thiscall UIWidgetAnim::SetAnimRig(UIWidgetAnim *this,PopAnimRig *param_1)

{
  char cVar1;
  UIWidgetAnim *pUVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
  }
  *(PopAnimRig **)(this + 0xd8) = param_1;
  if (param_1 != (PopAnimRig *)0x0) {
    pUVar2 = this + 0xf0;
    cVar1 = FUN_0547419c(pUVar2);
    if (cVar1 != '\0') {
      pUVar2 = (UIWidgetAnim *)&DAT_06b87610;
    }
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(param_1,pUVar2,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetAnim::SetAnimRig(std::string const&) */

void __thiscall UIWidgetAnim::SetAnimRig(UIWidgetAnim *this,string *param_1)

{
  char cVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') {
    SetAnimRig(this,(PopAnimRig *)0x0);
    return;
  }
  pPVar2 = (PopAnim *)StringHelper::ToAnimRig(param_1,false);
  if (pPVar2 != (PopAnim *)0x0) {
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
    SetAnimRig(this,pPVar4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetAnim::SetLabel(std::string const&) */

void UIWidgetAnim::SetLabel(string *param_1)

{
  char cVar1;
  string *psVar2;
  PopAnimRig *pPVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  psVar2 = param_1 + 0xf0;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(psVar2);
  pPVar3 = *(PopAnimRig **)(param_1 + 0xd8);
  if (pPVar3 != (PopAnimRig *)0x0) {
    cVar1 = FUN_0547419c(psVar2);
    if (cVar1 != '\0') {
      psVar2 = (string *)&DAT_06b87610;
    }
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,psVar2,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetAnim::onAnimStopped(std::string const&) */

void __thiscall UIWidgetAnim::onAnimStopped(UIWidgetAnim *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xf8));
  if (!bVar1) {
    return;
  }
  std::function<void(std::string_const&)>::operator()
            ((function<void(std::string_const&)> *)(this + 0xf8),param_1);
  return;
}


/* UIWidgetAnim::Update() */

void __thiscall UIWidgetAnim::Update(UIWidgetAnim *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0xd8);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetAnim::SetLabel(std::string const&, std::function<void (std::string const&)>) */

void __thiscall UIWidgetAnim::SetLabel(UIWidgetAnim *this,undefined8 param_2,function *param_3)

{
  char cVar1;
  UIWidgetAnim *pUVar2;
  PopAnimRig *pPVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pUVar2 = this + 0xf0;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(pUVar2);
  std::function<void()>::operator=((function<void()> *)(this + 0xf8),param_3);
  pPVar3 = *(PopAnimRig **)(this + 0xd8);
  if (pPVar3 != (PopAnimRig *)0x0) {
    cVar1 = FUN_0547419c(pUVar2);
    if (cVar1 != '\0') {
      pUVar2 = (UIWidgetAnim *)&DAT_06b87610;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UIWidgetAnim,void(UIWidgetAnim::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar3,pUVar2,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

