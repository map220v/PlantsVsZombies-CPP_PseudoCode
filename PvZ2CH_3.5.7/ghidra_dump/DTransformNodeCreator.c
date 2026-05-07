// Class: DTransformNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNodeCreator::create() */

void DTransformNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DTransformNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DTransformNode>::DRefPtr(aDStack_10);
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
/* DTransformNodeCreator::DTransformNodeCreator() */

void __thiscall DTransformNodeCreator::DTransformNodeCreator(DTransformNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeCreator::DNodeCreator((DNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a263c0;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DTransformNode");
  DNodeLoader::addNodeCreator(this_00,asStack_10,(DNodeCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNodeCreator::loadConfigAfter(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

undefined8
DTransformNodeCreator::loadConfigAfter
          (DTransformNode *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  DNodeScaleToSize((DTransformNode *)param_2,(DIniField *)param_3);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DTransformNodeCreator::loadConfig
          (DTransformNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  DString *pDVar13;
  undefined8 uVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  DVec2 aDStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [16];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"x");
  fVar16 = (float)DIniField::getItemFloat(param_2,(string *)&local_20,*(float *)(this + 0x10));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"y");
  fVar17 = (float)DIniField::getItemFloat(param_2,(string *)&local_20,*(float *)(this + 0x14));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"px");
  uVar18 = DIniField::getItemFloat(param_2,(string *)&local_20,*(float *)(this + 8));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"py");
  uVar19 = DIniField::getItemFloat(param_2,(string *)&local_20,*(float *)(this + 0xc));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"sx");
  fVar20 = (float)(**(code **)(*(long *)param_1 + 0x1d0))(param_1);
  uVar21 = DIniField::getItemFloat(param_2,(string *)&local_20,fVar20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"sy");
  fVar20 = (float)(**(code **)(*(long *)param_1 + 0x1d8))(param_1);
  uVar22 = DIniField::getItemFloat(param_2,(string *)&local_20,fVar20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"rot");
  fVar20 = (float)(**(code **)(*(long *)param_1 + 0x1f0))(param_1);
  uVar23 = DIniField::getItemFloat(param_2,(string *)&local_20,fVar20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"ax");
  pfVar9 = (float *)(**(code **)(*(long *)param_1 + 0x200))(param_1);
  uVar24 = DIniField::getItemFloat(param_2,(string *)&local_20,*pfVar9);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"ay");
  lVar10 = (**(code **)(*(long *)param_1 + 0x200))(param_1);
  uVar25 = DIniField::getItemFloat(param_2,(string *)&local_20,*(float *)(lVar10 + 4));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"ingoreAnchor");
  bVar1 = (bool)(**(code **)(*(long *)param_1 + 0x1a8))(param_1);
  uVar5 = DIniField::getItemBool(param_2,(string *)&local_20,bVar1);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"cascadeColor");
  bVar1 = (bool)(**(code **)(*(long *)param_1 + 0x250))(param_1);
  uVar2 = DIniField::getItemBool(param_2,(string *)&local_20,bVar1);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"cascadeOpacity");
  bVar1 = (bool)(**(code **)(*(long *)param_1 + 0x260))(param_1);
  uVar3 = DIniField::getItemBool(param_2,(string *)&local_20,bVar1);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"zorder");
  if (*(code **)(*(long *)param_1 + 0xf8) == DTransformNode::getZOrder) {
    iVar6 = DTransformNode::getZOrder(param_1);
  }
  else {
    iVar6 = (**(code **)(*(long *)param_1 + 0xf8))();
  }
  uVar7 = DIniField::getItemInt(param_2,(string *)&local_20,iVar6);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"visible");
  bVar1 = (bool)(**(code **)(*(long *)param_1 + 0xe0))(param_1);
  uVar8 = DIniField::getItemBool(param_2,(string *)&local_20,bVar1);
  std::string::~string((string *)&local_20);
  nop();
  DNodeSetSize(param_1,param_2);
  *(undefined4 *)(this + 8) = uVar18;
  *(undefined4 *)(this + 0xc) = uVar19;
  *(float *)(this + 0x10) = fVar16;
  *(float *)(this + 0x14) = fVar17;
  DVec2::DVec2(aDStack_70,fVar16,fVar17);
  lVar10 = *(long *)param_1;
  if (*(code **)(lVar10 + 0x238) == DTransformNode::getParent) {
    lVar11 = DTransformNode::getParent(param_1);
  }
  else {
    lVar11 = (**(code **)(lVar10 + 0x238))();
    lVar10 = *(long *)param_1;
  }
  if (lVar11 != 0) {
    if (*(code **)(lVar10 + 0x238) == DTransformNode::getParent) {
      plVar12 = (long *)DTransformNode::getParent(param_1);
    }
    else {
      plVar12 = (long *)(**(code **)(lVar10 + 0x238))();
    }
    (**(code **)(*plVar12 + 0xd0))((string *)&local_20,uVar18,uVar19);
    DVec2::operator+=(aDStack_70,(DVec2 *)&local_20);
    lVar10 = *(long *)param_1;
  }
  (**(code **)(lVar10 + 0xd8))(param_1,uVar8);
  (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar7);
  (**(code **)(*(long *)param_1 + 0x108))(param_1,aDStack_70);
  (**(code **)(*(long *)param_1 + 0x148))(uVar21,uVar22,param_1);
  (**(code **)(*(long *)param_1 + 0x178))(uVar23,param_1);
  (**(code **)(*(long *)param_1 + 0x130))(uVar24,uVar25,param_1);
  (**(code **)(*(long *)param_1 + 0x198))(param_1,uVar5);
  std::string::string(asStack_30,"shader");
  std::string::string((string *)&local_20,"");
  DIniField::getItem((string *)param_2,asStack_30);
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string(asStack_30);
  nop();
  cVar4 = FUN_0547419c(asStack_68);
  if (cVar4 == '\0') {
    (**(code **)(*(long *)param_1 + 0x2e0))(param_1,asStack_68);
  }
  DTransformNode::setName(param_1,param_3);
  std::string::string(asStack_48,"rgba");
  std::string::string(asStack_30,"");
  DIniField::getItem((string *)param_2,asStack_48);
  DString::DString(aDStack_40,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_48);
  nop();
  cVar4 = DString::empty(aDStack_40);
  if (cVar4 == '\0') {
    DString::replace((char *)aDStack_40," ");
    DString::operator=(aDStack_40,(DString *)&local_20);
    DString::~DString((DString *)&local_20);
    DString::split((char *)aDStack_40,0x5593348);
    uVar14 = local_20;
    lVar10 = FUN_04f96014(local_20,local_18);
    if (lVar10 == 4) {
      pcVar15 = *(code **)(*(long *)param_1 + 0x270);
      pDVar13 = (DString *)FUN_04f96020(uVar14,0);
      uVar5 = DString::toInt(pDVar13);
      pDVar13 = (DString *)FUN_04f96020(local_20,1);
      uVar18 = DString::toInt(pDVar13);
      pDVar13 = (DString *)FUN_04f96020(local_20,2);
      uVar19 = DString::toInt(pDVar13);
      pDVar13 = (DString *)FUN_04f96020(local_20,3);
      uVar21 = DString::toInt(pDVar13);
      (*pcVar15)(param_1,uVar5,uVar18,uVar19,uVar21);
    }
    std::vector<DString,std::allocator<DString>>::~vector
              ((vector<DString,std::allocator<DString>> *)&local_20);
  }
  (**(code **)(*(long *)param_1 + 600))(param_1,uVar3);
  (**(code **)(*(long *)param_1 + 0x248))(param_1,uVar2);
  std::string::string(asStack_50,"tween");
  std::string::string(asStack_48,"");
  DIniField::getItem((string *)param_2,asStack_50);
  DString::DString((DString *)asStack_30,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  cVar4 = DString::empty((DString *)asStack_30);
  if (cVar4 == '\0') {
    DString::replace((char *)asStack_30," ");
    DString::operator=((DString *)asStack_30,(DString *)&local_20);
    DString::~DString((DString *)&local_20);
    DString::split((char *)asStack_30,0x5593348);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      pDVar13 = (DString *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      DString::operator_cast_to_string(pDVar13);
      DNodeLoaderConfig::loadAction((string *)param_4);
      std::string::~string(asStack_48);
      cVar4 = Sexy::CompiledMap::Initialized((CompiledMap *)asStack_50);
      if (cVar4 != '\0') {
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_50);
        (**(code **)(*(long *)param_1 + 0x298))(param_1,uVar14);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_50);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_60);
    }
    std::vector<DString,std::allocator<DString>>::~vector
              ((vector<DString,std::allocator<DString>> *)&local_20);
  }
  DString::~DString((DString *)asStack_30);
  DString::~DString(aDStack_40);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

