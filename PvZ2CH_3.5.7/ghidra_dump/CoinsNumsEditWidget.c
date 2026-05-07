// Class: CoinsNumsEditWidget


/* CoinsNumsEditWidget::~CoinsNumsEditWidget() */

void __thiscall CoinsNumsEditWidget::~CoinsNumsEditWidget(CoinsNumsEditWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066ee630;
  *(undefined ***)(this + 0xd8) = &PTR_getText_066ee9b0;
  Sexy::EditWidget::~EditWidget((EditWidget *)this);
  return;
}


/* CoinsNumsEditWidget::~CoinsNumsEditWidget() */

void __thiscall CoinsNumsEditWidget::~CoinsNumsEditWidget(CoinsNumsEditWidget *this)

{
  ~CoinsNumsEditWidget(this);
  AK::FreeHook(this);
  return;
}


/* CoinsNumsEditWidget::CoinsNumsEditWidget(Sexy::EditListener*) */

void __thiscall
CoinsNumsEditWidget::CoinsNumsEditWidget(CoinsNumsEditWidget *this,EditListener *param_1)

{
  Sexy::EditWidget::EditWidget((EditWidget *)this,0,param_1);
  *(undefined ***)this = &PTR_GetClass_066ee630;
  *(undefined ***)(this + 0xd8) = &PTR_getText_066ee9b0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinsNumsEditWidget::setText(std::string const&) */

void __thiscall CoinsNumsEditWidget::setText(CoinsNumsEditWidget *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  int local_18c;
  string asStack_188 [8];
  string asStack_180 [8];
  string asStack_178 [8];
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18c = 0;
  Set8BytesTo0(asStack_188);
  uVar2 = FUN_05474178(param_1);
  if (uVar2 < 3) {
    thunk_FUN_05475e00(asStack_188,param_1);
  }
  else {
    FUN_05475ffc(asStack_178,param_1,0,3);
    FUN_05474278(asStack_188,asStack_178);
    std::string::~string(asStack_178);
  }
  FUN_05461f74(auStack_170,asStack_188,8);
  plVar3 = (long *)FUN_0544af48(auStack_170,(ActivityTypeID *)&local_18c);
  lVar4 = FUN_0544a07c((long)plVar3 + *(long *)(*plVar3 + -0x18));
  if (((lVar4 != 0) && (cVar1 = FUN_0544a0e0(auStack_110), cVar1 != '\0')) && (local_18c - 1U < 999)
     ) {
    pcVar5 = *(code **)(*(long *)this + 0x340);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_18c);
    Sexy::ToWString(asStack_180);
    (*pcVar5)(this,asStack_178,1);
    FUN_05476c50(asStack_178);
    std::string::~string(asStack_180);
  }
  FUN_0546156c(auStack_170);
  std::string::~string(asStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CoinsNumsEditWidget::setText(std::string const&) */

void __thiscall CoinsNumsEditWidget::setText(CoinsNumsEditWidget *this,string *param_1)

{
  setText(this + -0xd8,param_1);
  return;
}

