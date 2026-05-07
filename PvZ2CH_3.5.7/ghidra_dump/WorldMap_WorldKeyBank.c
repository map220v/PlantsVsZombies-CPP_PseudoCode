// Class: WorldMap_WorldKeyBank


/* WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank() */

void __thiscall WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank(WorldMap_WorldKeyBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0685bbc0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WorldKeyBank_0685bd60;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank() */

void __thiscall WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank(WorldMap_WorldKeyBank *this)

{
  ~WorldMap_WorldKeyBank(this + -0x10);
  return;
}


/* WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank() */

void __thiscall WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank(WorldMap_WorldKeyBank *this)

{
  ~WorldMap_WorldKeyBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank() */

void __thiscall WorldMap_WorldKeyBank::~WorldMap_WorldKeyBank(WorldMap_WorldKeyBank *this)

{
  ~WorldMap_WorldKeyBank(this + -0x10);
  return;
}


/* WorldMap_WorldKeyBank::WorldMap_WorldKeyBank() */

void __thiscall WorldMap_WorldKeyBank::WorldMap_WorldKeyBank(WorldMap_WorldKeyBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685bbc0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WorldKeyBank_0685bd60;
  return;
}


/* WorldMap_WorldKeyBank::StaticNew() */

WorldMap_WorldKeyBank * WorldMap_WorldKeyBank::StaticNew(void)

{
  WorldMap_WorldKeyBank *this;
  
  this = ::operator_new(0x168);
  WorldMap_WorldKeyBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WorldKeyBank::StaticClassInit() */

void WorldMap_WorldKeyBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_WorldKeyBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04568190,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WorldKeyBank::StaticGetClass() */

long * WorldMap_WorldKeyBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_WorldKeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_WorldKeyBank::GetClass() const */

long * WorldMap_WorldKeyBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_WorldKeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WorldKeyBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_WorldKeyBank::Draw(WorldMap_WorldKeyBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  PlayerInfo *this_00;
  int *piVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  int local_20 [2];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10c08);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  local_20[0] = PlayerInfo::GetNumWorldKeys(this_00);
  local_18[0] = 0;
  piVar6 = eastl::max_alt<int>(local_20,(int *)local_18);
  Sexy::CommaSeparate(*piVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = FUN_04567fe4(0xf);
  iVar2 = FUN_04567fe4(0);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10c08);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10c08);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_02);
  FUN_05477b24(local_20,auStack_28);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar7,param_1,
             local_20,1,1,(Color *)local_18,0);
  FUN_05476c50(local_20);
  FUN_05476c50(auStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_WorldKeyBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_WorldKeyBank::Draw(WorldMap_WorldKeyBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

