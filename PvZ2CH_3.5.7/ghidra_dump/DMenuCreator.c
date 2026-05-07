// Class: DMenuCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenuCreator::create() */

void DMenuCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DMenu> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DMenu>::DRefPtr(aDStack_10);
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
/* DMenuCreator::DMenuCreator() */

void __thiscall DMenuCreator::DMenuCreator(DMenuCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTouchLayerCreator::DTouchLayerCreator((DTouchLayerCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26600;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DMenu");
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
/* DMenuCreator::loadConfigAfter(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void DMenuCreator::loadConfigAfter
               (DTransformNode *param_1,DIniField *param_2,string *param_3,
               DNodeLoaderConfig *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  DTouchLayer *pDVar5;
  DString *pDVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DButtonCreator::loadConfigAfter(param_1,param_2,param_3,param_4);
  if (param_2 != (DIniField *)0x0) {
    std::string::string(asStack_40,"align");
    std::string::string(asStack_38,"");
    DIniField::getItem(param_3,asStack_40);
    DString::DString(aDStack_30,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_30);
    if (cVar2 == '\0') {
      DString::split((char *)aDStack_30,0x5593348);
      uVar1 = local_20;
      lVar4 = FUN_04f96014(local_20,local_18);
      if (lVar4 == 5) {
        pDVar6 = (DString *)FUN_04f96020(uVar1,0);
        iVar3 = DString::toInt(pDVar6);
        pDVar6 = (DString *)FUN_04f96020(local_20,1);
        fVar7 = (float)DString::toFloat(pDVar6);
        pDVar6 = (DString *)FUN_04f96020(local_20,2);
        fVar8 = (float)DString::toFloat(pDVar6);
        pDVar6 = (DString *)FUN_04f96020(local_20,3);
        fVar9 = (float)DString::toFloat(pDVar6);
        pDVar6 = (DString *)FUN_04f96020(local_20,4);
        fVar10 = (float)DString::toFloat(pDVar6);
        DMenu::align((DMenu *)param_2,iVar3,fVar7,fVar8,fVar9,fVar10);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    std::string::string(asStack_48,"selectRadio");
    std::string::string(asStack_40,"");
    DIniField::getItem(param_3,asStack_48);
    DString::DString((DString *)&local_20,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    std::string::~string(asStack_48);
    nop();
    cVar2 = DString::empty((DString *)&local_20);
    if (cVar2 == '\0') {
      DString::operator_cast_to_string((DString *)&local_20);
      pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)param_2);
      std::string::~string(asStack_38);
      if (pDVar5 != (DTouchLayer *)0x0) {
        (**(code **)(*(long *)param_2 + 0x390))(param_2,pDVar5);
      }
    }
    DString::~DString((DString *)&local_20);
    DString::~DString(aDStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenuCreator::loadConfig(DTransformNode*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void __thiscall
DMenuCreator::loadConfig
          (DMenuCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTouchLayerCreator::loadConfig((DTouchLayerCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::string::string(asStack_18,"isEnable");
    if (*(code **)(*(long *)param_1 + 0x388) == DMenu::isEnable) {
      uVar1 = DMenu::isEnable((DMenu *)param_1);
    }
    else {
      uVar1 = (**(code **)(*(long *)param_1 + 0x388))();
    }
    uVar3 = DIniField::getItemBool(param_2,asStack_18,(bool)uVar1);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_30,"mode");
    std::string::string(asStack_28,"");
    DIniField::getItem((string *)param_2,asStack_30);
    DString::DString((DString *)asStack_18,asStack_20);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    cVar2 = DString::empty((DString *)asStack_18);
    if (cVar2 == '\0') {
      cVar2 = DString::operator==((DString *)asStack_18,"normal");
      if (cVar2 == '\0') {
        cVar2 = DString::operator==((DString *)asStack_18,"radio");
        if (cVar2 != '\0') {
          FUN_04f96008(param_1 + 0x170,0);
        }
      }
      else {
        FUN_04f96008(param_1 + 0x170,1);
      }
    }
    (**(code **)(*(long *)param_1 + 0x380))(param_1,uVar3);
    DString::~DString((DString *)asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

