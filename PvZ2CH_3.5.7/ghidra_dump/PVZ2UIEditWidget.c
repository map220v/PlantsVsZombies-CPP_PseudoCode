// Class: PVZ2UIEditWidget


/* PVZ2UIEditWidget::SetBackground(PVZ2UIImage const&) */

void __thiscall PVZ2UIEditWidget::SetBackground(PVZ2UIEditWidget *this,PVZ2UIImage *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x180) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x188) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 400) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x198) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined8 *)(this + 0x1b0) = *(undefined8 *)(param_1 + 0x30);
  return;
}


/* PVZ2UIEditWidget::Resize(int, int, int, int) */

void __thiscall
PVZ2UIEditWidget::Resize(PVZ2UIEditWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  Sexy::EditWidget::Resize((EditWidget *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x50);
  return;
}


/* PVZ2UIEditWidget::~PVZ2UIEditWidget() */

void __thiscall PVZ2UIEditWidget::~PVZ2UIEditWidget(PVZ2UIEditWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06836250;
  *(undefined ***)(this + 0xd8) = &PTR_getText_068365d0;
  Sexy::EditWidget::~EditWidget((EditWidget *)this);
  return;
}


/* PVZ2UIEditWidget::~PVZ2UIEditWidget() */

void __thiscall PVZ2UIEditWidget::~PVZ2UIEditWidget(PVZ2UIEditWidget *this)

{
  ~PVZ2UIEditWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIEditWidget::PVZ2UIEditWidget(Sexy::TRect<int> const&, int, Sexy::EditListener*,
   std::wstring const&, bool) */

void __thiscall
PVZ2UIEditWidget::PVZ2UIEditWidget
          (PVZ2UIEditWidget *this,TRect *param_1,int param_2,EditListener *param_3,wstring *param_4,
          bool param_5)

{
  int iVar1;
  int iVar2;
  PrimeTypeface *pPVar3;
  Font *pFVar4;
  
  Sexy::EditWidget::EditWidget((EditWidget *)this,param_2,param_3);
  *(undefined ***)this = &PTR_GetClass_06836250;
  *(undefined ***)(this + 0xd8) = &PTR_getText_068365d0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x180));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  Sexy::EditWidget::SetFont((EditWidget *)this,pPVar3,(PrimeTypeface *)0x0);
  Sexy::Widget::SetColors((Widget *)this,(int *)&DAT_06a886a0,5);
  iVar1 = *(int *)(this + 0x50);
  pFVar4 = *(Font **)(this + 0x110);
  *(undefined4 *)(this + 0x140) = 0xe;
  *(int *)(this + 0x14c) = iVar1;
  *(undefined4 *)(this + 0x148) = 0xc;
  if (pFVar4 == (Font *)0x0) {
    pPVar3 = *(PrimeTypeface **)(this + 0x108);
    if (pPVar3 != (PrimeTypeface *)0x0) {
      iVar2 = FUN_0436cc7c(10);
      Sexy::EditWidget::AddWidthCheckFont((EditWidget *)this,pPVar3,iVar1 - iVar2);
    }
  }
  else {
    iVar2 = FUN_0436cc7c(10);
    Sexy::EditWidget::AddWidthCheckFont((EditWidget *)this,pFVar4,iVar1 - iVar2);
  }
  thunk_FUN_05477b9c(this + 0xe8,param_4);
  this[0x16c] = (PVZ2UIEditWidget)param_5;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIEditWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIEditWidget::Draw(PVZ2UIEditWidget *this,Graphics *param_1)

{
  char cVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0436caac(*(undefined4 *)(this + 0x180));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x180),param_1,aIStack_18);
  }
  Sexy::EditWidget::Draw((EditWidget *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

