// Class: DAtlasSpriteNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAtlasSpriteNodeCreator::create() */

void DAtlasSpriteNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DAtlasSpriteNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_10);
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
/* DAtlasSpriteNodeCreator::DAtlasSpriteNodeCreator() */

void __thiscall DAtlasSpriteNodeCreator::DAtlasSpriteNodeCreator(DAtlasSpriteNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSpriteNodeCreator::DSpriteNodeCreator((DSpriteNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26440;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DAtlasSpriteNode");
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
/* DAtlasSpriteNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DAtlasSpriteNodeCreator::loadConfig
          (DAtlasSpriteNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  DString *pDVar5;
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (DTransformNode *)0x0) {
    uVar3 = 0;
  }
  else {
    std::string::string((string *)&local_30,"img");
    std::string::string((string *)&local_20,"");
    DIniField::getItem((string *)param_2,(string *)&local_30);
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_30);
    nop();
    cVar1 = FUN_0547419c(asStack_50);
    if (cVar1 == '\0') {
      std::string::string(asStack_48,"rect");
      std::string::string((string *)&local_30,"");
      DIniField::getItem((string *)param_2,asStack_48);
      DString::DString(aDStack_40,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_30);
      nop();
      std::string::~string(asStack_48);
      nop();
      cVar1 = DString::empty(aDStack_40);
      if (cVar1 == '\0') {
        DString::replace((char *)aDStack_40," ");
        DString::operator=(aDStack_40,(DString *)&local_20);
        DString::~DString((DString *)&local_20);
        DString::split((char *)aDStack_40,0x5593348);
        lVar4 = FUN_04f96014(local_20,local_18);
        if (lVar4 == 4) {
          Sexy::Insets::Insets((Insets *)&local_30);
          pDVar5 = (DString *)FUN_04f96020(local_20,0);
          local_30 = DString::toInt(pDVar5);
          pDVar5 = (DString *)FUN_04f96020(local_20,1);
          local_2c = DString::toInt(pDVar5);
          pDVar5 = (DString *)FUN_04f96020(local_20,2);
          local_28 = DString::toInt(pDVar5);
          pDVar5 = (DString *)FUN_04f96020(local_20,3);
          local_24 = DString::toInt(pDVar5);
          (**(code **)(*(long *)param_1 + 0x348))(param_1,asStack_50,(string *)&local_30);
        }
        else {
          std::string::string((string *)&local_30,"isAtlas");
          uVar2 = DIniField::getItemBool(param_2,(string *)&local_30,false);
          std::string::~string((string *)&local_30);
          nop();
          (**(code **)(*(long *)param_1 + 0x338))(param_1,asStack_50,uVar2);
        }
        std::vector<DString,std::allocator<DString>>::~vector
                  ((vector<DString,std::allocator<DString>> *)&local_20);
      }
      else {
        std::string::string((string *)&local_20,"isAtlas");
        uVar2 = DIniField::getItemBool(param_2,(string *)&local_20,false);
        std::string::~string((string *)&local_20);
        nop();
        (**(code **)(*(long *)param_1 + 0x338))(param_1,asStack_50,uVar2);
      }
      DString::~DString(aDStack_40);
    }
    std::string::~string(asStack_50);
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

