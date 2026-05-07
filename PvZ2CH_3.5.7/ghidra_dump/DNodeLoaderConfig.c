// Class: DNodeLoaderConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DRefPtr<DTouchLayer> DNodeLoaderConfig::loadNode<DTouchLayer>(std::string const&,
   DTransformNode*) */

void __thiscall
DNodeLoaderConfig::loadNode<DTouchLayer>
          (DNodeLoaderConfig *this,string *param_1,DTransformNode *param_2)

{
  DRefPtr aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadNode((string *)this,(DTransformNode *)param_1);
  dynamic_pointer_cast<DTouchLayer,DTransformNode>(aDStack_10);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DRefPtr<DChangeColor> DNodeLoaderConfig::loadAction<DChangeColor>(std::string const&) */

void __thiscall DNodeLoaderConfig::loadAction<DChangeColor>(DNodeLoaderConfig *this,string *param_1)

{
  DRefPtr aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadAction((string *)this);
  dynamic_pointer_cast<DTouchLayer,DTransformNode>(aDStack_10);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeLoaderConfig::~DNodeLoaderConfig() */

void __thiscall DNodeLoaderConfig::~DNodeLoaderConfig(DNodeLoaderConfig *this)

{
  *(undefined ***)this = &PTR__DIniFile_06a23e70;
  DFileHandler::write((DFileHandler *)this);
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::~map((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
          *)(this + 0x18));
  DFileHandler::~DFileHandler((DFileHandler *)this);
  return;
}


/* DNodeLoaderConfig::DNodeLoaderConfig() */

void __thiscall DNodeLoaderConfig::DNodeLoaderConfig(DNodeLoaderConfig *this)

{
  DFileHandler::DFileHandler((DFileHandler *)this);
  *(undefined ***)this = &PTR__DIniFile_06a23e70;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  return;
}


/* DNodeLoaderConfig::loadFromStringData(std::string const&) */

char __thiscall DNodeLoaderConfig::loadFromStringData(DNodeLoaderConfig *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = DFileHandler::initWithString((DFileHandler *)this,param_1,false);
  if (cVar1 == '\0') {
    uVar2 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF((wchar_t *)"\nDNodeLoader error,stringData = %s",uVar2);
  }
  return cVar1;
}


/* DNodeLoaderConfig::loadFile(std::string const&, bool) */

undefined8 __thiscall
DNodeLoaderConfig::loadFile(DNodeLoaderConfig *this,string *param_1,bool param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2) {
    cVar1 = DFileHandler::initWithWritablePath((DFileHandler *)this,param_1,false);
  }
  else {
    cVar1 = DFileHandler::initWithFile((DFileHandler *)this,param_1,param_2);
  }
  if (cVar1 == '\0') {
    uVar2 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF((wchar_t *)"\nDNodeLoader error,fileName = %s",uVar2);
    return 0;
  }
  return 1;
}


/* DNodeLoaderConfig::saveFile() */

void __thiscall DNodeLoaderConfig::saveFile(DNodeLoaderConfig *this)

{
  string *psVar1;
  
  psVar1 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  DFileHandler::copyToFile((DFileHandler *)this,psVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoaderConfig::getGroups(std::string const&) */

void DNodeLoaderConfig::getGroups(string *param_1)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  *this_00;
  long lVar3;
  string *psVar4;
  string *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar1 = DIniFile::isEmpty((DIniFile *)param_1);
  if ((cVar1 == '\0') &&
     (this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              *)DIniFile::getField((DIniFile *)param_1,in_x1),
     this != (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              *)0x0)) {
    this_00 = (map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               *)std::
                 _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 ::_M_root(this);
    local_18 = std::
               map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               ::begin(this_00);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar2) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      psVar4 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(lVar3 + 8));
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar4);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoaderConfig::loadAction(std::string const&) */

void DNodeLoaderConfig::loadAction(string *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  DNodeLoader *this;
  long *plVar5;
  DTouchLayer *pDVar6;
  DRef *this_00;
  string *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  string *in_x1;
  long lVar10;
  DRefPtr<DAction> *in_x8;
  long lVar11;
  long lVar12;
  string asStack_50 [8];
  DRefPtr<DTouchLayer> aDStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = DIniFile::isEmpty((DIniFile *)param_1);
  if (cVar2 == '\0') {
    psVar4 = (string *)DIniFile::getField((DIniFile *)param_1,in_x1);
    if (psVar4 == (string *)0x0) {
      uVar8 = FUN_0547429c();
      Sexy::OutputDebugStrF((wchar_t *)"actionName = %s is not exist!!!",uVar8);
    }
    else {
      std::string::string(asStack_28,"class");
      std::string::string((string *)&local_20,"");
      DIniField::getItem(psVar4,asStack_28);
      std::string::~string((string *)&local_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      this = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
      plVar5 = (long *)DNodeLoader::getActionCreator(this,asStack_50);
      if (plVar5 == (long *)0x0) {
        uVar8 = FUN_0547429c(asStack_50);
        Sexy::OutputDebugStrF((wchar_t *)"className = %s is not exist!!!",uVar8);
      }
      else {
        pDVar6 = (DTouchLayer *)(**(code **)(*plVar5 + 0x10))();
        DRefPtr<DTouchLayer>::DRefPtr(aDStack_48,pDVar6);
        cVar2 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_48);
        if (cVar2 != '\0') {
          this_00 = (DRef *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48)
          ;
          DRef::unref(this_00);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          psVar7 = psVar4;
          while( true ) {
            std::string::string(asStack_30,"clone");
            std::string::string(asStack_28,"");
            DIniField::getItem(psVar7,asStack_30);
            std::string::~string(asStack_28);
            nop();
            std::string::~string(asStack_30);
            nop();
            psVar7 = (string *)DIniFile::getField((DIniFile *)param_1,asStack_40);
            if (psVar7 == (string *)0x0) break;
            std::string::string(asStack_38,"class");
            std::string::string(asStack_30,"");
            DIniField::getItem(psVar7,asStack_38);
            cVar2 = std::operator==(asStack_50,asStack_28);
            std::string::~string(asStack_28);
            std::string::~string(asStack_30);
            nop();
            std::string::~string(asStack_38);
            nop();
            if (cVar2 == '\0') break;
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_40);
            std::string::~string(asStack_40);
          }
          std::string::~string(asStack_40);
          uVar8 = local_20;
          iVar3 = FUN_04f96028(local_20,local_18);
          uVar1 = iVar3 - 1;
          if (-1 < (int)uVar1) {
            lVar11 = (long)(int)uVar1 + -1;
            lVar10 = (long)(int)uVar1;
            lVar12 = lVar11;
            while( true ) {
              uVar8 = FUN_04f96034(uVar8,lVar10);
              FUN_05475d88(asStack_28,uVar8);
              uVar8 = DIniFile::getField((DIniFile *)param_1,asStack_28);
              uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
              (**(code **)(*plVar5 + 0x18))(plVar5,uVar9,uVar8,asStack_28,param_1);
              std::string::~string(asStack_28);
              if (lVar12 == lVar11 - (ulong)uVar1) break;
              uVar8 = local_20;
              lVar10 = lVar12;
              lVar12 = lVar12 + -1;
            }
          }
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)&local_20);
          uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,psVar4);
          DRefPtr<DAction>::DRefPtr(in_x8,(DRefPtr *)aDStack_48);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48);
          std::string::~string(asStack_50);
          goto LAB_04fa0a24;
        }
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48)
        ;
      }
      std::string::~string(asStack_50);
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)in_x8,(_func_void *)0x0);
LAB_04fa0a24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoaderConfig::loadNode(std::string const&, DTransformNode*) */

void DNodeLoaderConfig::loadNode(string *param_1,DTransformNode *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  DNodeLoader *this;
  long *plVar5;
  DTouchLayer *pDVar6;
  DRef *this_00;
  string *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *in_x2;
  code *pcVar11;
  DRefPtr<DAction> *in_x8;
  long lVar12;
  long lVar13;
  string asStack_60 [8];
  DRefPtr<DTouchLayer> aDStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = DIniFile::isEmpty((DIniFile *)param_1);
  if (cVar2 == '\0') {
    psVar4 = (string *)DIniFile::getField((DIniFile *)param_1,(string *)param_2);
    if (psVar4 == (string *)0x0) {
      uVar8 = FUN_0547429c(param_2);
      Sexy::OutputDebugStrF((wchar_t *)"nodeName = %s is not exist!!!",uVar8);
    }
    else {
      std::string::string(asStack_30,"class");
      std::string::string((string *)&local_20,"");
      DIniField::getItem(psVar4,asStack_30);
      std::string::~string((string *)&local_20);
      nop();
      std::string::~string(asStack_30);
      nop();
      this = (DNodeLoader *)DSingleton<DNodeLoader>::getInstance();
      plVar5 = (long *)DNodeLoader::getNodeCreator(this,asStack_60);
      lVar10 = DVec2::ZERO;
      if (plVar5 == (long *)0x0) {
        uVar8 = FUN_0547429c(asStack_60);
        Sexy::OutputDebugStrF((wchar_t *)"class = %s is not exist!!!",uVar8);
      }
      else {
        pcVar11 = *(code **)(*plVar5 + 0x10);
        plVar5[1] = DVec2::ZERO;
        plVar5[2] = lVar10;
        pDVar6 = (DTouchLayer *)(*pcVar11)();
        DRefPtr<DTouchLayer>::DRefPtr(aDStack_58,pDVar6);
        cVar2 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_58);
        if (cVar2 != '\0') {
          this_00 = (DRef *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58)
          ;
          DRef::unref(this_00);
          if (in_x2 != (long *)0x0) {
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
            (**(code **)(*in_x2 + 0x30))();
          }
          DRefPtr<DSprite9SliceNode>::DRefPtr
                    ((DRefPtr<DSprite9SliceNode> *)asStack_30,(DRefPtr *)aDStack_58);
          local_28 = param_1;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          psVar7 = psVar4;
          while( true ) {
            std::string::string(asStack_40,"clone");
            std::string::string(asStack_38,"");
            DIniField::getItem(psVar7,asStack_40);
            std::string::~string(asStack_38);
            nop();
            std::string::~string(asStack_40);
            nop();
            psVar7 = (string *)DIniFile::getField((DIniFile *)param_1,asStack_50);
            if (psVar7 == (string *)0x0) break;
            std::string::string(asStack_48,"class");
            std::string::string(asStack_40,"");
            DIniField::getItem(psVar7,asStack_48);
            cVar2 = std::operator==(asStack_60,asStack_38);
            std::string::~string(asStack_38);
            std::string::~string(asStack_40);
            nop();
            std::string::~string(asStack_48);
            nop();
            if (cVar2 == '\0') break;
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_50);
            std::string::~string(asStack_50);
          }
          std::string::~string(asStack_50);
          uVar8 = local_20;
          iVar3 = FUN_04f96028(local_20,local_18);
          uVar1 = iVar3 - 1;
          if (-1 < (int)uVar1) {
            lVar12 = (long)(int)uVar1 + -1;
            lVar10 = (long)(int)uVar1;
            lVar13 = lVar12;
            while( true ) {
              uVar8 = FUN_04f96034(uVar8,lVar10);
              FUN_05475d88(asStack_38,uVar8);
              uVar8 = DIniFile::getField((DIniFile *)param_1,asStack_38);
              uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
              (**(code **)(*plVar5 + 0x18))(plVar5,uVar9,uVar8,asStack_38,param_1);
              FUN_04fa4008(asStack_30,uVar8);
              uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
              (**(code **)(*plVar5 + 0x20))(plVar5,uVar9,uVar8,asStack_38,param_1);
              std::string::~string(asStack_38);
              if (lVar13 == lVar12 - (ulong)uVar1) break;
              uVar8 = local_20;
              lVar10 = lVar13;
              lVar13 = lVar13 + -1;
            }
          }
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)&local_20);
          uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,psVar4,param_2,param_1);
          FUN_04fa4008(asStack_30,psVar4);
          uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
          (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,psVar4,param_2,param_1);
          DRefPtr<DAction>::DRefPtr(in_x8,(DRefPtr *)aDStack_58);
          std::_Destroy<DRefPtr<DSpriteNode>>((DRefPtr *)asStack_30);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
          std::string::~string(asStack_60);
          goto LAB_04fa3100;
        }
        uVar8 = FUN_0547429c(param_2);
        Sexy::OutputDebugStrF((wchar_t *)"nodeName = %s create error!!!",uVar8);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58)
        ;
      }
      std::string::~string(asStack_60);
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)in_x8,(_func_void *)0x0);
LAB_04fa3100:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

