// Class: DScheduleCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScheduleCreator::create() */

void DScheduleCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DSchedule> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSchedule>::DRefPtr(aDStack_10);
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
/* DScheduleCreator::DScheduleCreator() */

void __thiscall DScheduleCreator::DScheduleCreator(DScheduleCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a261e0;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DSchedule");
  DNodeLoader::addActionCreator(this_00,asStack_10,(DActionBaseCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

