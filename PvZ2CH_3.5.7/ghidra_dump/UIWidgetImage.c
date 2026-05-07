// Class: UIWidgetImage


/* UIWidgetImage::GetPVZ2Image() const */

UIWidgetImage * __thiscall UIWidgetImage::GetPVZ2Image(UIWidgetImage *this)

{
  return this + 0xd8;
}


/* UIWidgetImage::~UIWidgetImage() */

void __thiscall UIWidgetImage::~UIWidgetImage(UIWidgetImage *this)

{
  *(undefined ***)this = &PTR_GetClass_0696fa20;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIWidgetImage::~UIWidgetImage() */

void __thiscall UIWidgetImage::~UIWidgetImage(UIWidgetImage *this)

{
  ~UIWidgetImage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetImage::UIWidgetImage() */

void __thiscall UIWidgetImage::UIWidgetImage(UIWidgetImage *this)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696fa20;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0xd8),0,2);
  *(undefined4 *)(this + 0x110) = 0;
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Widget::SetColor((Widget *)this,0,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetImage::SetImage(Sexy::Image*) */

void __thiscall UIWidgetImage::SetImage(UIWidgetImage *this,Image *param_1)

{
  *(Image **)(this + 0xe0) = param_1;
  if (*(int *)(this + 0xd8) == 0) {
    *(undefined4 *)(this + 0xd8) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetImage::UIWidgetImage(Sexy::Image*) */

void __thiscall UIWidgetImage::UIWidgetImage(UIWidgetImage *this,Image *param_1)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696fa20;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0xd8),0,2);
  *(undefined4 *)(this + 0x110) = 0;
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Widget::SetColor((Widget *)this,0,aCStack_18);
  SetImage(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetImage::SetImage(std::string const&) */

void __thiscall UIWidgetImage::SetImage(UIWidgetImage *this,string *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)StringHelper::ToImage(param_1,false);
  SetImage(this,pIVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetImage::UIWidgetImage(std::string const&) */

void __thiscall UIWidgetImage::UIWidgetImage(UIWidgetImage *this,string *param_1)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696fa20;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0xd8),0,2);
  *(undefined4 *)(this + 0x110) = 0;
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Widget::SetColor((Widget *)this,0,aCStack_18);
  SetImage(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetImage::SetImage(PVZ2UIImage const&) */

void __thiscall UIWidgetImage::SetImage(UIWidgetImage *this,PVZ2UIImage *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xf0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x30);
  return;
}


/* UIWidgetImage::SetImageType(PVZ2UIImageType const&, float) */

void __thiscall
UIWidgetImage::SetImageType(UIWidgetImage *this,PVZ2UIImageType *param_1,float param_2)

{
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)param_1;
  *(float *)(this + 0x10c) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetImage::internalDraw(Sexy::Graphics*) */

void __thiscall UIWidgetImage::internalDraw(UIWidgetImage *this,Graphics *param_1)

{
  PVZ2UIImage *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd8) == 4) {
    if (*(long *)(this + 0xf8) == 0) goto LAB_04b7fa34;
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x54);
  }
  else {
    if ((*(long *)(this + 0xe0) == 0) || (*(int *)(this + 0xd8) < 1)) goto LAB_04b7fa34;
    if (*(int *)(this + 0x110) == 1) {
      this_00 = (PVZ2UIImage *)(this + 0xd8);
      iVar3 = *(int *)(this + 0x50);
      iVar1 = PVZ2UIImage::GetWidth(this_00);
      iVar4 = *(int *)(this + 0x54);
      iVar2 = PVZ2UIImage::GetHeight(this_00);
      Sexy::Insets::Insets
                (aIStack_18,(iVar3 - iVar1) / 2,(iVar4 - iVar2) / 2,*(int *)(this + 0x50),
                 *(int *)(this + 0x54));
      PVZ2UIImage::Draw(this_00,param_1,aIStack_18);
      goto LAB_04b7fa34;
    }
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x54);
  }
  Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
  PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0xd8),param_1,aIStack_18);
LAB_04b7fa34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetImage::Draw(Sexy::Graphics*) */

void __thiscall UIWidgetImage::Draw(UIWidgetImage *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  RenderEffectDefinition *pRVar3;
  RenderEffect *pRVar4;
  Insets *pIVar5;
  code *pcVar6;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x6e] == (UIWidgetImage)0x0) {
    pIVar5 = (Insets *)(**(code **)(*(long *)this + 0x178))(this,0);
    Sexy::Insets::Insets(aIStack_30,pIVar5);
    Sexy::Color::Color((Color *)asStack_20,0);
    cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)aIStack_30,(TRect *)asStack_20);
    if (cVar2 == '\0') {
      internalDraw(this,param_1);
    }
    else {
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_30);
      internalDraw(this,param_1);
    }
  }
  else {
    pRVar3 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b874d0);
    pRVar4 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar3);
    pcVar6 = *(code **)(*(long *)pRVar4 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar6)(pRVar4,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar4,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      internalDraw(this,param_1);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

