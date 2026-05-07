// Class: DSequenceCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSequenceCreator::create() */

void DSequenceCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DSequence> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSequence>::DRefPtr(aDStack_10);
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
/* DSequenceCreator::DSequenceCreator() */

void __thiscall DSequenceCreator::DSequenceCreator(DSequenceCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a262a0;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DSequence");
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
/* DSequenceCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void __thiscall
DSequenceCreator::loadConfig
          (DSequenceCreator *this,DAction *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  bool bVar2;
  DString *this_00;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::loadConfig
            ((DAction *)this,(DIniField *)param_1,(string *)param_2,(DNodeLoaderConfig *)param_3);
  if (param_1 != (DAction *)0x0) {
    std::string::string(asStack_40,"list");
    std::string::string(asStack_38,"");
    DIniField::getItem((string *)param_2,asStack_40);
    DString::DString(aDStack_30,asStack_20);
    std::string::~string(asStack_20);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar1 = DString::empty(aDStack_30);
    if (cVar1 == '\0') {
      DString::replace((char *)aDStack_30," ");
      DString::operator=(aDStack_30,(DString *)asStack_20);
      DString::~DString((DString *)asStack_20);
      DString::split((char *)aDStack_30,0x5593348);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        this_00 = (DString *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
        ;
        DString::operator_cast_to_string(this_00);
        DNodeLoaderConfig::loadAction((string *)param_4);
        std::string::~string(asStack_38);
        uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
        (**(code **)(*(long *)param_1 + 0x40))(param_1,uVar3);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_40)
        ;
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)asStack_20);
    }
    DString::~DString(aDStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

