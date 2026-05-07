// Class: DScrollViewCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollViewCreator::create() */

void DScrollViewCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DScrollView> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DScrollView>::DRefPtr(aDStack_10);
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
/* DScrollViewCreator::DScrollViewCreator() */

void __thiscall DScrollViewCreator::DScrollViewCreator(DScrollViewCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTouchLayerCreator::DTouchLayerCreator((DTouchLayerCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26640;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DScrollView");
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
/* DScrollViewCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DScrollViewCreator::loadConfig
          (DScrollViewCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  DNodeLoader *pDVar5;
  long lVar6;
  DTouchLayer *pDVar7;
  float fVar8;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DString aDStack_38 [16];
  string asStack_28 [16];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTouchLayerCreator::loadConfig((DTouchLayerCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (DTransformNode *)0x0) goto LAB_04fa3e5c;
  std::string::string(asStack_40,"w");
  std::string::string(asStack_28,"");
  DIniField::getItem((string *)param_2,asStack_40);
  DString::DString(aDStack_38,(string *)&local_18);
  std::string::~string((string *)&local_18);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"h");
  std::string::string(asStack_40,"");
  DIniField::getItem((string *)param_2,asStack_48);
  DString::DString((DString *)asStack_28,(string *)&local_18);
  std::string::~string((string *)&local_18);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  nop();
  cVar1 = DString::empty(aDStack_38);
  if (cVar1 == '\0') {
    cVar1 = DString::operator==(aDStack_38,"screen");
    if (cVar1 == '\0') {
      fVar8 = (float)DString::toFloat(aDStack_38);
      goto LAB_04fa3cb8;
    }
    pDVar5 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
    puVar4 = (undefined4 *)DNodeLoader::getScreenSize(pDVar5);
    fVar8 = (float)FUN_04f96310(*puVar4);
    cVar1 = DString::empty((DString *)asStack_28);
    if (cVar1 == '\0') goto LAB_04fa3ed4;
LAB_04fa3cc8:
    DScrollView::getViewSize();
  }
  else {
    DScrollView::getViewSize();
    fVar8 = local_18;
LAB_04fa3cb8:
    cVar1 = DString::empty((DString *)asStack_28);
    if (cVar1 != '\0') goto LAB_04fa3cc8;
LAB_04fa3ed4:
    cVar1 = DString::operator==((DString *)asStack_28,"screen");
    if (cVar1 == '\0') {
      local_14 = (float)DString::toFloat((DString *)asStack_28);
    }
    else {
      pDVar5 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
      lVar6 = DNodeLoader::getScreenSize(pDVar5);
      local_14 = (float)FUN_04f96310(*(undefined4 *)(lVar6 + 4));
    }
  }
  DVec2::DVec2((DVec2 *)&local_18,fVar8,local_14);
  uVar3 = DScrollView::getContainer((DScrollView *)param_1);
  DScrollView::initWithViewSize((DScrollView *)param_1,(string *)&local_18,uVar3);
  std::string::string(asStack_50,"direction");
  std::string::string(asStack_48,"");
  DIniField::getItem((string *)param_2,asStack_50);
  DString::DString((DString *)&local_18,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  cVar1 = DString::empty((DString *)&local_18);
  if (cVar1 == '\0') {
    cVar1 = DString::operator==((DString *)&local_18,"vertical");
    if (cVar1 == '\0') {
      cVar1 = DString::operator==((DString *)&local_18,"horizontal");
      if (cVar1 == '\0') {
        cVar1 = DString::operator==((DString *)&local_18,"both");
        if (cVar1 != '\0') {
          (**(code **)(*(long *)param_1 + 0x368))(param_1,2);
        }
      }
      else {
        (**(code **)(*(long *)param_1 + 0x368))(param_1,0);
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0x368))(param_1,1);
    }
  }
  std::string::string(asStack_40,"bounce");
  bVar2 = (bool)FUN_04f96010(param_1[0x19c]);
  bVar2 = (bool)DIniField::getItemBool(param_2,asStack_40,bVar2);
  std::string::~string(asStack_40);
  nop();
  DScrollView::setBounceable((DScrollView *)param_1,bVar2);
  std::string::string(asStack_48,"container");
  std::string::string(asStack_40,"");
  DIniField::getItem((string *)param_2,asStack_48);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  nop();
  cVar1 = FUN_0547419c(asStack_50);
  if (cVar1 == '\0') {
    DNodeLoaderConfig::loadNode<DTouchLayer>(param_4,asStack_50,(DTransformNode *)0x0);
    cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)asStack_40);
    if (cVar1 != '\0') {
      pDVar7 = (DTouchLayer *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
      DScrollView::setContainer((DScrollView *)param_1,pDVar7);
    }
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_40);
  }
  std::string::~string(asStack_50);
  DString::~DString((DString *)&local_18);
  DString::~DString((DString *)asStack_28);
  DString::~DString(aDStack_38);
LAB_04fa3e5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

