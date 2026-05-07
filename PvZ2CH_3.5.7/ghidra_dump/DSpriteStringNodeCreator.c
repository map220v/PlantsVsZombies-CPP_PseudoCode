// Class: DSpriteStringNodeCreator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteStringNodeCreator::create() */

void DSpriteStringNodeCreator::create(void)

{
  DRef *this;
  undefined8 uVar1;
  DRefPtr<DSpriteStringNode> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSpriteStringNode>::DRefPtr(aDStack_10);
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
/* DSpriteStringNodeCreator::DSpriteStringNodeCreator() */

void __thiscall DSpriteStringNodeCreator::DSpriteStringNodeCreator(DSpriteStringNodeCreator *this)

{
  DNodeLoader *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::DTransformNodeCreator((DTransformNodeCreator *)this);
  *(undefined ***)this = &PTR_nop_06a26580;
  this_00 = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
  std::string::string(asStack_10,"DSpriteStringNode");
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
/* DSpriteStringNodeCreator::loadConfig(DTransformNode*, DIniField*, std::string const&,
   DNodeLoaderConfig*) */

void __thiscall
DSpriteStringNodeCreator::loadConfig
          (DSpriteStringNodeCreator *this,DTransformNode *param_1,DIniField *param_2,string *param_3
          ,DNodeLoaderConfig *param_4)

{
  char cVar1;
  long lVar2;
  DString *pDVar3;
  string *this_00;
  char *__s;
  undefined8 uVar4;
  size_t __n;
  ulong uVar5;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  DString aDStack_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNodeCreator::loadConfig((DTransformNodeCreator *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (DTransformNode *)0x0) {
    std::
    unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::unordered_map((ulong)auStack_40,(hash *)0xa,(equal_to *)asStack_70,(allocator *)aDStack_68);
    uVar5 = 0;
    while( true ) {
      DString::Format("res_%d",(vector<DString,std::allocator<DString>> *)&local_58,uVar5);
      DString::operator_cast_to_string((DString *)&local_58);
      std::string::string(asStack_78,"");
      DIniField::getItem((string *)param_2,asStack_80);
      DString::DString(aDStack_68,asStack_70);
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
      nop();
      std::string::~string(asStack_80);
      DString::~DString((DString *)&local_58);
      cVar1 = DString::empty(aDStack_68);
      if (cVar1 != '\0') break;
      DString::replace((char *)aDStack_68," ");
      DString::operator=(aDStack_68,(DString *)&local_58);
      DString::~DString((DString *)&local_58);
      __n = 0;
      DString::split((char *)aDStack_68,0x55933a0);
      uVar4 = local_58;
      lVar2 = FUN_04f96014(local_58,local_50);
      if (lVar2 == 2) {
        pDVar3 = (DString *)FUN_04f96020(uVar4,0);
        DString::operator_cast_to_string(pDVar3);
        this_00 = (string *)
                  std::
                  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  ::operator[](auStack_40,asStack_70);
        pDVar3 = (DString *)FUN_04f96020(local_58,1);
        __s = (char *)DString::c_str(pDVar3);
        std::string::append(this_00,__s,__n);
        std::string::~string(asStack_70);
      }
      std::vector<DString,std::allocator<DString>>::~vector
                ((vector<DString,std::allocator<DString>> *)&local_58);
      DString::~DString(aDStack_68);
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    DString::~DString(aDStack_68);
    (**(code **)(*(long *)param_1 + 0x330))(param_1,auStack_40);
    std::string::string((string *)aDStack_68,"text");
    std::string::string((string *)&local_58,"");
    DIniField::getItem((string *)param_2,(string *)aDStack_68);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)aDStack_68);
    nop();
    cVar1 = FUN_0547419c(asStack_70);
    if (cVar1 == '\0') {
      uVar4 = FUN_0547429c(asStack_70);
      (**(code **)(*(long *)param_1 + 0x338))(param_1,uVar4);
    }
    std::string::~string(asStack_70);
    std::
    unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~unordered_map(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

