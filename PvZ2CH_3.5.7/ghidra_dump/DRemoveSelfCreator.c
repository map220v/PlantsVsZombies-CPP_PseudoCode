// Class: DRemoveSelfCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DRemoveSelfCreator::create() */

void DRemoveSelfCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DRemoveSelf> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DRemoveSelf>::DRefPtr(aDStack_10);
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
/* DRemoveSelfCreator::DRemoveSelfCreator() */

void __thiscall DRemoveSelfCreator::DRemoveSelfCreator(DRemoveSelfCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26180;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DRemoveSelf");
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
/* DRemoveSelfCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void DRemoveSelfCreator::loadConfig
               (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::loadConfig(param_1,param_2,param_3,param_4);
  if (param_2 != (DIniField *)0x0) {
    std::string::string(asStack_30,"cleanup");
    std::string::string(asStack_28,"");
    DIniField::getItem(param_3,asStack_30);
    DString::DString(aDStack_18,asStack_20);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    cVar1 = DString::empty(aDStack_18);
    if (cVar1 == '\0') {
      pcVar3 = *(code **)(*(long *)param_2 + 0x40);
      iVar2 = DString::toInt(aDStack_18);
      (*pcVar3)(param_2,iVar2 != 0);
    }
    DString::~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

