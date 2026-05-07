// Class: AdaptorJoustNetworkConnection


/* AdaptorJoustNetworkConnection::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorJoustNetworkConnection::OnBackButtonPressed(AdaptorJoustNetworkConnection *this)

{
  (**(code **)(*(long *)this + 0x318))(this,1000);
  return 1;
}


/* AdaptorJoustNetworkConnection::~AdaptorJoustNetworkConnection() */

void __thiscall
AdaptorJoustNetworkConnection::~AdaptorJoustNetworkConnection(AdaptorJoustNetworkConnection *this)

{
  *(undefined ***)this = &PTR_GetClass_066ab050;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ab3b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab3f8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustNetworkConnection::~AdaptorJoustNetworkConnection() */

void __thiscall
AdaptorJoustNetworkConnection::~AdaptorJoustNetworkConnection(AdaptorJoustNetworkConnection *this)

{
  ~AdaptorJoustNetworkConnection(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustNetworkConnection::StaticClassInit() */

void AdaptorJoustNetworkConnection::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustNetworkConnection");
    (*pcVar2)(plVar1,asStack_10,FUN_03865b58,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustNetworkConnection::StaticGetClass() */

long * AdaptorJoustNetworkConnection::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustNetworkConnection",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustNetworkConnection::GetClass() const */

long * AdaptorJoustNetworkConnection::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustNetworkConnection",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustNetworkConnection::AdaptorJoustNetworkConnection() */

void __thiscall
AdaptorJoustNetworkConnection::AdaptorJoustNetworkConnection(AdaptorJoustNetworkConnection *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066ab050;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ab3b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab3f8;
  return;
}


/* AdaptorJoustNetworkConnection::StaticNew() */

AdaptorJoustNetworkConnection * AdaptorJoustNetworkConnection::StaticNew(void)

{
  AdaptorJoustNetworkConnection *this;
  
  this = ::operator_new(0x120);
  AdaptorJoustNetworkConnection(this);
  return this;
}


/* AdaptorJoustNetworkConnection::ButtonDepress(int) */

void __thiscall
AdaptorJoustNetworkConnection::ButtonDepress(AdaptorJoustNetworkConnection *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  return;
}


/* non-virtual thunk to AdaptorJoustNetworkConnection::ButtonDepress(int) */

void __thiscall
AdaptorJoustNetworkConnection::ButtonDepress(AdaptorJoustNetworkConnection *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustNetworkConnection::onLoadUIView() */

void __thiscall AdaptorJoustNetworkConnection::onLoadUIView(AdaptorJoustNetworkConnection *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustNetworkConnection");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

