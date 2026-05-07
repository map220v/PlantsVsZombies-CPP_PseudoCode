// Class: DTextFieldCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextFieldCreator::create() */

void DTextFieldCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DTextField> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DTextField>::DRefPtr(aDStack_10);
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
/* DTextFieldCreator::DTextFieldCreator() */

void __thiscall DTextFieldCreator::DTextFieldCreator(DTextFieldCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DStringNodeCreator::DStringNodeCreator((DStringNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26540;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DTextField");
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
/* DTextFieldCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DTextFieldCreator::loadConfig
          (DTextFieldCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  DString *pDVar8;
  code *pcVar9;
  string asStack_78 [8];
  DString aDStack_70 [16];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  string asStack_40 [16];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DStringNodeCreator::loadConfig((DStringNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::string::string(asStack_40,"charNum");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_40);
    DString::DString(aDStack_70,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_70);
    if (cVar2 == '\0') {
      pcVar9 = *(code **)(*(long *)param_1 + 0x3f8);
      iVar3 = DString::toInt(aDStack_70);
      (*pcVar9)(param_1,(long)iVar3);
    }
    std::string::string(asStack_40,"type");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_40);
    DString::DString(aDStack_60,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_60);
    if (cVar2 == '\0') {
      cVar2 = DString::operator==(aDStack_60,"phoneNum");
      if (cVar2 == '\0') {
        cVar2 = DString::operator==(aDStack_60,"default");
        if (cVar2 == '\0') {
          cVar2 = DString::operator==(aDStack_60,"email");
          if (cVar2 != '\0') {
            (**(code **)(*(long *)param_1 + 0x3a0))(param_1,2);
          }
        }
        else {
          (**(code **)(*(long *)param_1 + 0x3a0))(param_1,0);
        }
      }
      else {
        (**(code **)(*(long *)param_1 + 0x3a0))(param_1,1);
      }
    }
    std::string::string(asStack_40,"inputColor");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_40);
    DString::DString(aDStack_50,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_50);
    if (cVar2 == '\0') {
      DString::replace((char *)aDStack_50," ");
      DString::operator=(aDStack_50,(DString *)&local_20);
      DString::~DString((DString *)&local_20);
      DString::split((char *)aDStack_50,0x5593348);
      uVar1 = local_20;
      lVar7 = FUN_04f96014(local_20,local_18);
      if (lVar7 == 4) {
        pcVar9 = *(code **)(*(long *)param_1 + 0x3f0);
        pDVar8 = (DString *)FUN_04f96020(uVar1,0);
        iVar3 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,1);
        iVar4 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,2);
        iVar5 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,3);
        iVar6 = DString::toInt(pDVar8);
        Sexy::Insets::Insets((Insets *)asStack_30,iVar3,iVar4,iVar5,iVar6);
        (*pcVar9)(param_1,asStack_30);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    std::string::string(asStack_78,"placeHolderColor");
    std::string::string(asStack_30,"");
    DIniField::getItem((string *)param_2,asStack_78);
    DString::DString((DString *)asStack_40,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_78);
    nop();
    cVar2 = DString::empty((DString *)asStack_40);
    if (cVar2 == '\0') {
      DString::replace((char *)asStack_40," ");
      DString::operator=((DString *)asStack_40,(DString *)&local_20);
      DString::~DString((DString *)&local_20);
      DString::split((char *)asStack_40,0x5593348);
      uVar1 = local_20;
      lVar7 = FUN_04f96014(local_20,local_18);
      if (lVar7 == 4) {
        pcVar9 = *(code **)(*(long *)param_1 + 0x3e0);
        pDVar8 = (DString *)FUN_04f96020(uVar1,0);
        iVar3 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,1);
        iVar4 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,2);
        iVar5 = DString::toInt(pDVar8);
        pDVar8 = (DString *)FUN_04f96020(local_20,3);
        iVar6 = DString::toInt(pDVar8);
        Sexy::Insets::Insets((Insets *)asStack_30,iVar3,iVar4,iVar5,iVar6);
        (*pcVar9)(param_1,asStack_30);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    std::string::string(asStack_30,"placeHolder");
    std::string::string((string *)&local_20,"");
    DIniField::getItem((string *)param_2,asStack_30);
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string(asStack_30);
    nop();
    cVar2 = FUN_0547419c(asStack_78);
    if (cVar2 == '\0') {
      std::string::string((string *)&local_20,"placeHolderFromFile");
      cVar2 = DIniField::getItemBool(param_2,(string *)&local_20,false);
      std::string::~string((string *)&local_20);
      nop();
      if (cVar2 != '\0') {
        FUN_031f5e7c(asStack_30,&DAT_05593308,asStack_78);
        std::operator+(asStack_30,"]");
        FUN_05474278(asStack_78,(string *)&local_20);
        std::string::~string((string *)&local_20);
        std::string::~string(asStack_30);
      }
      (**(code **)(*(long *)param_1 + 0x3c8))(param_1,asStack_78,cVar2);
    }
    std::string::~string(asStack_78);
    DString::~DString((DString *)asStack_40);
    DString::~DString(aDStack_50);
    DString::~DString(aDStack_60);
    DString::~DString(aDStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

