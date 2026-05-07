// Class: DChangeColorCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChangeColorCreator::create() */

void DChangeColorCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DChangeColor> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DChangeColor>::DRefPtr(aDStack_10);
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
/* DChangeColorCreator::DChangeColorCreator() */

void __thiscall DChangeColorCreator::DChangeColorCreator(DChangeColorCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26150;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DChangeColor");
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
/* DChangeColorCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void DChangeColorCreator::loadConfig
               (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [16];
  DString aDStack_38 [16];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::loadConfig(param_1,param_2,param_3,param_4);
  if (param_2 != (DIniField *)0x0) {
    std::string::string(asStack_48,"from");
    std::string::string(asStack_28,"");
    DIniField::getItem(param_3,asStack_48);
    DString::DString(aDStack_38,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_48);
    nop();
    cVar1 = DString::empty(aDStack_38);
    if (cVar1 == '\0') {
      uVar2 = DString::toHex(aDStack_38);
      pcVar3 = *(code **)(*(long *)param_2 + 0x40);
      DVec3::DVec3((DVec3 *)asStack_18,(float)((uint)((ulong)uVar2 >> 0x10) & 0xff) * 0.003921569,
                   (float)((uint)((ulong)uVar2 >> 8) & 0xff) * 0.003921569,
                   (float)((uint)uVar2 & 0xff) * 0.003921569);
      (*pcVar3)(param_2,asStack_18);
    }
    std::string::string(asStack_50,"to");
    std::string::string(asStack_48,"");
    DIniField::getItem(param_3,asStack_50);
    DString::DString((DString *)asStack_28,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_48);
    nop();
    std::string::~string(asStack_50);
    nop();
    cVar1 = DString::empty((DString *)asStack_28);
    if (cVar1 == '\0') {
      uVar2 = DString::toHex((DString *)asStack_28);
      pcVar3 = *(code **)(*(long *)param_2 + 0x48);
      DVec3::DVec3((DVec3 *)asStack_18,(float)((uint)((ulong)uVar2 >> 0x10) & 0xff) * 0.003921569,
                   (float)((uint)((ulong)uVar2 >> 8) & 0xff) * 0.003921569,
                   (float)((uint)uVar2 & 0xff) * 0.003921569);
      (*pcVar3)(param_2,asStack_18);
    }
    std::string::string(asStack_58,"by");
    std::string::string(asStack_50,"");
    DIniField::getItem(param_3,asStack_58);
    DString::DString((DString *)asStack_18,asStack_48);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    cVar1 = DString::empty((DString *)asStack_18);
    if (cVar1 == '\0') {
      uVar2 = DString::toHex((DString *)asStack_18);
      pcVar3 = *(code **)(*(long *)param_2 + 0x50);
      DVec3::DVec3((DVec3 *)asStack_48,(float)((uint)((ulong)uVar2 >> 0x10) & 0xff) * 0.003921569,
                   (float)((uint)((ulong)uVar2 >> 8) & 0xff) * 0.003921569,
                   (float)((uint)uVar2 & 0xff) * 0.003921569);
      (*pcVar3)(param_2,asStack_48);
    }
    DString::~DString((DString *)asStack_18);
    DString::~DString((DString *)asStack_28);
    DString::~DString(aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

