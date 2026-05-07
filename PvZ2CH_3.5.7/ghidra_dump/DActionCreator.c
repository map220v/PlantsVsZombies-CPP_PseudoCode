// Class: DActionCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DActionCreator::create() */

void DActionCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DAction> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAction>::DRefPtr(aDStack_10);
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
/* DActionCreator::DActionCreator() */

void __thiscall DActionCreator::DActionCreator(DActionCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionBaseCreator::DActionBaseCreator((DActionBaseCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26030;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DAction");
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
/* DActionCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void DActionCreator::loadConfig
               (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  DNodeLoader *this;
  float fVar4;
  float fVar5;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"repeatTime");
  iVar2 = FUN_04f95ffc(*(undefined8 *)(param_2 + 0x70));
  iVar2 = DIniField::getItemInt((DIniField *)param_3,asStack_18,iVar2);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"delay");
  fVar4 = (float)FUN_04f96000(*(undefined4 *)(param_2 + 0x78));
  fVar4 = (float)DIniField::getItemFloat((DIniField *)param_3,asStack_18,fVar4);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"duration");
  fVar5 = (float)FUN_04f96004(*(undefined4 *)(param_2 + 0x80));
  fVar5 = (float)DIniField::getItemFloat((DIniField *)param_3,asStack_18,fVar5);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_30,"tween");
  std::string::string(asStack_28,"");
  DIniField::getItem(param_3,asStack_30);
  DString::DString((DString *)asStack_18,asStack_20);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  cVar1 = DString::empty((DString *)asStack_18);
  if (cVar1 == '\0') {
    this = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
    DString::operator_cast_to_string((DString *)asStack_18);
    uVar3 = DNodeLoader::getTweenType(this,asStack_20);
    DAction::setTween((DAction *)param_2,uVar3);
    std::string::~string(asStack_20);
  }
  DAction::setDuration((DAction *)param_2,fVar5);
  DAction::setDelayTime((DAction *)param_2,fVar4);
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_2,(Effect_Barrage *)(long)iVar2);
  DString::~DString((DString *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

