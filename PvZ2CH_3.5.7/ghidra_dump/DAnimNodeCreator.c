// Class: DAnimNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNodeCreator::create() */

void DAnimNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DAnimNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAnimNode>::DRefPtr(aDStack_10);
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
/* DAnimNodeCreator::DAnimNodeCreator() */

void __thiscall DAnimNodeCreator::DAnimNodeCreator(DAnimNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::DTransformNodeCreator((DTransformNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26500;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DAnimNode");
  DNodeLoader::addNodeCreator(this_00,asStack_10,(DNodeCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&, DNodeLoaderConfig*)
    */

void __thiscall
DAnimNodeCreator::loadConfig
          (DAnimNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  code *pcVar2;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::string::string(asStack_38,"anim");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_38);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_38);
    nop();
    cVar1 = FUN_0547419c(asStack_48);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1 + 0x2e8))(param_1,asStack_48);
    }
    std::string::string(asStack_38,"action");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_38);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_38);
    nop();
    cVar1 = FUN_0547419c(asStack_40);
    if (cVar1 == '\0') {
      std::string::string(asStack_30,"continus");
      cVar1 = DIniField::getItemBool(param_2,asStack_30,true);
      std::string::~string(asStack_30);
      nop();
      if (cVar1 == '\0') {
        pcVar2 = *(code **)(*(long *)param_1 + 0x340);
        std::function<void(Sexy::Graphics*)>::function(afStack_28);
        (*pcVar2)(param_1,asStack_40,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      }
      else {
        pcVar2 = *(code **)(*(long *)param_1 + 0x348);
        std::function<void(Sexy::Graphics*)>::function(afStack_28);
        (*pcVar2)(param_1,asStack_40,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      }
    }
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

