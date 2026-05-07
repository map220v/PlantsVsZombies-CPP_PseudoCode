// Class: Sexy::PrimeTextWidget


/* Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(bool) */

void __thiscall Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(PrimeTextWidget *this,bool param_1)

{
  this[0xf4] = (PrimeTextWidget)param_1;
  return;
}


void __thiscall Sexy::PrimeTextWidget::SetText(PrimeTextWidget *this,wstring *param_1)

{
  bool bVar1;
  
  if (*(long *)(this + 0xe8) == 0) {
    if ((*(long *)(this + 0xe0) != 0) &&
       (bVar1 = std::operator!=((wstring *)(*(long *)(this + 0xe0) + 8),param_1), bVar1)) {
      thunk_FUN_05477b9c(*(long *)(this + 0xe0) + 8,param_1);
      ClearGlyphMesh(this);
      return;
    }
  }
  else {
    bVar1 = std::operator!=((wstring *)(*(long *)(this + 0xe8) + 8),param_1);
    if (bVar1) {
      thunk_FUN_05477b9c(*(long *)(this + 0xe8) + 8,param_1);
      return;
    }
  }
  return;
}


/* Sexy::PrimeTextWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::PrimeTextWidget::Draw(PrimeTextWidget *this,Graphics *param_1)

{
  if (*(long *)(this + 0xe8) == 0) {
    if ((*(long *)(this + 0xd8) != 0) || (*(long *)(this + 0xe0) != 0)) {
      (**(code **)(*(long *)this + 0x318))(this,param_1);
      return;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x310))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTextWidget::DrawWithFont(Sexy::Graphics*) */

void __thiscall Sexy::PrimeTextWidget::DrawWithFont(PrimeTextWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  puVar5 = *(undefined8 **)(this + 0xe8);
  iVar1 = *(int *)((long)puVar5 + 0x44);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    iVar1 = *(int *)(puVar5 + 2);
    iVar2 = *(int *)((long)puVar5 + 0x14);
    iVar3 = *(int *)(puVar5 + 3);
    uVar6 = *puVar5;
    FUN_05477b24(auStack_20,puVar5 + 1);
    Color::Color(aCStack_18,0xffffffff);
    Font::DrawString_Line
              ((float)iVar1,(float)iVar2,(float)iVar3,uVar6,param_1,auStack_20,0,aCStack_18,0);
    FUN_05476c50(auStack_20);
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(puVar5 + 2);
    iVar2 = *(int *)((long)puVar5 + 0x14);
    iVar3 = *(int *)(puVar5 + 3);
    iVar4 = *(int *)((long)puVar5 + 0x1c);
    uVar6 = *puVar5;
    FUN_05477b24(auStack_20,puVar5 + 1);
    Color::Color(aCStack_18,0xffffffff);
    Font::DrawString_Paragraph
              ((float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar6,param_1,auStack_20,0,0,
               aCStack_18,0);
    FUN_05476c50(auStack_20);
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(puVar5 + 2);
    iVar2 = *(int *)((long)puVar5 + 0x14);
    uVar6 = *puVar5;
    FUN_05477b24(auStack_20,puVar5 + 1);
    Color::Color(aCStack_18,0xffffffff);
    Font::DrawString_Simple((float)iVar1,(float)iVar2,uVar6,param_1,auStack_20,aCStack_18,0);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeTextWidget::PrimeTextWidget() */

void __thiscall Sexy::PrimeTextWidget::PrimeTextWidget(PrimeTextWidget *this)

{
  Widget::Widget((Widget *)this);
  this[0x59] = (PrimeTextWidget)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06a362c0;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xf4] = (PrimeTextWidget)0x0;
  WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,true);
  return;
}


/* Sexy::PrimeTextWidget::ClearGlyphMesh() */

void __thiscall Sexy::PrimeTextWidget::ClearGlyphMesh(PrimeTextWidget *this)

{
  PrimeGlyphMesh *this_00;
  
  this_00 = *(PrimeGlyphMesh **)(this + 0xd8);
  if (this_00 != (PrimeGlyphMesh *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)(this + 0xd8) = 0;
  }
  return;
}


/* Sexy::PrimeTextWidget::Clear() */

void __thiscall Sexy::PrimeTextWidget::Clear(PrimeTextWidget *this)

{
  pair<int_const,std::wstring> *ppVar1;
  
  ppVar1 = *(pair<int_const,std::wstring> **)(this + 0xe0);
  if (ppVar1 != (pair<int_const,std::wstring> *)0x0) {
    std::pair<int_const,std::wstring>::~pair(ppVar1);
    AK::FreeHook(ppVar1);
    *(undefined8 *)(this + 0xe0) = 0;
  }
  ppVar1 = *(pair<int_const,std::wstring> **)(this + 0xe8);
  if (ppVar1 != (pair<int_const,std::wstring> *)0x0) {
    std::pair<int_const,std::wstring>::~pair(ppVar1);
    AK::FreeHook(ppVar1);
    *(undefined8 *)(this + 0xe8) = 0;
  }
  ClearGlyphMesh(this);
  return;
}


/* Sexy::PrimeTextWidget::~PrimeTextWidget() */

void __thiscall Sexy::PrimeTextWidget::~PrimeTextWidget(PrimeTextWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a362c0;
  Clear(this);
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::PrimeTextWidget::~PrimeTextWidget() */

void __thiscall Sexy::PrimeTextWidget::~PrimeTextWidget(PrimeTextWidget *this)

{
  ~PrimeTextWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PrimeTextWidget::SetPotentialText(Sexy::PrimeText_PotentialText*) */

void __thiscall
Sexy::PrimeTextWidget::SetPotentialText(PrimeTextWidget *this,PrimeText_PotentialText *param_1)

{
  pair<int_const,std::wstring> *this_00;
  
  this_00 = *(pair<int_const,std::wstring> **)(this + 0xe0);
  if (this_00 != (pair<int_const,std::wstring> *)0x0) {
    std::pair<int_const,std::wstring>::~pair(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)(this + 0xe0) = 0;
    ClearGlyphMesh(this);
  }
  *(PrimeText_PotentialText **)(this + 0xe0) = param_1;
  return;
}


/* Sexy::PrimeTextWidget::PrimeTextWidget(Sexy::PrimeText_PotentialText*) */

void __thiscall
Sexy::PrimeTextWidget::PrimeTextWidget(PrimeTextWidget *this,PrimeText_PotentialText *param_1)

{
  Widget::Widget((Widget *)this);
  this[0x59] = (PrimeTextWidget)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06a362c0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xf4] = (PrimeTextWidget)0x0;
  SetPotentialText(this,param_1);
  WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,true);
  return;
}


/* Sexy::PrimeTextWidget::SetPotentialText(Sexy::FontText_PotentialText*) */

void __thiscall
Sexy::PrimeTextWidget::SetPotentialText(PrimeTextWidget *this,FontText_PotentialText *param_1)

{
  pair<int_const,std::wstring> *this_00;
  
  this_00 = *(pair<int_const,std::wstring> **)(this + 0xe8);
  if (this_00 != (pair<int_const,std::wstring> *)0x0) {
    std::pair<int_const,std::wstring>::~pair(this_00);
    AK::FreeHook(this_00);
  }
  *(FontText_PotentialText **)(this + 0xe8) = param_1;
  return;
}


/* Sexy::PrimeTextWidget::PrimeTextWidget(Sexy::FontText_PotentialText*) */

void __thiscall
Sexy::PrimeTextWidget::PrimeTextWidget(PrimeTextWidget *this,FontText_PotentialText *param_1)

{
  Widget::Widget((Widget *)this);
  this[0x59] = (PrimeTextWidget)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06a362c0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xf4] = (PrimeTextWidget)0x0;
  SetPotentialText(this,param_1);
  WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,true);
  return;
}


/* Sexy::PrimeTextWidget::SetGlyphMesh(Sexy::PrimeGlyphMesh*) */

void __thiscall Sexy::PrimeTextWidget::SetGlyphMesh(PrimeTextWidget *this,PrimeGlyphMesh *param_1)

{
  ClearGlyphMesh(this);
  *(PrimeGlyphMesh **)(this + 0xd8) = param_1;
  return;
}


/* Sexy::PrimeTextWidget::UpdateGlyphMeshCacheVersion() */

void __thiscall Sexy::PrimeTextWidget::UpdateGlyphMeshCacheVersion(PrimeTextWidget *this)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(this + 0xe0) != 0) {
    lVar2 = PrimeText::Instance();
    uVar1 = FUN_05337980(*(undefined4 *)(lVar2 + 0x24));
    *(undefined4 *)(this + 0xf0) = uVar1;
  }
  return;
}


/* Sexy::PrimeTextWidget::CreateGlyphMesh() */

void __thiscall Sexy::PrimeTextWidget::CreateGlyphMesh(PrimeTextWidget *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(PrimeText_PotentialText **)(this + 0xe0) != (PrimeText_PotentialText *)0x0) {
    uVar2 = PrimeText_PotentialText::Prepare(*(PrimeText_PotentialText **)(this + 0xe0));
    *(undefined8 *)(this + 0xd8) = uVar2;
    lVar3 = PrimeText::Instance();
    uVar1 = FUN_05337980(*(undefined4 *)(lVar3 + 0x24));
    *(undefined4 *)(this + 0xf0) = uVar1;
  }
  return;
}


/* Sexy::PrimeTextWidget::UpdateGlyphMesh() */

void __thiscall Sexy::PrimeTextWidget::UpdateGlyphMesh(PrimeTextWidget *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(this + 0xe0) == 0) {
    return;
  }
  if (*(long *)(this + 0xd8) != 0) {
    iVar1 = *(int *)(this + 0xf0);
    lVar3 = PrimeText::Instance();
    iVar2 = FUN_05337980(*(undefined4 *)(lVar3 + 0x24));
    if (iVar1 != iVar2) {
      ClearGlyphMesh(this);
    }
    if (*(long *)(this + 0xd8) != 0) {
      return;
    }
  }
  CreateGlyphMesh(this);
  return;
}


/* Sexy::PrimeTextWidget::SetColor(int, Sexy::Color const&) */

void __thiscall Sexy::PrimeTextWidget::SetColor(PrimeTextWidget *this,int param_1,Color *param_2)

{
  uint uVar1;
  PrimeGlyphMesh *this_00;
  
  UpdateGlyphMesh(this);
  this_00 = *(PrimeGlyphMesh **)(this + 0xd8);
  if (this_00 != (PrimeGlyphMesh *)0x0) {
    uVar1 = Color::ToInt(param_2);
    PrimeGlyphMesh::SetColorRGBA(this_00,uVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTextWidget::GetText() */

void Sexy::PrimeTextWidget::GetText(void)

{
  long lVar1;
  long in_x0;
  undefined8 in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(long *)(in_x0 + 0xe8) == 0) && (*(long *)(in_x0 + 0xe0) == 0)) {
    FUN_05478178();
    nop();
  }
  else {
    FUN_05477b24();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::PrimeTextWidget::SetPosition(int, int) */

void __thiscall Sexy::PrimeTextWidget::SetPosition(PrimeTextWidget *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(this + 0xe0);
    if ((lVar1 != 0) && ((*(int *)(lVar1 + 0x10) != param_1 || (*(int *)(lVar1 + 0x14) != param_2)))
       ) {
      *(int *)(lVar1 + 0x10) = param_1;
      *(int *)(lVar1 + 0x14) = param_2;
      ClearGlyphMesh(this);
      return;
    }
  }
  else {
    if ((*(int *)(lVar1 + 0x10) == param_1) && (*(int *)(lVar1 + 0x14) == param_2)) {
      return;
    }
    *(int *)(lVar1 + 0x10) = param_1;
    *(int *)(lVar1 + 0x14) = param_2;
  }
  return;
}


/* Sexy::PrimeTextWidget::SetScale(float, float) */

void __thiscall Sexy::PrimeTextWidget::SetScale(PrimeTextWidget *this,float param_1,float param_2)

{
  PrimeGlyphMesh *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(this + 0xe0);
    if (lVar1 != 0) {
      this_00 = *(PrimeGlyphMesh **)(this + 0xd8);
      *(undefined1 *)(lVar1 + 0x38) = 1;
      *(float *)(lVar1 + 0x3c) = param_1;
      *(float *)(lVar1 + 0x40) = param_2;
      if (this_00 != (PrimeGlyphMesh *)0x0) {
        PrimeGlyphMesh::SetPostScale
                  (this_00,param_1,param_2,(float)*(int *)(lVar1 + 0x10),
                   (float)*(int *)(lVar1 + 0x14),(float)*(int *)(lVar1 + 0x18),
                   (float)*(int *)(lVar1 + 0x1c));
        return;
      }
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(float *)(lVar1 + 0x3c) = param_1;
    *(float *)(lVar1 + 0x40) = param_2;
  }
  return;
}


/* Sexy::PrimeTextWidget::SetRect(Sexy::TRect<int>) */

void __thiscall Sexy::PrimeTextWidget::SetRect(PrimeTextWidget *this,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(long *)(this + 0xe0);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0x10) == *param_2) {
    iVar3 = *(int *)(lVar2 + 0x14);
    iVar4 = param_2[1];
    if (iVar3 != iVar4) goto LAB_05337f04;
    iVar5 = *(int *)(lVar2 + 0x18);
    iVar6 = param_2[2];
    if (iVar5 == iVar6) {
      iVar1 = param_2[3];
      if (*(int *)(lVar2 + 0x1c) == iVar1) {
        return;
      }
      goto LAB_05337f14;
    }
  }
  else {
    iVar4 = param_2[1];
LAB_05337f04:
    iVar6 = param_2[2];
  }
  iVar1 = param_2[3];
  iVar3 = iVar4;
  iVar5 = iVar6;
LAB_05337f14:
  *(int *)(lVar2 + 0x10) = *param_2;
  *(int *)(lVar2 + 0x14) = iVar3;
  *(int *)(lVar2 + 0x18) = iVar5;
  *(int *)(lVar2 + 0x1c) = iVar1;
  ClearGlyphMesh(this);
  return;
}


/* Sexy::PrimeTextWidget::GetPosition() */

Point * Sexy::PrimeTextWidget::GetPosition(void)

{
  long in_x0;
  long lVar1;
  Point *in_x8;
  
  lVar1 = *(long *)(in_x0 + 0xe8);
  if ((lVar1 == 0) && (lVar1 = *(long *)(in_x0 + 0xe0), lVar1 == 0)) {
    Point::Point(in_x8);
  }
  else {
    Point::Point(in_x8,*(int *)(lVar1 + 0x10),*(int *)(lVar1 + 0x14));
  }
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTextWidget::DrawWithPrimeFont(Sexy::Graphics*) */

void __thiscall Sexy::PrimeTextWidget::DrawWithPrimeFont(PrimeTextWidget *this,Graphics *param_1)

{
  char cVar1;
  Graphics *pGVar2;
  long lVar3;
  int local_30;
  int local_2c;
  Insets aIStack_28 [8];
  undefined4 local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateGlyphMesh(this);
  pGVar2 = *(Graphics **)(this + 0xd8);
  if (pGVar2 == (Graphics *)0x0) goto LAB_0533831c;
  if (this[0xf4] != (PrimeTextWidget)0x0) {
    (**(code **)(*(long *)this + 0xd0))(&local_30,this);
    Insets::Insets(aIStack_28,local_30,local_2c,*(int *)(this + 0x50),*(int *)(this + 0x54));
    lVar3 = *(long *)(this + 0xe0);
    if (lVar3 != 0) {
      local_1c = *(int *)(lVar3 + 0x1c);
      local_20 = *(undefined4 *)(lVar3 + 0x18);
      if (local_1c == PrimeTypeface::ParagraphHeightUnlimited) {
        local_1c = 10000;
      }
    }
    Insets::Insets(aIStack_18,0,0,0,0);
    cVar1 = TRect<int>::operator!=((TRect<int> *)(param_1 + 0x28),(TRect *)aIStack_18);
    if (cVar1 == '\0') {
      cVar1 = TRect<int>::Intersects((TRect<int> *)(gSexyAppBase + 0x71c),(TRect *)aIStack_28);
      if (cVar1 == '\0') goto LAB_0533831c;
      pGVar2 = *(Graphics **)(this + 0xd8);
    }
    else {
      cVar1 = TRect<int>::Intersects((TRect<int> *)(param_1 + 0x28),(TRect *)aIStack_28);
      if (cVar1 == '\0') goto LAB_0533831c;
      pGVar2 = *(Graphics **)(this + 0xd8);
    }
  }
  PrimeGlyphMesh::Draw(pGVar2,(uint)param_1,0);
LAB_0533831c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeTextWidget::SetText(std::wstring const&) */

void __thiscall Sexy::PrimeTextWidget::SetText(PrimeTextWidget *this,wstring *param_1)

{
  bool bVar1;
  
  if (*(long *)(this + 0xe8) == 0) {
    if ((*(long *)(this + 0xe0) != 0) &&
       (bVar1 = std::operator!=((wstring *)(*(long *)(this + 0xe0) + 8),param_1), bVar1)) {
      thunk_FUN_05477b9c(*(long *)(this + 0xe0) + 8,param_1);
      ClearGlyphMesh(this);
      return;
    }
  }
  else {
    bVar1 = std::operator!=((wstring *)(*(long *)(this + 0xe8) + 8),param_1);
    if (bVar1) {
      thunk_FUN_05477b9c(*(long *)(this + 0xe8) + 8,param_1);
      return;
    }
  }
  return;
}

