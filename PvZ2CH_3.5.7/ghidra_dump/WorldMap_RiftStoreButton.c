// Class: WorldMap_RiftStoreButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftStoreButton::initLoadingResourcesGroupList() */

void __thiscall
WorldMap_RiftStoreButton::initLoadingResourcesGroupList(WorldMap_RiftStoreButton *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Rift_Common");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftStoreButton::performButtonAction() */

void WorldMap_RiftStoreButton::performButtonAction(void)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  (**(code **)(*plVar1 + 0x388))(plVar1,0,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftStoreButton::StaticClassInit() */

void WorldMap_RiftStoreButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_RiftStoreButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0368af20,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftStoreButton::StaticGetClass() */

long * WorldMap_RiftStoreButton::StaticGetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftStoreButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftStoreButton::GetClass() const */

long * WorldMap_RiftStoreButton::GetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftStoreButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton() */

void __thiscall WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton(WorldMap_RiftStoreButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0667c650;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftStoreButton_0667c800;
  UIButtonWidget::~UIButtonWidget((UIButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton() */

void __thiscall WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton(WorldMap_RiftStoreButton *this)

{
  ~WorldMap_RiftStoreButton(this + -0x10);
  return;
}


/* WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton() */

void __thiscall WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton(WorldMap_RiftStoreButton *this)

{
  ~WorldMap_RiftStoreButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton() */

void __thiscall WorldMap_RiftStoreButton::~WorldMap_RiftStoreButton(WorldMap_RiftStoreButton *this)

{
  ~WorldMap_RiftStoreButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftStoreButton::WorldMap_RiftStoreButton() */

void __thiscall WorldMap_RiftStoreButton::WorldMap_RiftStoreButton(WorldMap_RiftStoreButton *this)

{
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIButtonWidget::UIButtonWidget((UIButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0667c650;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftStoreButton_0667c800;
  std::string::string(asStack_30,"Play_UI_Menu_Button_Continue_Press");
  UIButtonWidget::SetSoundPressed(this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Rift_Perks_Panel_Open");
  UIButtonWidget::SetSoundReleased(this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,(CachedUIResourcePtr *)&DAT_06aab770);
  UIButtonWidget::SetImageNormal((UIButtonWidget *)this,asStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,(CachedUIResourcePtr *)&DAT_06aab7d8);
  UIButtonWidget::SetImagePressed((UIButtonWidget *)this,asStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftStoreButton::StaticNew() */

WorldMap_RiftStoreButton * WorldMap_RiftStoreButton::StaticNew(void)

{
  WorldMap_RiftStoreButton *this;
  
  this = ::operator_new(0x1f0);
  WorldMap_RiftStoreButton(this);
  return this;
}

