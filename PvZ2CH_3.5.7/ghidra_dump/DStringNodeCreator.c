// Class: DStringNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNodeCreator::create() */

void DStringNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DStringNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DStringNode>::DRefPtr(aDStack_10);
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
/* DStringNodeCreator::DStringNodeCreator() */

void __thiscall DStringNodeCreator::DStringNodeCreator(DStringNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::DTransformNodeCreator((DTransformNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a265c0;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DStringNode");
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
/* DStringNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DStringNodeCreator::loadConfig
          (DStringNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  bool bVar2;
  DNodeLoader *this_00;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18 [2];
  string asStack_10 [4];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::string::string((string *)local_18,"text");
    std::string::string(asStack_10,"");
    DIniField::getItem((string *)param_2,(string *)local_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    cVar1 = FUN_0547419c(asStack_38);
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"isFromFile");
      cVar1 = DIniField::getItemBool(param_2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 == '\0') {
        uVar4 = FUN_0547429c(asStack_38);
        (**(code **)(*(long *)param_1 + 0x338))(param_1,uVar4);
      }
      else {
        FUN_031f5e7c((string *)local_18,&DAT_05593308,asStack_38);
        std::operator+((string *)local_18,"]");
        FUN_05474278(asStack_38,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string((string *)local_18);
        uVar4 = FUN_0547429c(asStack_38);
        (**(code **)(*(long *)param_1 + 0x330))(param_1,uVar4);
      }
    }
    std::string::string((string *)local_18,"HAlign");
    std::string::string(asStack_10,"");
    DIniField::getItem((string *)param_2,(string *)local_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    bVar2 = std::operator==(asStack_30,"left");
    if (bVar2) {
      (**(code **)(*(long *)param_1 + 0x350))(param_1,0);
    }
    else {
      bVar2 = std::operator==(asStack_30,"right");
      if (bVar2) {
        (**(code **)(*(long *)param_1 + 0x350))(param_1,2);
      }
      else {
        bVar2 = std::operator==(asStack_30,"center");
        if (bVar2) {
          (**(code **)(*(long *)param_1 + 0x350))(param_1,1);
        }
      }
    }
    std::string::string((string *)local_18,"VAlign");
    std::string::string(asStack_10,"");
    DIniField::getItem((string *)param_2,(string *)local_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    bVar2 = std::operator==(asStack_28,"top");
    if (bVar2) {
      (**(code **)(*(long *)param_1 + 0x358))(param_1,0);
    }
    else {
      bVar2 = std::operator==(asStack_28,"bottom");
      if (bVar2) {
        (**(code **)(*(long *)param_1 + 0x358))(param_1,2);
      }
      else {
        bVar2 = std::operator==(asStack_28,"center");
        if (bVar2) {
          (**(code **)(*(long *)param_1 + 0x358))(param_1,1);
        }
      }
    }
    std::string::string((string *)local_18,"fontType");
    std::string::string(asStack_10,"");
    DIniField::getItem((string *)param_2,(string *)local_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    cVar1 = FUN_0547419c(asStack_20);
    if (cVar1 == '\0') {
      this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
      lVar3 = DNodeLoader::getFontType(this_00,asStack_20);
      if (lVar3 != 0) {
        (**(code **)(*(long *)param_1 + 0x340))(param_1,lVar3);
      }
    }
    DNodeSetSize(param_1,param_2);
    pcVar5 = *(code **)(*(long *)param_1 + 0x138);
    (**(code **)(*(long *)param_1 + 0x218))((string *)local_18,param_1);
    (**(code **)(*(long *)param_1 + 0x218))(asStack_10,param_1);
    (*pcVar5)(0,0,local_18[0],local_c,param_1);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

