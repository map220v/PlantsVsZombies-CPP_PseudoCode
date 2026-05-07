// Class: DSprite9SliceNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSprite9SliceNodeCreator::create() */

void DSprite9SliceNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DSprite9SliceNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_10);
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
/* DSprite9SliceNodeCreator::DSprite9SliceNodeCreator() */

void __thiscall DSprite9SliceNodeCreator::DSprite9SliceNodeCreator(DSprite9SliceNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSpriteNodeCreator::DSpriteNodeCreator((DSpriteNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26480;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DSprite9SliceNode");
  DNodeLoader::addNodeCreator(this_00,asStack_10,(DNodeCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DSprite9SliceNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

undefined8 __thiscall
DSprite9SliceNodeCreator::loadConfig
          (DSprite9SliceNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3
          ,DNodeLoaderConfig *param_4)

{
  DSpriteNodeCreator::loadConfig((DSpriteNodeCreator *)this,param_1,param_2,param_3,param_4);
  DNodeSetSize(param_1,param_2);
  return 1;
}

