// Class: RareFilterButton


/* RareFilterButton::~RareFilterButton() */

void __thiscall RareFilterButton::~RareFilterButton(RareFilterButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0683db50;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RareFilterButton::~RareFilterButton() */

void __thiscall RareFilterButton::~RareFilterButton(RareFilterButton *this)

{
  ~RareFilterButton(this);
  AK::FreeHook(this);
  return;
}


/* RareFilterButton::RareFilterButton(int) */

void __thiscall RareFilterButton::RareFilterButton(RareFilterButton *this,int param_1)

{
  undefined8 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0683db50;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xe8] = (RareFilterButton)0x1;
  *(int *)(this + 0xec) = param_1;
  if (((uint)param_1 >> 1 & 1) != 0) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00a08);
    *(undefined8 *)(this + 0xd8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00348);
    *(undefined8 *)(this + 0xe0) = uVar1;
    return;
  }
  if (((uint)param_1 >> 2 & 1) != 0) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affd50);
    *(undefined8 *)(this + 0xd8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff40);
    *(undefined8 *)(this + 0xe0) = uVar1;
    return;
  }
  if (((uint)param_1 >> 3 & 1) != 0) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affbb8);
    *(undefined8 *)(this + 0xd8) = uVar1;
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00280);
    *(undefined8 *)(this + 0xe0) = uVar1;
    return;
  }
  if (((uint)param_1 >> 4 & 1) == 0) {
    if (((uint)param_1 >> 5 & 1) != 0) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00208);
      *(undefined8 *)(this + 0xd8) = uVar1;
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affa50);
      *(undefined8 *)(this + 0xe0) = uVar1;
    }
    return;
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00900);
  *(undefined8 *)(this + 0xd8) = uVar1;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b000f0);
  *(undefined8 *)(this + 0xe0) = uVar1;
  return;
}


/* RareFilterButton::TouchEnded(Sexy::Touch const&) */

void __thiscall RareFilterButton::TouchEnded(RareFilterButton *this,Touch *param_1)

{
  RareFilterButton RVar1;
  
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  RVar1 = this[0xe8];
  this[0xe8] = (RareFilterButton)((byte)RVar1 ^ 1);
  MessageRouter::Post<int,bool,int,bool>
            ((MessageRouter *)gMessageRouter,Message::ChangeRareFilterState,*(int *)(this + 0xec),
             (bool)((byte)RVar1 ^ 1));
  return;
}


/* RareFilterButton::Draw(Sexy::Graphics*) */

void __thiscall RareFilterButton::Draw(RareFilterButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  if (this[0xe8] == (RareFilterButton)0x0) {
    pIVar2 = *(Image **)(this + 0xe0);
    if (pIVar2 != (Image *)0x0) {
      iVar1 = FUN_043924ac(0x10);
      Sexy::Graphics::DrawImage
                (param_1,pIVar2,iVar1,0,*(int *)(this + 0x50) - iVar1,*(int *)(this + 0x54));
      nop();
      return;
    }
  }
  else if (*(Image **)(this + 0xd8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xd8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  nop();
  return;
}

