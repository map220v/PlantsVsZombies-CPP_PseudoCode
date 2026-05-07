// Class: DFadeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFadeCreator::create() */

void DFadeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DFade> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DFade>::DRefPtr(aDStack_10);
  this = (DRef *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
  DRef::ref(this);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFadeCreator::DFadeCreator() */

void __thiscall DFadeCreator::DFadeCreator(DFadeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26120;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DFade");
  DNodeLoader::addActionCreator(this_00,asStack_10,(DActionBaseCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFadeCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void DFadeCreator::loadConfig
               (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  char cVar1;
  code *pcVar2;
  string asStack_50 [8];
  string asStack_48 [8];
  undefined4 local_40 [2];
  DString aDStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::loadConfig(param_1,param_2,param_3,param_4);
  if (param_2 != (DIniField *)0x0) {
    std::string::string((string *)local_40,"from");
    std::string::string(asStack_28,"");
    DIniField::getItem(param_3,(string *)local_40);
    DString::DString(aDStack_38,(string *)local_18);
    std::string::~string((string *)local_18);
    std::string::~string(asStack_28);
    nop();
    std::string::~string((string *)local_40);
    nop();
    cVar1 = DString::empty(aDStack_38);
    if (cVar1 == '\0') {
      pcVar2 = (code *)**(undefined8 **)(param_2 + 0x90);
      local_18[0] = DString::toFloat(aDStack_38);
      (*pcVar2)(param_2 + 0x90,(string *)local_18);
    }
    std::string::string(asStack_48,"to");
    std::string::string((string *)local_40,"");
    DIniField::getItem(param_3,asStack_48);
    DString::DString((DString *)asStack_28,(string *)local_18);
    std::string::~string((string *)local_18);
    std::string::~string((string *)local_40);
    nop();
    std::string::~string(asStack_48);
    nop();
    cVar1 = DString::empty((DString *)asStack_28);
    if (cVar1 == '\0') {
      pcVar2 = *(code **)(*(long *)(param_2 + 0x90) + 8);
      local_18[0] = DString::toFloat((DString *)asStack_28);
      (*pcVar2)(param_2 + 0x90,(string *)local_18);
    }
    std::string::string(asStack_50,"by");
    std::string::string(asStack_48,"");
    DIniField::getItem(param_3,asStack_50);
    DString::DString((DString *)local_18,(string *)local_40);
    std::string::~string((string *)local_40);
    std::string::~string(asStack_48);
    nop();
    std::string::~string(asStack_50);
    nop();
    cVar1 = DString::empty((DString *)local_18);
    if (cVar1 == '\0') {
      pcVar2 = *(code **)(*(long *)(param_2 + 0x90) + 0x10);
      local_40[0] = DString::toFloat((DString *)local_18);
      (*pcVar2)(param_2 + 0x90,(string *)local_40);
    }
    DString::~DString((DString *)local_18);
    DString::~DString((DString *)asStack_28);
    DString::~DString(aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

