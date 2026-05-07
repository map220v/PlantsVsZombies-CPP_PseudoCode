// Class: DSpriteNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteNodeCreator::create() */

void DSpriteNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DSpriteNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_10);
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
/* DSpriteNodeCreator::DSpriteNodeCreator() */

void __thiscall DSpriteNodeCreator::DSpriteNodeCreator(DSpriteNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::DTransformNodeCreator((DTransformNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26400;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DSpriteNode");
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
/* DSpriteNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DSpriteNodeCreator::loadConfig
          (DSpriteNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (DTransformNode *)0x0) {
    uVar2 = 0;
  }
  else {
    std::string::string(asStack_18,"img");
    std::string::string(asStack_10,"");
    DIniField::getItem((string *)param_2,asStack_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    cVar1 = FUN_0547419c(asStack_20);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1 + 0x2e8))(param_1,asStack_20);
    }
    std::string::~string(asStack_20);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

