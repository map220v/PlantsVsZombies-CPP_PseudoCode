// Class: DJumpCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DJumpCreator::create() */

void DJumpCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DJump> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DJump>::DRefPtr(aDStack_10);
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
/* DJumpCreator::DJumpCreator() */

void __thiscall DJumpCreator::DJumpCreator(DJumpCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DActionCreator::DActionCreator((DActionCreator *)this);
  *(undefined ***)this = &PTR_nop_06a260f0;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DJump");
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
/* DJumpCreator::loadConfig(DAction*, DIniField*, std::string const&, DNodeLoaderConfig*) */

void DJumpCreator::loadConfig
               (DAction *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  DString *pDVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  string asStack_80 [8];
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
  DActionCreator::loadConfig(param_1,param_2,param_3,param_4);
  if (param_2 != (DIniField *)0x0) {
    std::string::string(asStack_40,"height");
    std::string::string(asStack_30,"");
    DIniField::getItem(param_3,asStack_40);
    DString::DString(aDStack_70,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_70);
    if (cVar2 == '\0') {
      pcVar6 = *(code **)(*(long *)param_2 + 0x40);
      DString::operator_cast_to_float(aDStack_70);
      (*pcVar6)(param_2);
    }
    std::string::string(asStack_40,"jump");
    std::string::string(asStack_30,"");
    DIniField::getItem(param_3,asStack_40);
    DString::DString(aDStack_60,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_40);
    nop();
    cVar2 = DString::empty(aDStack_60);
    if (cVar2 == '\0') {
      pcVar6 = *(code **)(*(long *)param_2 + 0x48);
      iVar3 = DString::operator_cast_to_int(aDStack_60);
      (*pcVar6)(param_2,iVar3);
    }
    std::string::string(asStack_40,"from");
    std::string::string(asStack_30,"");
    DIniField::getItem(param_3,asStack_40);
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
      lVar4 = FUN_04f96014(local_20,local_18);
      if (lVar4 == 2) {
        pcVar6 = (code *)**(undefined8 **)(param_2 + 0x90);
        pDVar5 = (DString *)FUN_04f96020(uVar1,0);
        fVar7 = (float)DString::toFloat(pDVar5);
        pDVar5 = (DString *)FUN_04f96020(local_20,1);
        fVar8 = (float)DString::toFloat(pDVar5);
        DVec2::DVec2((DVec2 *)asStack_30,fVar7,fVar8);
        (*pcVar6)(param_2 + 0x90,asStack_30);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    std::string::string(asStack_78,"to");
    std::string::string(asStack_30,"");
    DIniField::getItem(param_3,asStack_78);
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
      lVar4 = FUN_04f96014(local_20,local_18);
      if (lVar4 == 2) {
        pcVar6 = *(code **)(*(long *)(param_2 + 0x90) + 8);
        pDVar5 = (DString *)FUN_04f96020(uVar1,0);
        fVar7 = (float)DString::toFloat(pDVar5);
        pDVar5 = (DString *)FUN_04f96020(local_20,1);
        fVar8 = (float)DString::toFloat(pDVar5);
        DVec2::DVec2((DVec2 *)asStack_30,fVar7,fVar8);
        (*pcVar6)(param_2 + 0x90,asStack_30);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    std::string::string(asStack_80,"by");
    std::string::string(asStack_78,"");
    DIniField::getItem(param_3,asStack_80);
    DString::DString((DString *)asStack_30,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_80);
    nop();
    cVar2 = DString::empty((DString *)asStack_30);
    if (cVar2 == '\0') {
      DString::replace((char *)asStack_30," ");
      DString::operator=((DString *)asStack_30,(DString *)&local_20);
      DString::~DString((DString *)&local_20);
      DString::split((char *)asStack_30,0x5593348);
      uVar1 = local_20;
      lVar4 = FUN_04f96014(local_20,local_18);
      if (lVar4 == 2) {
        pcVar6 = *(code **)(*(long *)(param_2 + 0x90) + 0x10);
        pDVar5 = (DString *)FUN_04f96020(uVar1,0);
        fVar7 = (float)DString::toFloat(pDVar5);
        pDVar5 = (DString *)FUN_04f96020(local_20,1);
        fVar8 = (float)DString::toFloat(pDVar5);
        DVec2::DVec2((DVec2 *)asStack_78,fVar7,fVar8);
        (*pcVar6)(param_2 + 0x90,asStack_78);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_20);
    }
    DString::~DString((DString *)asStack_30);
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

