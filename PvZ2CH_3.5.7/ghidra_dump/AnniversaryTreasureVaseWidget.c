// Class: AnniversaryTreasureVaseWidget


/* AnniversaryTreasureVaseWidget::~AnniversaryTreasureVaseWidget() */

void __thiscall
AnniversaryTreasureVaseWidget::~AnniversaryTreasureVaseWidget(AnniversaryTreasureVaseWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06708660;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AnniversaryTreasureVaseWidget::~AnniversaryTreasureVaseWidget() */

void __thiscall
AnniversaryTreasureVaseWidget::~AnniversaryTreasureVaseWidget(AnniversaryTreasureVaseWidget *this)

{
  ~AnniversaryTreasureVaseWidget(this);
  AK::FreeHook(this);
  return;
}


/* AnniversaryTreasureVaseWidget::AnniversaryTreasureVaseWidget() */

void __thiscall
AnniversaryTreasureVaseWidget::AnniversaryTreasureVaseWidget(AnniversaryTreasureVaseWidget *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06708660;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = uVar1;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureVaseWidget::Init(int, bool) */

void __thiscall
AnniversaryTreasureVaseWidget::Init(AnniversaryTreasureVaseWidget *this,int param_1,bool param_2)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  char *__s;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  this[0x59] = (AnniversaryTreasureVaseWidget)0x0;
  std::string::string(asStack_18,"POPANIM_UI_ANNIVERSARYTREASURE_EFFECT_VASE");
  this_00 = (EffectAnim_UIAnim *)(this + 0xe0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f99999a,local_10,local_c,this_00,asStack_18,1);
  std::string::~string(asStack_18);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    if (param_2) {
      *(undefined4 *)(this + 0xdc) = 3;
      __s = "idle_break";
    }
    else {
      *(undefined4 *)(this + 0xdc) = 1;
      __s = "idle";
    }
    std::string::string((string *)&local_10,__s);
    EffectAnim_UIAnim::PlayOnce(this_00,(FastCurve *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureVaseWidget::IsBroken() */

bool __thiscall AnniversaryTreasureVaseWidget::IsBroken(AnniversaryTreasureVaseWidget *this)

{
  return *(int *)(this + 0xdc) == 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureVaseWidget::Respawn(float) */

void __thiscall
AnniversaryTreasureVaseWidget::Respawn(AnniversaryTreasureVaseWidget *this,float param_1)

{
  char cVar1;
  float fVar2;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0.0) {
    param_1 = (float)Sexy::Rand(1.0);
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xd8) = fVar2 + param_1;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe0));
  if (cVar1 == '\0') {
    std::string::string(asStack_18,"POPANIM_UI_ANNIVERSARYTREASURE_EFFECT_VASE");
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    EffectAnim_UIAnim::InitUIAnim
              (0x3f800000,local_10,local_c,(EffectAnim_UIAnim *)(this + 0xe0),asStack_18,1);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureVaseWidget::StartBreak() */

void __thiscall AnniversaryTreasureVaseWidget::StartBreak(AnniversaryTreasureVaseWidget *this)

{
  char cVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe0));
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0xdc) = 2;
    std::string::string(asStack_58,"break");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AnniversaryTreasureVaseWidget,void(AnniversaryTreasureVaseWidget::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(this + 0xe0),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureVaseWidget::OnAnimFinish(std::string const&) */

void __thiscall
AnniversaryTreasureVaseWidget::OnAnimFinish(AnniversaryTreasureVaseWidget *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  UIAnniversaryTreasure *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("break",param_1);
  if (bVar1) {
    *(undefined4 *)(this + 0xdc) = 3;
    this_00 = (UIAnniversaryTreasure *)UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr();
    UIAnniversaryTreasure::VaseAnimFinish(this_00);
  }
  else {
    bVar1 = std::operator==("drop",param_1);
    if (bVar1) {
      cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe0));
      if (cVar2 != '\0') {
        *(undefined4 *)(this + 0xdc) = 1;
        std::string::string(asStack_10,"idle");
        EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(this + 0xe0),asStack_10);
        std::string::~string(asStack_10);
        nop();
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
/* AnniversaryTreasureVaseWidget::Update() */

void __thiscall AnniversaryTreasureVaseWidget::Update(AnniversaryTreasureVaseWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate(this_00);
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0xd8) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0xdc) = 0;
    *(undefined4 *)(this + 0xd8) = uVar3;
    std::string::string(asStack_58,"drop");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AnniversaryTreasureVaseWidget,void(AnniversaryTreasureVaseWidget::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen(this_00,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureVaseWidget::Draw(Sexy::Graphics*) */

void __thiscall
AnniversaryTreasureVaseWidget::Draw(AnniversaryTreasureVaseWidget *this,Graphics *param_1)

{
  char cVar1;
  
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe0));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0xe0),param_1);
  return;
}

