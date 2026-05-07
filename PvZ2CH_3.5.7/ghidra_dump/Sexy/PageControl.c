// Class: Sexy::PageControl


/* Sexy::PageControl::GetCurrentPage() */

undefined4 __thiscall Sexy::PageControl::GetCurrentPage(PageControl *this)

{
  return *(undefined4 *)(this + 0xe4);
}


/* Sexy::PageControl::~PageControl() */

void __thiscall Sexy::PageControl::~PageControl(PageControl *this)

{
  *(undefined ***)this = &PTR_GetClass_06a35c20;
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::PageControl::~PageControl() */

void __thiscall Sexy::PageControl::~PageControl(PageControl *this)

{
  ~PageControl(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PageControl::Draw(Sexy::Graphics*) */

void __thiscall Sexy::PageControl::Draw(PageControl *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = Image::GetCelWidth(*(Image **)(this + 0xd8));
  iVar5 = 0;
  iVar4 = Image::GetCelHeight(*(Image **)(this + 0xd8));
  iVar1 = *(int *)(this + 0x54);
  iVar6 = (*(int *)(this + 0x50) - *(int *)(this + 0xe0) * iVar3) / 2;
  if (0 < *(int *)(this + 0xe0)) {
    do {
      bVar2 = *(int *)(this + 0xe4) != iVar5;
      iVar5 = iVar5 + 1;
      Graphics::DrawImageCel(param_1,*(Image **)(this + 0xd8),iVar6,(iVar1 - iVar4) / 2,(uint)bVar2)
      ;
      iVar6 = iVar6 + iVar3;
    } while (iVar5 < *(int *)(this + 0xe0));
  }
  return;
}


/* Sexy::PageControl::PageControl(Sexy::Image*) */

void __thiscall Sexy::PageControl::PageControl(PageControl *this,Image *param_1)

{
  Widget::Widget((Widget *)this);
  *(Image **)(this + 0xd8) = param_1;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_06a35c20;
  return;
}


/* Sexy::PageControl::SetNumberOfPages(int) */

void __thiscall Sexy::PageControl::SetNumberOfPages(PageControl *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0xe0) != param_1) {
    *(int *)(this + 0xe0) = param_1;
    iVar1 = Image::GetCelWidth(*(Image **)(this + 0xd8));
    uVar2 = Image::GetCelHeight(*(Image **)(this + 0xd8));
    (**(code **)(*(long *)this + 0x198))
              (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),iVar1 * param_1,uVar2)
    ;
  }
  return;
}


/* Sexy::PageControl::SetCurrentPage(int) */

void __thiscall Sexy::PageControl::SetCurrentPage(PageControl *this,int param_1)

{
  *(int *)(this + 0xe4) = param_1;
  (**(code **)(*(long *)this + 0xe0))();
  return;
}

