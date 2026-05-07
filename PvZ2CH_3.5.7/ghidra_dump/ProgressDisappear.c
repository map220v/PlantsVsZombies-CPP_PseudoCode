// Class: ProgressDisappear


/* ProgressDisappear::~ProgressDisappear() */

void __thiscall ProgressDisappear::~ProgressDisappear(ProgressDisappear *this)

{
  *(undefined ***)this = &PTR_GetClass_066ef8f0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ProgressDisappear::~ProgressDisappear() */

void __thiscall ProgressDisappear::~ProgressDisappear(ProgressDisappear *this)

{
  ~ProgressDisappear(this);
  AK::FreeHook(this);
  return;
}


/* ProgressDisappear::ProgressDisappear() */

void __thiscall ProgressDisappear::ProgressDisappear(ProgressDisappear *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066ef8f0;
  Sexy::Color::Color((Color *)(this + 0xe8));
  this[0x59] = (ProgressDisappear)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProgressDisappear::StartEffect(float, float) */

void __thiscall ProgressDisappear::StartEffect(ProgressDisappear *this,float param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_T();
  Curve<int>::Curve((Curve<int> *)(fVar2 + param_2),param_2 + param_1 + fVar3,&local_20,0xff,0,1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe4) = local_10;
  *(undefined8 *)(this + 0xd4) = local_20;
  *(undefined8 *)(this + 0xdc) = uStack_18;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProgressDisappear::Update() */

void __thiscall ProgressDisappear::Update(ProgressDisappear *this)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  fVar3 = (float)PVZ_T();
  iVar2 = Curve<int>::GetAt((Curve<int> *)(this + 0xd4),fVar3);
  Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar2);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xe8) = local_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  *(int *)(this + 0xf8) = (int)((float)*(int *)(this + 0x54) * 0.003921569 * (float)(iVar2 + -0xff))
  ;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProgressDisappear::Draw(Sexy::Graphics*) */

void __thiscall ProgressDisappear::Draw(ProgressDisappear *this,Graphics *param_1)

{
  Image *pIVar1;
  
  nop();
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0xe8));
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0de8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar1,0,*(int *)(this + 0xf8),*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

