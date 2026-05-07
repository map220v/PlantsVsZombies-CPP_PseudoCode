// Class: FakeHttpDriver


/* FakeHttpDriver::GetNetworkStatus() */

undefined4 __thiscall FakeHttpDriver::GetNetworkStatus(FakeHttpDriver *this)

{
  return *(undefined4 *)(this + 0x30);
}


/* FakeHttpDriver::GetNullHttpTransaction() */

void __thiscall FakeHttpDriver::GetNullHttpTransaction(FakeHttpDriver *this)

{
  std::
  unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
  ::get((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
         *)(this + 0x28));
  return;
}


/* FakeHttpDriver::FakeHttpDriver() */

void __thiscall FakeHttpDriver::FakeHttpDriver(FakeHttpDriver *this)

{
  NullHttpTransaction *this_00;
  
  Sexy::IHttpDriver::IHttpDriver((IHttpDriver *)this);
  *(undefined ***)this = &PTR__FakeHttpDriver_06792580;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(Sexy::gSexyAppBase + 0x48);
  this_00 = ::operator_new(0x50);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  NullHttpTransaction::NullHttpTransaction(this_00);
  std::
  unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
  ::unique_ptr((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                *)(this + 0x28),(IteratorStorage *)this_00);
  *(undefined4 *)(this + 0x30) = 2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FakeHttpDriver::GetInstance() */

void FakeHttpDriver::GetInstance(void)

{
  long lVar1;
  FakeHttpDriver *this;
  unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
  auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = std::
          unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
          ::get((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                 *)&m_Instance);
  if (lVar1 == 0) {
    this = ::operator_new(0x38);
    FakeHttpDriver(this);
    std::
    unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
    ::unique_ptr(auStack_10,(IteratorStorage *)this);
    std::unique_ptr<FakeHttpDriver,std::default_delete<FakeHttpDriver>>::operator=
              ((unique_ptr<FakeHttpDriver,std::default_delete<FakeHttpDriver>> *)&m_Instance,
               (unique_ptr *)auStack_10);
    std::unique_ptr<FakeHttpDriver,std::default_delete<FakeHttpDriver>>::~unique_ptr
              ((unique_ptr<FakeHttpDriver,std::default_delete<FakeHttpDriver>> *)auStack_10);
    std::
    unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
    ::get((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
           *)&m_Instance);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FakeHttpDriver::~FakeHttpDriver() */

void __thiscall FakeHttpDriver::~FakeHttpDriver(FakeHttpDriver *this)

{
  *(undefined ***)this = &PTR__FakeHttpDriver_06792580;
  *(undefined8 *)(Sexy::gSexyAppBase + 0x48) = *(undefined8 *)(this + 0x20);
  std::unique_ptr<NullHttpTransaction,std::default_delete<NullHttpTransaction>>::~unique_ptr
            ((unique_ptr<NullHttpTransaction,std::default_delete<NullHttpTransaction>> *)
             (this + 0x28));
  std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
  ::~vector((vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
             *)(this + 8));
  return;
}


/* FakeHttpDriver::~FakeHttpDriver() */

void __thiscall FakeHttpDriver::~FakeHttpDriver(FakeHttpDriver *this)

{
  ~FakeHttpDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FakeHttpDriver::CreateHttpTransaction(std::string const&, std::string const&, unsigned int) */

void FakeHttpDriver::CreateHttpTransaction(string *param_1,string *param_2,uint param_3)

{
  PACommand aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileConversionResults::LevelChange::LevelChange((LevelChange *)aPStack_18,param_2,param_3);
  std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
  ::push_back((vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>
               *)(param_1 + 8),(pair *)aPStack_18);
  Sexy::PACommand::~PACommand(aPStack_18);
  GetNullHttpTransaction((FakeHttpDriver *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

