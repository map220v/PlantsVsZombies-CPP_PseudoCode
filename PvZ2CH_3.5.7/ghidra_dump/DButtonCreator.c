// Class: DButtonCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButtonCreator::create() */

void DButtonCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DButton> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DButton>::DRefPtr(aDStack_10);
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
/* DButtonCreator::DButtonCreator() */

void __thiscall DButtonCreator::DButtonCreator(DButtonCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::DTransformNodeCreator((DTransformNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26300;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DButton");
  DNodeLoader::addNodeCreator(this_00,asStack_10,(DNodeCreator *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButtonCreator::loadConfigAfter(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

undefined8
DButtonCreator::loadConfigAfter
          (DTransformNode *param_1,DIniField *param_2,string *param_3,DNodeLoaderConfig *param_4)

{
  DNodeScaleToSize((DTransformNode *)param_2,(DIniField *)param_3);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButtonCreator::loadConfig(DTransformNode*, DIniField*, std::string const&, DNodeLoaderConfig*)
    */

void __thiscall
DButtonCreator::loadConfig
          (DButtonCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3,
          DNodeLoaderConfig *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [24];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::string::string(asStack_38,"enable");
    bVar1 = (bool)(**(code **)(*(long *)param_1 + 0x330))(param_1);
    uVar4 = DIniField::getItemBool(param_2,asStack_38,bVar1);
    std::string::~string(asStack_38);
    nop();
    (**(code **)(*(long *)param_1 + 0x338))(param_1,uVar4);
    std::string::string(asStack_38,"bounce");
    if (*(code **)(*(long *)param_1 + 0x3b0) == DButton::isBounce) {
      uVar2 = DButton::isBounce((DButton *)param_1);
    }
    else {
      uVar2 = (**(code **)(*(long *)param_1 + 0x3b0))();
    }
    uVar4 = DIniField::getItemBool(param_2,asStack_38,(bool)uVar2);
    std::string::~string(asStack_38);
    nop();
    (**(code **)(*(long *)param_1 + 0x3a8))(param_1,uVar4);
    std::string::string(asStack_20,"normalNode");
    std::string::string(asStack_18,"selectNode");
    std::string::string(asStack_10,"disableNode");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_38,asStack_20,3,asStack_40
              );
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    nop();
    nop();
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_38);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      std::string::string(asStack_40,"");
      DIniField::getItem((string *)param_2,psVar5);
      std::string::~string(asStack_40);
      nop();
      cVar3 = FUN_0547419c(asStack_48);
      if (cVar3 == '\0') {
        DNodeLoaderConfig::loadNode((string *)param_4,(DTransformNode *)asStack_48);
        cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)asStack_40);
        if (cVar3 != '\0') {
          bVar1 = std::operator==(psVar5,"normalNode");
          if (bVar1) {
            uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
            (**(code **)(*(long *)param_1 + 0x388))(param_1,uVar6);
          }
          else {
            bVar1 = std::operator==(psVar5,"selectNode");
            if (bVar1) {
              uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
              (**(code **)(*(long *)param_1 + 0x390))(param_1,uVar6);
            }
            else {
              bVar1 = std::operator==(psVar5,"disableNode");
              if (bVar1) {
                uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_40);
                (**(code **)(*(long *)param_1 + 0x3a0))(param_1,uVar6);
              }
            }
          }
        }
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_40)
        ;
      }
      std::string::~string(asStack_48);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

