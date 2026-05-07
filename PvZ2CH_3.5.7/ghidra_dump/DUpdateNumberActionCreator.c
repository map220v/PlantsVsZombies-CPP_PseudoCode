// Class: DUpdateNumberActionCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DUpdateNumberActionCreator::create() */

void DUpdateNumberActionCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DUpdateNumberAction> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DUpdateNumberAction>::DRefPtr(aDStack_10);
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
/* DUpdateNumberActionCreator::DUpdateNumberActionCreator() */

void __thiscall
DUpdateNumberActionCreator::DUpdateNumberActionCreator(DUpdateNumberActionCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26240;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DUpdateNumberAction");
  DNodeLoader::addActionCreator(this_00,asStack_10,(DActionBaseCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DUpdateNumberActionCreator::loadConfig(DAction*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

undefined8
DUpdateNumberActionCreator::loadConfig
          (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  DActionCreator::loadConfig(param_1,param_2,param_3,param_4);
  return 1;
}

