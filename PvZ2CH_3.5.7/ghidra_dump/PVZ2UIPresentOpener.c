// Class: PVZ2UIPresentOpener


/* PVZ2UIPresentOpener::IsDoneOpening() const */

char __thiscall PVZ2UIPresentOpener::IsDoneOpening(PVZ2UIPresentOpener *this)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xd8);
  uVar4 = 0;
  uVar2 = FUN_04386e24(uVar5,*(undefined8 *)(this + 0xe0));
  cVar1 = '\x01';
  if (uVar2 != 0) {
    do {
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)FUN_04386e38(uVar5,uVar4);
        cVar1 = PVZ2UIPresentWidget::IsDoneOpening((PVZ2UIPresentWidget *)*puVar3);
        uVar5 = *(undefined8 *)(this + 0xd8);
        uVar2 = FUN_04386e24(uVar5,*(undefined8 *)(this + 0xe0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return cVar1;
}


/* PVZ2UIPresentOpener::OpenAllPresents() */

void __thiscall PVZ2UIPresentOpener::OpenAllPresents(PVZ2UIPresentOpener *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_04386e24(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04386e30(uVar4,uVar3);
    PVZ2UIPresentWidget::StartOpening((PVZ2UIPresentWidget *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::PVZ2UIPresentOpener() */

void __thiscall PVZ2UIPresentOpener::PVZ2UIPresentOpener(PVZ2UIPresentOpener *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683bb70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIPresentOpener::calcCardRect() */

void PVZ2UIPresentOpener::calcCardRect(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_04386f30(4);
  fVar6 = (float)iVar1;
  Sexy::Insets::Insets(in_x8);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afead0);
  iVar1 = *(int *)(lVar2 + 0x38);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afead0);
  fVar4 = (float)*(int *)(in_x0 + 0x50);
  fVar5 = (float)*(int *)(in_x0 + 0x54);
  fVar3 = ((float)iVar1 - fVar6) / (float)*(int *)(lVar2 + 0x3c);
  if (fVar3 <= fVar4 / fVar5) {
    *(int *)(in_x8 + 0xc) = *(int *)(in_x0 + 0x54);
    *(undefined4 *)(in_x8 + 4) = 0;
    *(int *)(in_x8 + 8) = (int)(fVar3 * fVar5);
    *(int *)in_x8 = (int)(fVar6 + (fVar4 - fVar3 * fVar5) * 0.5);
    return;
  }
  *(int *)(in_x8 + 8) = *(int *)(in_x0 + 0x50);
  *(int *)in_x8 = (int)fVar6;
  *(int *)(in_x8 + 0xc) = (int)(fVar4 / fVar3);
  *(int *)(in_x8 + 4) = (int)((fVar5 - fVar4 / fVar3) * 0.5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::layoutWidgets() */

void __thiscall PVZ2UIPresentOpener::layoutWidgets(PVZ2UIPresentOpener *this)

{
  unkuint9 Var1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float fVar7;
  int local_38;
  int local_34;
  TPoint aTStack_30 [8];
  int local_28;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcCardRect();
  fVar7 = (float)local_1c * 0.8;
  uVar4 = FUN_04386e24(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  Var1 = (unkuint9)uVar4;
  uVar6 = 0;
  while( true ) {
    if (uVar4 <= uVar6) break;
    Sexy::Insets::Insets
              (aIStack_18,
               (int)((float)local_28 + ((float)local_20 / (float)(unkint9)Var1) * (float)(int)uVar6)
               ,(int)(((float)local_1c - fVar7) * 0.5),(int)((float)local_20 / (float)(unkint9)Var1)
               ,(int)fVar7);
    iVar2 = FUN_04386f30(DAT_06afeb00);
    iVar3 = FUN_04386f30(DAT_06afeb04);
    Sexy::TRect<int>::Offset((TRect<int> *)aIStack_18,iVar2,iVar3);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_38,aTStack_30);
    Sexy::TRect<int>::Scale((TRect<int> *)aIStack_18,0.5,0.5,local_38,local_34);
    puVar5 = (undefined8 *)FUN_04386e30(*(undefined8 *)(this + 0xd8),uVar6);
    (**(code **)(*(long *)*puVar5 + 0x1a0))((long *)*puVar5,aIStack_18);
    uVar4 = FUN_04386e24(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
    uVar6 = uVar6 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIPresentOpener::Resize(int, int, int, int) */

void __thiscall
PVZ2UIPresentOpener::Resize
          (PVZ2UIPresentOpener *this,int param_1,int param_2,int param_3,int param_4)

{
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  layoutWidgets(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIPresentOpener::Draw(PVZ2UIPresentOpener *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  long lVar3;
  GraphicsAutoState aGStack_30 [8];
  TRect aTStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  calcCardRect();
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afead0);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afead0);
  iVar1 = *(int *)(lVar3 + 0x38);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afead0);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar3 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar2,aTStack_28,(TRect *)aIStack_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::~PVZ2UIPresentOpener() */

void __thiscall PVZ2UIPresentOpener::~PVZ2UIPresentOpener(PVZ2UIPresentOpener *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683bb70;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>>::~vector
            ((vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIPresentOpener::~PVZ2UIPresentOpener() */

void __thiscall PVZ2UIPresentOpener::~PVZ2UIPresentOpener(PVZ2UIPresentOpener *this)

{
  ~PVZ2UIPresentOpener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::AddPresent(Sexy::RtWeakPtr<PresentTable const>, Sexy::RtWeakPtr<PresentType
   const>) */

void __thiscall
PVZ2UIPresentOpener::AddPresent
          (PVZ2UIPresentOpener *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  PresentType *this_00;
  StandaloneEffect *pSVar2;
  long lVar3;
  PVZ2UIPresentWidget *this_01;
  long *plVar4;
  PVZ2UIPresentWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PresentType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  pSVar2 = (StandaloneEffect *)PresentType::BuildEffect(this_00);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = *(bool *)(lVar3 + 0x10);
  this_01 = ::operator_new(0x108);
  PVZ2UIPresentWidget::PVZ2UIPresentWidget(this_01,pSVar2,bVar1);
  local_10 = this_01;
  std::vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>>::push_back
            ((vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>> *)(this + 0xd8),
             &local_10);
  (**(code **)(*(long *)this + 0x60))(this,local_10);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  (**(code **)(*plVar4 + 0x48))();
  layoutWidgets(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIPresentOpener::AddPresent(Sexy::RtWeakPtr<PresentType const>) */

void __thiscall
PVZ2UIPresentOpener::AddPresent(PVZ2UIPresentOpener *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  PresentType *this_00;
  StandaloneEffect *pSVar1;
  PVZ2UIPresentWidget *this_01;
  long *plVar2;
  PVZ2UIPresentWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PresentType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pSVar1 = (StandaloneEffect *)PresentType::BuildEffect(this_00);
  this_01 = ::operator_new(0x108);
  PVZ2UIPresentWidget::PVZ2UIPresentWidget(this_01,pSVar1,false);
  local_10 = this_01;
  std::vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>>::push_back
            ((vector<PVZ2UIPresentWidget*,std::allocator<PVZ2UIPresentWidget*>> *)(this + 0xd8),
             &local_10);
  (**(code **)(*(long *)this + 0x60))(this,local_10);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar2 + 0x48))();
  layoutWidgets(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

